#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int largest=0, smallest=9;

    while(n!=0)
    {
        int digit = n%10;
        if(digit>largest){
            largest=digit;
        }
        if(digit<smallest){
            smallest=digit;
        }
        n /= 10;
    }
    cout<<"Largest"<<largest<<endl;
    cout<<"smallest"<<smallest;
    return 0;


}