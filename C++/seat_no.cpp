#include<iostream>
using namespace std;

class seat
{
    private :
        int seatno;
    public :
        int inputdata()
        {
            cout<<"Enter Seat No :";
            cin>>seatno;
            return 0;
        }
        int putdata()
        {
            if(seatno>0&&seatno<20)
                {
                    cout<<"Seat No : "<<seatno<<"\nBirth No : 1";
                }
            else if(seatno>20&&seatno<40)
                {
                    cout<<"Seat No :"<<seatno<<"\nBith No : 2";
                }
            else if(seatno>40&&seatno<60)
                {
                    cout<<"Seat No :"<<seatno<<"\nBith No : 3";
                }
            else
            {
                cout<<"Seat No Not Available";
            } 
            return 0;
        }
};

int main()
{
    seat s1;
    s1.inputdata();
    s1.putdata();
    return 0;
}