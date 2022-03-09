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
        friend int sum(test); /*the sum function is a normal function but since it is declared here as 'friend'
        it can access private data members of the class without belonging to the class itself*/
};

inline int sum(test ob)
{
    return ob.a+ob.b;
}

int main()
{
    test obj1;
    obj1.save();
    cout<<"Sum = "<<sum(obj1); //accessing private data members using friend function
    return 0;
}

/*Output:-
Enter value of A-45
Enter value of B-55
Sum = 100*/