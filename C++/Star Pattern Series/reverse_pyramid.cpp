#include<iostream>
using namespace std;

int main()
{
    int rows,i,j,k;
    cout<<"Enter The Value :";
    cin>>rows;

    for(i=0;i<=rows;i++)
    {
        for(k=1;k<=i;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=rows-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}