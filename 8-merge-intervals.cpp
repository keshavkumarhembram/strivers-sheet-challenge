#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < intervals.size() - 1; i++) {
        if (intervals[i][1] >= intervals[i + 1][0]) {
            intervals[i + 1][0] = min(intervals[i][0], intervals[i + 1][0]);
            intervals[i + 1][1] = max(intervals[i][1], intervals[i + 1][1]);
        } else {
            ans.push_back(intervals[i]);
        }
    }
    ans.push_back(intervals[intervals.size() - 1]);
    return ans;
}

int main () {
    int n;
    cin >> n;
    vector<vector<int>> intervals;
    vector<int> s, e;
    int temp = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        s.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        cin >> temp;
        e.push_back(temp);
    }
    for(int i = 0; i < n; i++) {
        vector<int> interval;
        interval.push_back(s[i]);
        interval.push_back(e[i]);
        intervals.push_back(interval);
    }
    vector<vector<int>> newIntervals = mergeIntervals(intervals);
    for (int i = 0; i < newIntervals.size(); i++) {
        cout << newIntervals[i][0] << " " << newIntervals[i][1] << endl;
    }
}