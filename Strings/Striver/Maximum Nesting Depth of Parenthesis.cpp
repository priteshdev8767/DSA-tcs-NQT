#include<iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int depth=0;
    int maxdepth=0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '(')
        {
            depth++;
            if(depth > maxdepth){
                maxdepth = depth;
            }
        }
        else if(str[i] == ')')
        {
            depth--;
        }
    }
    cout<<maxdepth;
    return 0;
}   
//done