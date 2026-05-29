//smalest element in array
#include<iostream>
using namespace std;
int largest(int arr[], int len){
    int max=arr[0];
    for(int i=0; i<len; i++){
       if(max<arr[i]){
           max=arr[i];
       } 
    }
    return max;
}
int main()
{
    int arr[]={2,5,1,3,0};
    int len=5;
    int print = largest(arr, len);
    cout<<"The lagedtst Eleement is "<<print<<endl;
    
}