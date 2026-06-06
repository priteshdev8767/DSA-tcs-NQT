//check the given array is sorted or not
#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        if(arr[i]>arr[i+1])
        {
            return false;
        }
       
    }
    return true;
}
int main()
{
   
    int n;
    cin>>n;
     int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    if(isSorted(arr,n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
    
}