
#include <iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
   stack<char> st;
   string str;
   cin>>str;
   string ans = "";
   for(int i=0; i<str.length(); i++){
       char ch = str[i];
       if(ch==')'){
           st.pop();
       }
       if(!st.empty()){
           ans +=ch;
       }
       if(ch=='('){
           st.push(ch);
       }
   }
   cout<<ans;
    return 0;
}
//done