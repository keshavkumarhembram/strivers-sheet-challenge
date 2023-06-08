#include <bits/stdc++.h>
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int visited[n + 1];
	for (int i = 0; i <= n; i++) {
		visited[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		visited[arr[i]]++;
	}
	int m, r;
	for (int i = 1; i <= n; i++) {
		if(visited[i] == 2) {
			r = i;
		}
		if (visited[i] == 0) {
			m = i;
		}
	}
	return make_pair(m, r);
	
}

int main () {
    int n;
    cin >> n;
    vector<int> arr;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    pair<int, int> ans = missingAndRepeating(arr, n);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}
