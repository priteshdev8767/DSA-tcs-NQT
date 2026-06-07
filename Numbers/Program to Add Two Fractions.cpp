#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int numerator = a * d + b * c;
    int denominator = b * d;

    cout << numerator << "/" << denominator;

    return 0;
}