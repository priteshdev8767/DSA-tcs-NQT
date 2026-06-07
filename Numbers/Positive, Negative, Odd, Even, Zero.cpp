#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //+ve, -ve, zero
    if(n==0){
        cout<<"Number is Zero";
    }
    else if(n>0){
        cout<<"Positive number ";
    }
    else{
        cout<<"Negative number ";
    }
    //ebven odd
    if(n%2==0){
        cout<<n<<"is Even";
    }
    else{
        cout<<n<<"is Odd";
    }
 return 0;
}