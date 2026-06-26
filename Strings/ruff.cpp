#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string ans = "";
    int i = str.length() - 1;

    while(i >= 0)
    {
        // Skip extra spaces
        while(i >= 0 && str[i] == ' ')
        {
            i--;
        }

        if(i < 0)
            break;

        int j = i;

        // Find the beginning of the word
        while(j >= 0 && str[j] != ' ')
        {
            j--;
        }

        // Add space between words
        if(!ans.empty())
        {
            ans += " ";
        }

        // Copy the word
        for(int k = j + 1; k <= i; k++)
        {
            ans += str[k];
        }

        i = j;
    }

    cout << ans;

    return 0;
}