/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

int a=0;
int &f()
{ 
    return a; 
}

int main()
{
    cout<<"Value of A- "<<a;
    f()=1;
    cout <<"\nValue of A after changing with function-"<<a;
}

/*Output:-
Value of A- 0
Value of A after changing with function-1*/