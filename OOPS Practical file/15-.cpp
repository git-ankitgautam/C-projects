/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;
//writing 'inline' will request the control to consider the function as inline
inline int sum(int a,int b)
{
    return a+b;
}
//generally very small functions like above are accepted by control as inline
int main()
{
    int x,y;
    cout<<"Enter value of x and y- ";
    cin>>x>>y;
    cout<<"Sum= "<<sum(x,y);
    return 0;
}

/*Output:-
Enter value of x and y- 45
55
Sum= 100*/