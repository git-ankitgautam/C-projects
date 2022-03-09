/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

void sum(int a,int b=0) //b will be considered as '0' if no argument is passed in its place
{
    cout<<"Sum = "<<a+b<<endl;
}

int main()
{
    int x,y;
    cout<<"Enter value of x- ";
    cin>>x;
    sum(x); // b will be considered 0
    cout<<"Enter value of y- ";
    cin>>y;
    sum(x,y); // value of y will be paseed as b
    return 0;
}

/*Output:-
Enter value of x- 45
Sum = 45
Enter value of y- 5
Sum = 50*/