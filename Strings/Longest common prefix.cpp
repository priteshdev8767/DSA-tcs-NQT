#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string prefix = arr[0];

    for(int i = 1; i < n; i++) {
        int j = 0;

        while(j < prefix.length() &&
              j < arr[i].length() &&
              prefix[j] == arr[i][j]) {
            j++;
        }

        prefix = prefix.substr(0, j);

        if(prefix == "") {
            cout << "";
            return 0;
        }
    }

    cout << prefix;

    return 0;
}