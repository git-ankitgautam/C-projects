#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>

using namespace std;

int main()
{
    system("cls");
    int i,count,l;
    
    string OTP="", numbers="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890";
    l= numbers.length();
    cout<<"Enter the length of the OTP you want=";
    cin>>count;
    //cout<<numbers;
    srand(time(0));
    for (i = 0; i < count; i++)
    {
        OTP.push_back(numbers[rand() % l]);
    }
    
    cout<<"\nyour OTP is = "<<OTP;

    return 0;

}