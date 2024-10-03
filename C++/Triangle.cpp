#include<iostream>
using namespace std;

int area(int b,int h,int a)
{
    a = (b*h)/2;
    cout<<"Area :"<<a;

    return 0;
}

int main()
{
    int b,h,a;

    cout<<"Enetr base of triangle";
    cin>>b;
    cout<<"Enetr heigh of triangle";
    cin>>h;
    area(b,h,a);
    return 0;
}

