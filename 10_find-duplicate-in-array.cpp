#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
	// SOL1 - space - O(1), time - o(nln(n))
	sort(arr.begin(), arr.end());
	for (int i = 1; i < n; i++) {
		if (arr[i] ==arr[i - 1]) {
			return arr[i];
		}
	}

	// SOL - 2
	// bool visited[n + 1] = {false} ;
	// for (int i = 0; i < n; i++) {
	// 	if (visited[arr[i]] == true) {
	// 		return arr[i];
	// 	}
	// 	visited[arr[i]] = true;
	// }	
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        int ans = findDuplicate(arr, n);
        cout << ans << endl;
    }
    return 0;
}
