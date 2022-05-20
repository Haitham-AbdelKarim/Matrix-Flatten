#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n = 3;
	int m = 4;
	int p = 3;

	vector<vector<vector<double>>> matrix3d(n, vector<vector<double>>(m, vector<double>(p)));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < p; k++) {
				cin >> matrix3d[i][j][k];
			}
		}
	}

	// Complexity = n*m*p

	int q = n * m * p;

	vector<double> arr1d(q);

	int y = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < p; k++) {
				arr1d[y++] = matrix3d[i][j][k];
			}
		}
	}

	int  i = 2;
	int  j = 0;
	int  k = 1;

	// Index in 1D Vector O(1)
	y = k + j*p + i*n*m;

	cout << matrix3d[i][j][k] << endl;
	cout << arr1d[y] << endl;

	return 0;
}