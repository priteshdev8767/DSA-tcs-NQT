#include<iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for(int i = 0; i<str.length(); i++)     //Lowercase letters are 32 bigger than uppercase letters
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] +=32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
        cout<<str[i];
    }
  return 0;  
}
//done