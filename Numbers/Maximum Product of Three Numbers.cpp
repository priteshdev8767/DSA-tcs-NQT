#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    long long product1 = 1LL* arr[n-1] * arr[n-2] * arr[n-3];   //Two smallest numbers (possibly negative) × largest number
    long long product2 = 1LL* arr[0] * arr[1] * arr[n-1];

    cout<<max(product1,product2);
    return 0;
}