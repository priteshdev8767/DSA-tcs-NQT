#include<iostream>
using namespace std;
int main()
{
    int a,d,n;
    cin>>n>>a>>d;

    int sum = n*(2*a+(n-1)*d)/2;
    cout<<sum;
    return 0;
}