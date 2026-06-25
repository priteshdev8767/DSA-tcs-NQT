// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   
   string str;
   cin>>str;
   for(int i= str.length()-1; i>=0; i--){
       if((str[i]-'0') % 2 != 0){
           cout<<str.substr(0, i+1);
           return 0;
       }
       cout<<"";
   }
    return 0;
}