#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    int x=a, y=b;

    //gcd
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    int GCD = a;
    int lcm = (x*y)/GCD;
    cout<<"GCD "<<GCD<<endl;
    cout<<"LCM "<<lcm;
    return 0;

}