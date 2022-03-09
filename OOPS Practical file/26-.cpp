/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

class test
{
    private:
        string a,b;
    public:
        test(){} 
        test(string x, string y="default") /*here the constructor will consider y= "default" 
        if not argument is given for y explicitly*/
        {
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
    test obj1("Ankit","Gautam"),obj2("Ashish"); //obj2 will have B as default since no argument is passed
    obj1.display(); cout<<endl;
    obj2.display();
    return 0;
}

/*Output:-
A=Ankit
B=Gautam
A=Ashish
B=default*/