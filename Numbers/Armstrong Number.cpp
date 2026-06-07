#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, remender, result=0, digits=0, original,temp;
    cin>>n;
    original = n;
    temp =n;
    //calculate digits
    while(temp!=0){
        digits++;
        temp /= 10;
    }
   temp = n;
   while(temp!=0){
    remender = temp%10;
    result += pow(remender,digits);
    temp /= 10;
   }
   if(result==original){
    cout<<"Amstrong";
   }
   else{
    cout<<"Not Amstrong";
   }

    return 0;
}