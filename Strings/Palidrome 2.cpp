#include <iostream>
#include <string>
#include <cctype> //imp
using namespace std;

bool isPalindrome(string s)
{
    int left = 0;
    int right = s.length() - 1;

    while(left < right)
    {
        if(!isalnum(s[left]))
        {
            left++;
        }
        else if(!isalnum(s[right]))
        {
            right--;
        }
        else
        {
            if(tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }
    }

    return true;
}

int main()
{
    string s;
    getline(cin, s);

    if(isPalindrome(s))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}