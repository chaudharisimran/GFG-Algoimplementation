#include <bits/stdc++.h>
using namespace std;
void Bcandels(int arr[], int n) {
    int count = 0;
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            count++;
        }
    }
    cout << count;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Bcandels(arr, n);
    return 0;
}
