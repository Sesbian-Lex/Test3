#include <iostream>

using namespace std;

int main() {
	int ver = 0, edg = 0, row = 0, col = 0;

	cout << "Enter number of vertices:";
	cin >> ver;
	cout << "Enter number of edges: ";
	cin >> edg;
	cout << "Enter edges (u v): " << endl;

	int** matrix = new int* [ver];
	for (int i = 0; i < ver; i++) {
		matrix[i] = new int[ver];
	}

	for (int i = 0; i < ver; i++) {
		for (int j = 0; j < ver; j++) {
			matrix[i][j] = 0;
		}
	}

	for (int i = 0; i < edg; i++) {
		cin >> row >> col;
		matrix[row][col] = 1;
		matrix[col][row] = 1;
		row = 0;
		col = 0;
	}

	cout << "Ajacency Matrix: " << endl;
	for (int i = 0; i < ver; i++) {
		for (int j = 0; j < ver; j++) {
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}


	for (int i = 0; i < ver; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

}