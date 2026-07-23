#include<iostream>
using namespace std;

bool isPalidrom(string str){
    int left = 0, right = str.length()-1;
    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    string str;
    cin>>str;
    if(isPalidrom(str)){
        cout<<"String is Palindrome";

    }
    else{
        cout<<"String is not Palindrome";
    }
    return 0;
}
//done