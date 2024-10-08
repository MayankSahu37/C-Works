#include<iostream>
using namespace std;

class complex
{
    private :
        int real,img;
    public :
        complex()
        {
            real = 0;
            img = 0;
        }

        complex(int ri,int ii)
        {
            real = ri;
            img = ii;
        }

        ~complex()
        {
            cout<<"\nDistructor";
        }
        complex Add(complex c);
        void Display();

};

complex complex :: Add(complex c)
{   
    complex t;
    t.real = c.real + real;
    t.img = c.img + img;
    return t;
}
void complex :: Display()
{
    cout<<"Sum = "<<real<<"+i"<<img;
}

int main()
{
    complex c(10,20),c1;
    c1.Add(c);
    c1.Display(); 
    return 0;
}

