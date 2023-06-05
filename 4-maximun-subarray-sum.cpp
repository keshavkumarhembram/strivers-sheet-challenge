#include <bits/stdc++.h> 
using namespace std;
// TLE
// long long maxSubarraySum(int arr[], int n)
// {
//     long long sum = 0;
//     long long sumArr[n + 1];
//     sumArr[0] = 0;
//     for (int k = 0; k < n; k++) {
//         sumArr[k + 1] = sumArr[k] + arr[k];
//     }
//     int size = 0;
//     while (size <= n) {
//         int i = 0;
//         int j = size;
//         long long tempSum = sumArr[size];
//             sum = max(sum, tempSum);
//         while(j < n) {
//             tempSum = tempSum - arr[i] + arr[j];
//             sum = max(sum, tempSum);
//             i++;
//             j++;
//         }
//         size++;
//     }
//     return sum;
// }

long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0;
    long long currSum = 0;
    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        if (currSum < 0) {
            currSum = 0;
        }
        sum = max(sum, currSum);
    }
    return sum;
} 

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long ans = maxSubarraySum(arr, n);
    cout << ans << endl;
    return 0;
}