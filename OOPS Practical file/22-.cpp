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
        test():a(21),b(56){} //member initializer list with default constructor
        test(int c, int d) //parameterized constructor
        {
            a = c;
            b = d;
        }

        void display()
        {
            cout<<"A="<<a;
            cout<<"\nB="<<b;
        }
};

int main()
{//since obj1 gave no arguments default initializer list will be used
    test obj1,obj2(45,55); //but the parameterized constructor will be called here
    cout<<"For obj1-"<<endl;
    obj1.display();
    cout<<"\nFor obj2-"<<endl;
    obj2.display();
    return 0;
}

/*Output:-
For obj1-
A=21
B=56
For obj2-
A=45
B=55*/