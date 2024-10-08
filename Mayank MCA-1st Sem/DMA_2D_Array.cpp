#include<iostream>
using namespace std;
class DMA
{
    private :
        int r,c,**p,i,j;
    public :
        DMA()
        {
            p=0;
            cout<<"Constructor\n";
        }

        DMA(int r,int c);
        void Read();
        void Display();

        ~DMA()
        {
            cout<<"\nDestructor";
        }
};


DMA::DMA(int r,int c)
{
    p = new int*[r];

    for(i=0;i<r;i++)
    {
        p[i] = new int[c];
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter Elements :["<<i+1<<" "<<j+1<<"]";
            cin>>p[i][j];
        }
    }
}
void DMA::Read()
{
    cout<<"Enter Rows";
    cin>>r;
    cout<<"Enter Colum";
    cin>>c;
}

void DMA::Display()
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            cout<<" "<<p[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    int r,c;
    DMA c1(r,c);
    c1.Read();
    c1.Display();
    return 0;
}