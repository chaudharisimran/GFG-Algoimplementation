#include <bits/stdc++.h>

#include <cmath>
#include <cstdlib>
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(j, n) for (int j = 0; j < n; j++)
using namespace std;
void diff() {
    int n;
    cin >> n;
    int arr[n][n];
    rep(i, n) {
        rep1(j, n) cin >> arr[i][j];
    }
    int sum1 = 0, sum2 = 0;  //Calculating sum of first diagonal
    rep(i, n) sum1 = sum1 + arr[i][i];

    int j = 2;  // Calculating sum of second diagonal
    rep(i, n) {
        sum2 = sum2 + arr[i][j];
        j--;
    }
    cout << abs(sum1 - sum2); // Absolute difference using stl function abs
}
int main() {
    diff();
    return 0;
}
