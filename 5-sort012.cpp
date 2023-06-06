#include <bits/stdc++.h>
using namespace std; 
void sort012(int *arr, int n)
{
   int i = 0;
   int j = n -1;
   int k = 0;
   while(k <= j) {
      if (arr[k] == 0) {
         swap(arr[i], arr[k]);
         i++;
         k++;
      } else if (arr[k] ==2) {
         swap(arr[j],arr[k]);
         j--;
      } else {
         k++;
      }
   }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout  << arr[i] << " ";
        }
        cout << endl;
    }
}