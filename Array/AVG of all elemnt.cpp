//average OF ELEMENT IN GIVEN ARRAY
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    double sum = 0;
    double avg = 0;
    for(int i=0; i<n; i++){
        sum += arr[i]; 
    }
    avg = sum/n;
    cout<<"AVG of all element is: "<<avg;
}
//done