#include<iostream>
using namespace std;

int main()
{
    int r,c,**p,i,j;

    cout<<"Enter Rows";
    cin>>r;
    cout<<"Enter Colum";
    cin>>c;

    p = new int *[r];

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
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            cout<<" "<<p[i][j];
        }
        cout<<endl;
    }
    return 0;
}