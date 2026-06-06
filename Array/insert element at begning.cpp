#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    
    int arr[1000];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int element;
   cin>>element;
    for(int i=n; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=element;
    n++;
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    
    
    return 0;
}