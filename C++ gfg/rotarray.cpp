// program for rotation of array
#include<iostream>
using namespace std;
int main()
{
  int n;
   
    int i,j,d;
    int temp=0;
    cout<<"Enter the size of array \n";
    cin>>n;
     int array[n];
     cout<<"Enter your array\n";
     for(int i=0;i<n;i++){
       cin>>array[i];
     }
    cout<<"Enter no. of times you want to rotate\n";
    cin>>d;
    for(j=0;j<d;j++)
    {
       temp = array[0];
        for(int i=1;i<n;i++)
        {
	        array[i-1]=array[i];
	      }
	    array[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
    
}