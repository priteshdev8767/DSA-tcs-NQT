#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int element;
    cin>>element;
    int position;
    cin>>position;
 //logic
  for(int i=n; i>position; i--){
    arr[i]=arr[i-1];
  }
  arr[position]= element;
  n++;
  for(int i=0; i<n; i++){
    cout<<arr[i]<< " ";
  }
    return 0;
}