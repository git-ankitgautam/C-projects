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
        test(){} //default constructor
        test(test &ob) //copy constructor
        {
            a = ob.a;
            b = ob.b;
        }
        test(int x, int y) //parameterized constructor
        {//one of the constructors will be selected according to the passed arguments
            a = x;
            b = y;   
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
{//default constructor will be called for Obj1 
    test obj1,obj3(5,7); //parameterized constructor will be called for obj3
    obj1.save();
    test obj2(obj1); // copy constructor will be called here
    cout<<"For obj1-"<<endl;
    obj1.display();
    cout<<"\nFor obj2-"<<endl;
    obj2.display();
    cout<<"\nFor obj3-"<<endl;
    obj3.display();
    return 0;
}

/*Output:-
Enter value of A-45
Enter value of B-55
For obj1-
A=45
B=55
For obj2-
A=45
B=55
For obj3-
A=5
B=7*/