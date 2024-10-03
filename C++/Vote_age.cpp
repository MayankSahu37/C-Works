//Check the eligbility to participate in voting
#include<iostream>
using namespace std;

void eligible(int Age)
{
    cout<<"Enter your Age :";
    cin>>Age;

    if(Age>18)
    {
        cout<<"You Are Eligible To Vote";
    }
    else
    {
        cout<<"You Are Not Eligible To Vote";
    }
}

int main()
{
    int Age;
    eligible(Age);
    return 0;
}

