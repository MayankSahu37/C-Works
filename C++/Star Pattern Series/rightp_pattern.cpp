#include<iostream>
using namespace std;

int main()
{
    int rows,i,j,k;

    cout<<"Eneter Rows :";
    cin>>rows;

    for(i=rows;i>=1;i--)
    {
        for(k=i;k<=rows;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }

        cout<<endl;
    }
 
    return 0;
}