#include<iostream>
using namespace std;

int main()
{
    int rows,i,j;
    cout<<"Enter The Value :";
    cin>>rows;

    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}