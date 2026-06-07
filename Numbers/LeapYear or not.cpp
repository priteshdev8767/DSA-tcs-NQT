
#include<iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not Leap Year";
    }

    return 0;
}
// #include<iostream>
// using namespace std;

// bool isLeapyear(int year)
// {
//     if(year%4==0){
//         if(year%100==0){
//             return (year%400==0);

//         }
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int year;
//     cin>>year;
//     if(isLeapyear(year)){
//         cout<<"True";
//     }
//     else{
//         cout<<"False";
//     }
//     return 0;
// }

