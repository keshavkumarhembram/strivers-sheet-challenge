#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
        int sr = 0;
        int er = n - 1;
        int sc = 0;
        int ec = m - 1;
        int temp = 0;
        int k;
        while (sr < er && sc < ec) {
            temp = mat[sr + 1][sc];
            for (int i = sc; i <= ec; i++) {
                k = mat[sr][i];
                mat[sr][i] = temp;
                temp = k;
            }
            sr++;
            for (int i = sr; i <= er; i++) {
                k = mat[i][ec];
                mat[i][ec] = temp;
                temp = k;
            }
            ec--;
            for (int i = ec; i >= sc; i--) {
                k = mat[er][i];
                mat[er][i] = temp;
                temp = k;
            }
            er--;
            for (int i = er; i >= sr; i--) {
                k = mat[i][sc];
                mat[i][sc] = temp;
                temp = k;
            }
            sc++;
        }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int temp = 0;
        vector<vector<int>> mat;
        for (int i = 0; i < n; i++) {
            vector<int> v;
            for (int j = 0; j < m; j++) {
                cin >> temp;
                v.push_back(temp);
            }
            mat.push_back(v);
        }
        rotateMatrix(mat, n, m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}