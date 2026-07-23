 #include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[1000];               //LOGIC IS THAT WHEN WE CALCULKATE THE SUM OF N NATURAL NO THEN WE SUBSTACT THE ACTUAL NUMBER SIM WHICH PRESENT IN ARRAY THEN WE CAN FINDE THE MISSING NUMBER
    int sum = 0;
    for(int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int total = n * (n + 1) / 2; //SUM OF NATURAL NUMBER 
    cout << total - sum;  // SUBSTRACT FROM IT
    return 0;
}
//done