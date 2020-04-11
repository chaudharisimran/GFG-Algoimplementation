#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
void compare(int arr1[], int arr2[], int n) {
    int result[2] = {0, 0};
    rep(i, n) {
        if (arr1[i] > arr2[i])
            result[0]++;
        else if (arr1[i] < arr2[i])
            result[1]++;
    }
    rep(i, 2) cout << result[i] << " ";
}
int main() {
    int arr1[3];
    int arr2[3];
    rep(i, 3) cin >> arr1[i];
    rep(i, 3) cin >> arr2[i];
    compare(arr1, arr2, 3);
    return 0;
}
