#include<bits/stdc++.h>
using namespace std;
void smallerelements( int arr[],int n);
int main(){
    int t;
    cin>>t;
    while(t-- >0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        smallerelements(arr , n);
        cout<<endl;
    }
    return 0;
}
void smallerelements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) count++;
        }
        cout << count << " ";
    }
}