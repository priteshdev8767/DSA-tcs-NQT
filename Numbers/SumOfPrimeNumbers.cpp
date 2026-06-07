#include<iostream>

using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
  int n, count=0, num=2, sum=0;
  cin>>n;
  while(count<n){
    if(isPrime(num)){
        sum += num;
        count++;
    }
    num++;
  }
  cout<<sum;

    return 0;
}