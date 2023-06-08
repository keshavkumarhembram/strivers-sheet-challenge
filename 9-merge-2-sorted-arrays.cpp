#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int i1, i2, i;
	i1 = m - 1;
	i2 = n - 1;
	i = m + n - 1;
	while(i2 >= 0) {
		if(arr1[i1] <= arr2[i2]) {
			arr1[i] = arr2[i2];
			i2--;
			i--;
		} else {
			arr1[i] = arr1[i1];
			i1--;
			i--;
		}
	}
	return arr1;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<int> arr1;
        vector<int> arr2;
        int temp;
        for (int i = 0; i < m + n; i++) {
            cin >> temp;
            arr1.push_back(temp);
        }
        for (int i = 0; i < n; i++) {
            cin >> temp;
            arr2.push_back(temp);
        }

        vector<int> ans = ninjaAndSortedArrays(arr1, arr2, m, n);
        for (int i = 0; i < m + n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}