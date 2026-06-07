#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    int sum = 0;

    for(int i = 1; i <= n; i++)
    {
        sum += a;

        int c = a + b;
        a = b;
        b = c;
    }

    cout << sum;

    return 0;
}