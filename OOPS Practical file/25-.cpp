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
        test(int a, int b)
        {
            this->a = a; //'this->' shows that the variable at the end of it belongs to the object which called the function
            this->b = b;
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
    test obj2(5,5);
    cout<<"For obj1-"<<endl;
    obj1.display();
    cout<<"\nFor obj2-"<<endl;
    obj2.display();
    return 0;
}

/*Output:-
Enter value of A-45
Enter value of B-45
For obj1-
A=45
B=45
For obj2-
A=5
B=5*/