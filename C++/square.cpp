#include<iostream>
using namespace std;

class maths
{
    private :
        int a,b;
    public :
        int getdata()
        {
            cout<<"Enter the value of a :";
            cin>>a;
            cout<<"Enter the value of b :";
            cin>>b;
            return 0;
        }
        int putdata()
        {
            cout<<"(a+b)^2 = "<<a*a<<"+"<<2*a*b<<"+"<<b*b;
            return 0;
        }

};

int main()
{
    maths m1;
    m1.getdata();
    m1.putdata();

    return 0;
}