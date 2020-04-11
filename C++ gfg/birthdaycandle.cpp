#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define max(a, b) a > b ? a : b

using namespace std;
void Bcandels(int arr[], int n) {
    int count = 0;
    int max = 0;
    rep(i, n) if (arr[i] > max) max = arr[i];
    rep(i, n) if (arr[i] == max) count++;
    cout << count;
}

void chkAllmaxtomin(int a[]) {
    sort(a, a + sizeof(a) / sizeof(a[0]));
}


int convertFive(int n) {

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    rep(i, n) cin >> arr[i];
    Bcandels(arr, n);
    return 0;
}
