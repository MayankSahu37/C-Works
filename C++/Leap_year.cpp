#include<iostream>
using namespace std;

int leapYear(int year)
{
    cout<<"Enter Year :";
    cin>>year;

    if(year % 4 == 0 && year % 400 == 0)
    {
        cout<<"Leap year";
    }
    else if (year % 100 == 0)
    {
        cout<<"Not A Leap Year";
    }
    else if(year % 400 == 0)
    {
        cout<<"Leap year";
    }
    else{
        cout<<"Not A Leap Year";
    }
    
    return 0;
}

int main()
{
    int year;
    leapYear(year);
    return 0;
}