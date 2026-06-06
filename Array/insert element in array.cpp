#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int arr[1000];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int element;
    cin >> element;
    
    // Simply add at the end
    arr[n] = element;
    n++;
    // Print array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}