//frequency of element in array
 #include<iostream>
// #include<algorithm>
// #include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
void freqency(int arr[], int n)
{
    unordered_map<int,int> map;
    for(int i =0; i<n; i++)
    {
        map[arr[i]]++;
    }
    for(auto x : map)
    {
        cout<<x.first<<"-->"<<x.second<<endl;
    }
}
int main()
{
    int arr[] = {5,5,6,7,5,7,9,1,2,3,1,2,3,};
    int n;
    n= sizeof(arr)/sizeof(arr[0]);
    freqency(arr,n);
    return 0;
}
//done