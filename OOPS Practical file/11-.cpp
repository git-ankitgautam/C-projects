/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

void pswap(int *num1, int *num2) // here *num1 and *num2 are pointers
{ 
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void rswap (int &num1, int &num2) //&num1 and &bnum2 are Reference variables
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

int main()
{
    int a=12,b=21;
    cout<<"Value of-"<<"\nA = "<<a<<"\nB = "<<b<<endl;
    rswap(a,b);
    cout<<"After swapping with refrence"<<"\nA = "<<a<<"\nB = "<<b<<endl;
    pswap(&a,&b);
    cout<<"After swapping again but with pointers"<<"\nA = "<<a<<"\nB = "<<b<<endl;
    return 0;
}

/*Output:-
Value of-
A = 12
B = 21
After swapping with refrence
A = 21
B = 12
After swapping again but with pointers
A = 12
B = 21*/