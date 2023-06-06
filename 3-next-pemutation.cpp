#include <bits/stdc++.h> 
using namespace std;
// BRUTE FORCE (TLE)
// vector<int> nextPermutation(vector<int> &permutation, int n)
// {
//     vector<int> v;
//     vector<int> p;
//     for (int i = 0; i < n; i++) {
//         p.push_back(permutation[i]);
//     }
//     v.push_back(p[n - 1]);
//     p.pop_back(); 
//     for (int i = n -2; i >= 0; i--) {
//         if(p[i] < v[v.size() -1]) {
//             v.push_back(p[i]);
//             p.pop_back();
//             break;
//         } else {
//             v.push_back(p[i]);
//             p.pop_back();
//         }
//     }
//     int breakpointNum;
//     if(v.size() == n) {
//         if (v[n - 1] == n) {
//             sort(v.begin(), v.end());
//             return v;
//         } else {
//             breakpointNum = v[n - 1] + 1;
//             sort(v.begin(), v.end());
//             p.push_back(breakpointNum);
//     for (int i = 0; i < v.size(); i++) {
//         if (v[i] != breakpointNum) {
//             p.push_back(v[i]);
//         }
//     }
//     return p;
//         }
//     } else {
//         breakpointNum = v[v.size() - 1];
//     }
//     sort(v.begin(), v.end());
//     for (int i = 0; i < v.size(); i++) {
//         if (v[i] > breakpointNum) {
//             breakpointNum = v[i];
//             break;
//         }
//     }
//     p.push_back(breakpointNum);
//     for (int i = 0; i < v.size(); i++) {
//         if (v[i] != breakpointNum) {
//             p.push_back(v[i]);
//         }
//     }
//     return p;
// }

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int idx = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (permutation[i] < permutation[i + 1]) {
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }
    
    for (int i = n -1; i >= 0; i--) {
      if (permutation[idx] < permutation[i]) {
        swap(permutation[idx], permutation[i]);
        break;
      }
    }

    sort(permutation.begin() + idx + 1, permutation.end());
    return permutation;
    
    
}

// next_permutation can also be used from algorihtm header

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            v.push_back(temp);
        }
        vector<int> ans = nextPermutation(v, n);
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}