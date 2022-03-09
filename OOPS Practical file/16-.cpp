/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

void sum(int a,int b) // this is called when we call sum function with 2 arguments
{
    cout<<"Sum of two = "<<a+b;
}
//this gets called when we call sum function with 3 arguments
void sum(int a, int b, int c)
{
    cout<<"Sum of three = "<<a+b+c;
}

int main()
{
    int x,y,z;
    cout<<"Enter value of x and y- ";
    cin>>x>>y;
    sum(x,y);
    cout<<"\nEnter value of z=";
    cin>>z;
    sum(x,y,z);
    return 0;
}

/*Output:-
Enter value of x and y- 45
55
Sum of two = 100
Enter value of z=65
Sum of three = 165*/