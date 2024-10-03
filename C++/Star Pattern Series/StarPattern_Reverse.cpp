#include<iostream>
using namespace std;

int main()
{
    int rows,i,j;
    cout<<"Enter The Value :";
    cin>>rows;

    for(i=0;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}