#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str = "Hello ";
    string str1 = "Mayank";
    string str2 = "";
    
    cout<<str<<"\n";
    cout<<str.length()<<endl; // Count String Length
    cout<<str.substr(3,5)<<endl; // Shows Substring Hello >> llo
    cout<<str.append(str1); // concat 2 strings toagther
    char *strcpy (char *str2, const char *str1); //Copy String
    cout<<str2<<endl;
    return 0;
}