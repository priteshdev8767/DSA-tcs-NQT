#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int left=0, right=str.length()-1; //focouse on that 
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    cout<<str;
  return 0;  
}