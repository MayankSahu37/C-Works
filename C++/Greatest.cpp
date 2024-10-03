#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter Second number :";
    cin>>b;

    if(a>b)
    {
        cout<<a<<" is greater";
    }
    else
    {
        cout<<b<<" is greater";
    }
    return 0;
}