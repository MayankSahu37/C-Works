#include<iostream>
using namespace std;

class comp
{
    private :
        int a,b,c;
    public :
        int inputdata()
        {
            cout<<"Enter the value of a :";
            cin>>a;
            cout<<"Enter the value of b :";
            cin>>b;
            cout<<"Enter the value of c :";
            cin>>c;
            return 0;
        }
        int putdata()
        {
            if(a>b&&a>c)
            {
                cout<<a<<" is the greatest";
            }
            else if(b>a&&b>c)
            {
                cout<<b<<" is greatest";
            }
            else
            {
                cout<<c<<" is greatest";
            }
            return 0;
        }
};

int main()
{
    comp c1;
    c1.inputdata();
    c1.putdata();

    return 0;
}