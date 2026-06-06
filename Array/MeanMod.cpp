#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    //Mean
    float Mean = float(sum)/n;
    

    //Median
    sort(arr,arr+n);
    float Median;
    if(n%2==1){  //ODD
        Median= arr[n/2];
    }
    else{
        Median = (arr[n/2] + arr[n/2-1])/2.0;
    }
     cout<<Mean<< " ";
     cout<<Median<< " ";
    return 0;

}
