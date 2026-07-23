#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    int count = 0, maxcount = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] == 1)
        {
            count ++;
            if(count>maxcount)
            {
                maxcount = count;
            }
        }
        else{
            count = 0;
        }
    }
    cout<<maxcount;
    return 0;

}