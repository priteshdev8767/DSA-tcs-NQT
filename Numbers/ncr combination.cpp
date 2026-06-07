#include<iostream>
using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;

    long long nfact = 1;
    long long rfact = 1;
    long long nrfact = 1;

    for(int i = 1; i <= n; i++)
        nfact *= i;

    for(int i = 1; i <= r; i++)
        rfact *= i;

    for(int i = 1; i <= (n-r); i++)
        nrfact *= i;

    cout << nfact / (rfact * nrfact);

    return 0;
}