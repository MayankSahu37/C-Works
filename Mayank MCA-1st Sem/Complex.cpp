#include<iostream>
using namespace std;

class complex
{

	public :
	    int real,ima;
	void Read()
	{
	  cout<<"Enter The valuer of real part :";
	  cin>>real;
      cout<<"Enter The value of imaginary part :";
      cin>>ima;
	}

	complex Addc1(complex c);

	void Display()
	{
	cout<<"Value of real :"<<real<<"\n";
    cout<<"Value of img :"<<ima<<"\n";
	}
};	
complex complex::Addc1(complex c)
	{
	 complex t;
	 t.real = c.real+real;
	 t.ima = c.ima+ima;
	 return t;
	}

	int main()
	{
	 complex C1,C2,C3;
	 C1.Read();
	 C2.Read();
	 C3 = C1.Addc1(C1);
	 C3.Display();
	 return 0;
	}