#include<iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int num=0, sum = 0;
    for(int i=0; i< str.length(); i++){
        if(str[i]>='0' && str[i]<= '9')
        {
          num = num * 10 + (str[i] - '0');
        }
        else
        {
            sum += num;
            num =0;
        }

    }
    sum += num;
    cout<<sum;
  return 0;  
}