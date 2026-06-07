#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cin>>n>>r;
   long long fact1=1;
   long long fact2=1;

   for(int i=1; i<=n; i++){
    fact1 *=i;
   }
  for(int i=1; i<=(n-r); i++){
    fact2 *=i;
  }
  cout<<fact1/fact2;
  return 0;
}