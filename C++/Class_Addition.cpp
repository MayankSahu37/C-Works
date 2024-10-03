#include<iostream>
using namespace std;

class addition
{
    private :
        int a,b,c;
    public :
        void input()
        {
            cout<<"Enter first number :";
            cin>>a;
            cout<<"Enter second number :";
            cin>>b;

            c = a+b ;
        }
        void output()
            {
                cout<<"sum :"<<c;
            }
};

int main()
{
 addition b1;
 b1.input();
 b1.output();

 return 0;
}