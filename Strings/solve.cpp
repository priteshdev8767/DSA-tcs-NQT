#include<iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    str[0]=toupper(str[0]);
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]==' ')
        {
            str[i+1]=toupper(str[i+1]);
        }
         if(i< str.length()-1 && str[i+1]==' ')
         {
            str[i] = toupper(str[i]);
         }
    }
    str[str.length()-1] = toupper(str[str.length()-1]);
    cout<<str;
  return 0;  
}