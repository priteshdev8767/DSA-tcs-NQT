#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[1000];
    int k = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++)
    {
        if(arr[i] != arr[k])
        {
            arr[k + 1] = arr[i];
            k++;
        }
    }

    cout << "Unique elements = " << k + 1 << endl;

    cout << "Array after removing duplicates: ";

    for(int j = 0; j <= k; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}