#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();
	vector<int> zeroRow(n, 0);
	vector<int> zeroCol(m, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if(matrix[i][j] == 0) {
			zeroRow[i] = 1;
			zeroCol[j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if(zeroRow[i] == 1 ||zeroCol[j] == 1 ) {
				matrix[i][j] = 0;
			}
		}
	}

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix;
        int temp = 0;
        for (int i = 0; i < n; i++) {
            vector<int> v;
            for (int j = 0; j < m; j++) {
                cin >> temp ;
                v.push_back(temp);
            }
            matrix.push_back(v);
        }
        setZeros(matrix);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}