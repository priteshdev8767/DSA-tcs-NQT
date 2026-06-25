#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, goal;
    cin >> str >> goal;

    if(str.length() != goal.length())
    {
        cout << "false";
        return 0;
    }

    int n = str.length();

    for(int shift = 0; shift < n; shift++)
    {
        bool match = true;

        for(int i = 0; i < n; i++)
        {
            if(str[(i + shift) % n] != goal[i])
            {
                match = false;
                break;
            }
        }

        if(match)
        {
            cout << "true";
            return 0;
        }
    }

    cout << "false";

    return 0;
}