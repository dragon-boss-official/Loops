#include<iostream>
using namespace std;

int main()
{
    int n, num, sum = 0;
    cout<<"Enter the value of n: ";
    cin>>n;

    for (int i = 1; i <=n ; i++)
    {
        cout<<"Enter number "<<i<< ": ";
        cin>>num;
        sum = sum + num;
    }

    cout<<"sum = "<<sum;
    

    return 0;
}