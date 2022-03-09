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
        test(){} // default constructor
        test(test &ob) //copy constructor - initializes an object using another object of the same class
        {
            a = ob.a;
            b = ob.b;
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
    test obj2(obj1); //here the copy constructor is called and obj1 is passed as input
    cout<<"The same values will be present in Obj2"<<endl;
    cout<<"For obj1-"<<endl;
    obj1.display();
    cout<<"\nFor obj2-"<<endl;
    obj2.display();
    return 0;
}

/*Output:-
Enter value of A-45
Enter value of B-55
The same values will be present in Obj2
For obj1-
A=45
B=55
For obj2-
A=45
B=55*/