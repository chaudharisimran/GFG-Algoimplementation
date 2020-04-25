#include <bits/stdc++.h>
using namespace std;
void plusminus(int arr[], int n) {
    float count1 = 0, count2 = 0, count3 = 0;
    float pfrac,nfrac,zfrac;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count1++;
        } else if (arr[i] < 0) {
            count2++;
        } else {
            count3++;
        }
    }
    pfrac = count1/n;
    nfrac = count2/n;
    zfrac = count3/n;

    cout<<pfrac<<endl;
    cout<<nfrac<<endl;
    cout<<zfrac<<endl;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    plusminus(arr, 6);
    return 0;
}