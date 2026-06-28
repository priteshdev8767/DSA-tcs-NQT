// Online C++ compiler to run C++ program online
#include <iostream>
#include<set>
using namespace std;
int main() {
    set<int>st;
    int n;
    cin>>n;
    

    for(int i=0; i<n; i++){
        int x; cin>>x;

        st.insert(x);
    }
    cout<<"Number of unique elemnts "<<st.size()<<" ";
    cout << "Array is: ";
      for(auto it : st)
      {
        cout<<it<<" ";
      }
      
    return 0;
}
