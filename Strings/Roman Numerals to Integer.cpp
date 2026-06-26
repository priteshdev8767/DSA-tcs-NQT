#include <iostream>
#include <string>
using namespace std;

int value(char ch)
{
    if(ch == 'I')
        return 1;
    else if(ch == 'V')
        return 5;
    else if(ch == 'X')
        return 10;
    else if(ch == 'L')
        return 50;
    else if(ch == 'C')
        return 100;
    else if(ch == 'D')
        return 500;
    else
        return 1000;   // M
}

int main()
{
    string s;
    cin >> s;

    int ans = 0;

    for(int i = 0; i < s.length(); i++)
    {
        int curr = value(s[i]);

        // If current value is smaller than next value, subtract it
        if(i + 1 < s.length() && curr < value(s[i + 1]))
            ans = ans - curr;
        else
            ans = ans + curr;
    }

    cout << ans;

    return 0;
}