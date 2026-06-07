#include<iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for(int i=0; i<str.length(); i++)
    {
        char ch = tolower(str[i]);
        if(ch!=' '){
            cout<<str[i];
        }
    }
  return 0;  
}