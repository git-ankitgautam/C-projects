/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/

#include<iostream>
using namespace std;

int main()
{
    int a=10,&b=a; // b is a refrence variable to a
    cout<<"Value of A- "<<a;
    cout<<"\nEnter value of b- ";
    cin>>b;
    cout<<"Value of A after input - "<<a; //changing value of b will change a also
    cout<<"\nEnter new value of a-";
    cin>>a;
    cout<<"Value of B="<<b; //same applies to b
    return 0;
}

/*Output: -
Value of A- 10
Enter value of b- 55
Value of A after input - 55
Enter new value of a-12
Value of B=12*/