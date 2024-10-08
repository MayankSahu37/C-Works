#include<iostream>
using namespace std;

int main()
{
    int rows,i,j,k;
    cout<<"Enter Rows :";
    cin>>rows;

    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(k=0;k<=rows;k++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}