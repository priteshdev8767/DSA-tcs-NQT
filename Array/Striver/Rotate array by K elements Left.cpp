#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    k = k%n;   //sub array bhetla                                          //left aahe mhanu assending order madhe jatoy 
    reverse(arr, arr+k); //reverse 1st sub arra
    reverse(arr+k, arr+n); // reverse remaing sub array
    reverse(arr, arr+n);// reverse whole array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
//done