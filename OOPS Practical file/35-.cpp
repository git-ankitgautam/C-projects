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
        test(){}
        test operator++() //overloading unary ++ operator
        {/*no argument list is required because the function 
        calling it becomes the one required input*/
            a = a+1;
            b = b+1;
            return *this;
        }
        void save()
        {
            cout<<"Enter value of A-";
            cin>>a;
            cout<<"Enter value of B-";
            cin>>b;
        }
        void display()
        {
            cout<<"A="<<a;
            cout<<"\nB="<<b;
        }
};

int main()
{
    test obj1;
    obj1.save();
    obj1.display();
    ++obj1; cout<<"\nAfter increment-"<<endl;
    obj1.display();
    return 0;
}

/*Output:-
Enter value of A-45
Enter value of B-55
A=45
B=55
After increment-
A=46
B=56*/