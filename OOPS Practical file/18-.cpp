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
        test() //default constructor - a function with the same name as class but with no arguments
        {
            cout<<"This sentence was printed using a constructor\n";
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
    test obj1; //object created and constructor was called
    obj1.save();
    obj1.display();
    return 0;
}

/*Output:-
This sentence was printed using a constructor
Enter value of A-55
Enter value of B-66
A=55
B=66*/