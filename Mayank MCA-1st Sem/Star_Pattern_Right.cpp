#include<iostream>
using namespace std;

int main()
{
    int rows,i,j,k;

    cout<<"Enter Rows :";
    cin>>rows;

    for(i=1;i<=rows;i++)
    {
        for(k=rows;k>=i;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}