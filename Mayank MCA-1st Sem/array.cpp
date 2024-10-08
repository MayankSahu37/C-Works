#include<iostream>
using namespace std;

class DMA
{
    private :
        int *arr,Size;
    public :
        DMA()
        {
            cout<<"Default used\n";
        }

        DMA(int Size);
        void Read();
        void Display();
        ~DMA()
        {
            cout<<"Destructor used";
        }
};

DMA::DMA(int Size)
{
    int *arr = new int[Size];
}

void DMA :: Read()
{
    
    cout<<"Enter Size Of Array";
    cin>>Size;
    for(int i=0;i<Size;i++)
    {
        arr[i] = i+1; 
    }
}

void DMA :: Display()
{
    for(int i=0;i<Size;i++)
    {
        cout<<"Array :"<<arr[i]<<" ";
    }
}

int main()
{
    DMA c1;
    c1.Read();
    c1.Display();

    return 0;
}
