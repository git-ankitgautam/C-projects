/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

class test
{
    private:
        int a,b; //data memebrs
    public: //member functions to access the private data members from main functions
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
    return 0;
}

/*Output:-
Enter value of A-55
Enter value of B-66
A=55
B=66*/