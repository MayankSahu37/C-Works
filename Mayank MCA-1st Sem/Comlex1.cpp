#include<iostream>
using namespace std;

class complexn
{
    private:
        int real,img;
    public :
        void Read()
        {
            cout<<"Enter The Value of Real Part :" ;
            cin>>real;
            cout<<"Enter The Value of Imaginery Part :" ;
            cin>>img;
        }

        complexn Add(complexn c1);

        void Display()
        {
            cout<<"Sum = "<<real<<"+i"<<img;
        }

};
complexn complexn::Add(complexn c1)
{
    complexn t;
    real = c1.real+real;
    img = c1.img+img;
    return t;
}
int main()
{
    complexn c1,c2;

    c1.Read();
    c2.Read();
    c1.Add(c1);
    c1.Display();
    return 0;
}