#include<iostream>
using namespace std;

int addition(int a,int b,int c)
{
    c = a+b;
    cout<<"sum :"<<c;
    return 0;
}

int main()
{
    int a,b,c;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter Second Number";
    cin>>b;
     
    addition(a,b,c);
    return 0;
}