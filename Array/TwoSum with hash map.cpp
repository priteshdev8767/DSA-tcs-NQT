#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int target ;
    cin>>target;

    unordered_map<int, int>map;
    for(int i=0; i<n; i++)
    {
        int complement = target - arr[i];
        if(map.find(complement) != map.end())
        {
            cout<<map[complement]<< " "<<i;
            return 0;
        }
        map[arr[i]]= i;
    }
    cout<<-1;
}