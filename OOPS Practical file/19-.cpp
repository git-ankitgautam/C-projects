/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

class test
{
    private:
        int a,b;
    public:
        test(){} /* default constructor - we have to define the default construtor explicity 
        if we are going to use parameterized constructor*/ 
        test(int x, int y) //parameterized constructor which will take two integer inputs as x and y
        {
            cout<<"Here the constructor will give the value to A and B-\n";
            a = x;
            b = y;
        }
        void display()
        {
            cout<<"A="<<a;
            cout<<"\nB="<<b;
        }
};

int main()
{
    test obj1(55,66); //parameterized constructor will be called here
    obj1.display();
    return 0;
}

/*Output:-
Here the constructor will give the value to A and B-
A=55
B=66*/