#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
 
    set<int>st;

    for(int i=0; i<n;i++)
    {
        int x; cin>>x;
        st.insert(x);                                                                   
    }
    for(int i=0; i<m; i++)
    {
        int x; cin>>x;
        st.insert(x);
    }
    for(auto it : st)
    {
        cout<<it<<" ";
    }
    return 0;
}

// for( auto   it  :  st )
// //    |      |     |
// //    |      |     container to loop through
// //    |      variable that holds current element
// //    auto-detect the data type

//done