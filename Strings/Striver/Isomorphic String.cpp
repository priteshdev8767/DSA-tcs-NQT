// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    if(s.length() != t.length()){
        cout<<"false";
        return 0;
    }
    int maps[256] = {0};
    int mapt[256] = {0};
    for(int i=0; i < s.length(); i++){
        if(maps[s[i]] != mapt[t[i]]){
            cout<<"false";
            return 0;
        }
        maps[s[i]] = i+1;
        mapt[t[i]] = i+1;
    }
    cout<<"true";
    return 0;
}
//done