#include<iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int vovel=0, consonent=0, space=0;

    for(int i=0; i< str.length(); i++)
    {
        char ch = tolower(str[i]);

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vovel++;
        }
        else if(ch>='a'&& ch<='z'){
            consonent++;
        }
        else if(ch==' '){
            space++;
        }
       
    }
    cout<<"vovel "<<vovel<<endl;
    cout<<"consonent "<<consonent<<endl;
    cout<<"space "<<space<<endl;
    return 0;
    
}
//done