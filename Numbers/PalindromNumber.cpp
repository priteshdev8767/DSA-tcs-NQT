#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int rev=0;
    int original = n;

    while(n>0){
        rev= rev*10+(n%10);
        n /= 10;
    }
    if(original==rev){
        cout<<"Palindrom";
    }
    else{
        cout<<"Not Palidrom";
    }
    return 0;
}