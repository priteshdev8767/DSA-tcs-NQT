//smalest element in array
#include<iostream>
using namespace std;
int smalest(int arr[], int len){
    int min=arr[0];
    for(int i=0; i<len; i++){
       if(min>arr[i]){
           min=arr[i];
       } 
    }
    return min;
}
int main()
{
    int arr[]={2,5,1,3,0};
    int len=5;
    int print = smalest(arr, len);
    cout<<"The Smallest Eleement is "<<print<<endl;
    
}