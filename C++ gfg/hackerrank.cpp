#include<iostream>
using namespace std;

void rotateArry(int a[],int n,int k, int q){
    int newArry[n];

    for (int i = 0; i < n; i++)
    {
    	int newIndex = (i+n-k)%n;
    	newArry[newIndex]=a[i];
    }
    for (int i = 0; i < n; i++)
    {
    	cout<<newArry[i]<<" ";
    }
    for(int q=0;q<n;q++){
        cout<<a[q]<<"\n";
    }
}

int main() {
	int n,k,q;
	    /*cin>>n>>k;*/
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    rotateArry(a,n,k,q);
	    cout<<"\n";
	
	
	return 0;
}