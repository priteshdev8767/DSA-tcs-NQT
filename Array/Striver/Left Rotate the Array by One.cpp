#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000];
    
    
    for(int i = 0; i<n; i++ )
    {
     cin>>arr[i];
    }
    int first = arr[0]; 

    for(int i =0; i<n-1; i++)
    {
        arr[i] = arr[i+1]; //left side la sarkavaycha aahe mag oth postion la tyacha pudhacha yal;ala payje na
    }
    arr[n-1] = first;   // last position la pahila mhanje index 0 varcha yayala payje na

     for(int i = 0; i<n; i++)
     {
        cout<<arr[i]<<" ";
     }

    return 0;

}
//done