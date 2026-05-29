#include<iostream>
using namespace std;
int lisearch(int arr[], int len, int inp){
    for(int i=0; i<len; i++){
        if(arr[i]==inp){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {23,45,32,12,76};
    int inp = 23;
    int len=5;
    
  int print = lisearch(arr, len, inp);
  cout<<"youre index is="<<print;
  cout<<"NUmber is "<<inp;
}