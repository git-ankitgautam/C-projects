#include<iostream>

using namespace std;

int main()
{
    system("cls");
    float sum=0,i,n;
    cout<<"enter the value of n";
    cin>>n;
    for(i = 1; i <= n; i++)
    {
    sum=sum+1/i;
    }
    cout<<""<<sum;
}