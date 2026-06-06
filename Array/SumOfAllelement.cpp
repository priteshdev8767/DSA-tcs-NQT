//SUMM OF ELEMENT IN GIVEN ARRAY
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,3};
    int n = 2;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i]; 
    }
    cout<<"Sum of all element is: "<<sum;
}