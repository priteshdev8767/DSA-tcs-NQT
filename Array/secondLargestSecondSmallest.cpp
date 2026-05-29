#include<bits/stdc++.h>
using namespace std;

int secoundLargest(int arr[], int n)
{
    if(n<2){
        return -1;
    }
    int slarge = INT_MIN;
    int large = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>large){
            slarge = large;
            large = arr[i];
        }
        else if(arr[i]>slarge && arr[i]!=large){
            slarge = arr[i];
        }
    }
    return slarge;
    
}
int secoundSmallest(int arr[], int n)
{
    if(n<2){
        return -1;
    }
    int ssmall = INT_MAX;
    int small = INT_MAX;
    
    for(int i=0; i<n; i++){
        if(arr[i]<small){
            ssmall = small;
            small = arr[i];
        }
        else if(arr[i]<ssmall && arr[i]!=small){
            ssmall = arr[i];
        }
    }
    return ssmall;
}
int main()
{
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = 6;
    int Ss = secoundSmallest(arr, n);
    int Sl = secoundLargest(arr, n);
    cout<<"Secound Largest"<<Sl<<endl;
    cout<<"Secound Smallest"<<Ss<<endl;
    return 0 ;
}
