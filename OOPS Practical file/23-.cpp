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
        test()
        {
            cout<<"This sentece was printed using a constructor\n";
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
        ~test(){ //desctructor - a member function that is called when class goes 'out of scope' or when program ends
            cout<<"\nThis is printed using destructor";
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
This sentece was printed using a constructor
Enter value of A-45
Enter value of B-55
A=45
B=55
This is printed using destructor*/