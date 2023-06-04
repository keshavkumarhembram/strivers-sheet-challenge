#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
  for (int i = 0; i < n; i++) {
    vector<long long int> v;
    for (int j = 0; j < i+1; j++) {
      if(j == 0 || j == i) {
        v.push_back(1);
      } else {
        v.push_back(ans[i-1][j] + ans[i-1][j-1]);
      }
    }
    ans.push_back(v);
  }
  return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<vector<long long int>> ans = printPascal(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i+1; j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
