#include<iostream>
using namespace std;

class DMA
{
    private :
        int *p,Size,i;
    public :
        DMA()
        {
            p = 0;
            cout<<"Constructor executed \n";
        }
        DMA(int Size);
        void Read();
        void Display();

        ~DMA()
        {
            cout<<"Destructor Executed";
        }

};

DMA::DMA(int Size)
{
    p = new int[Size];
}
void DMA :: Read()
{
    cout<<"Enter Size";
    cin>>Size;
    for(i=0;i<Size;i++)
    {
    cout<<"Enter Elements :";
    cin>>p[i];
    }

}

void DMA :: Display()
{
    cout<<"Array :";
    for(i=0;i<Size;i++)
    {
        cout<<" "<<p[i]<<"\n";
    }
}

int main()
{
    DMA c1(5);
    c1.Read();
    c1.Display();
    return 0;
}