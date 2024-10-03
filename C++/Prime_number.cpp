//Program to check if number is prime of not
#include<iostream>
using namespace std;

int primeNo(int num)
{
    cout<<"Enter A Number";
    cin>>num;
    
    for(int i = 2; i<num ; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    
    }
    return true;
}

int main()
{
    int num;
    if(primeNo(num))
        cout<<"number Is Prime";
    else
        cout<<"Not prime";
    return 0;
}