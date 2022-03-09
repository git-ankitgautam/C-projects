/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

class Base {
   public:
      virtual void s() {
        cout<<"From Base \n";
      }
};

class Derived: public Base {
   public:
      void s() {
        cout<<"From Derived \n";
      }
};

int main() 
{
    Derived d;    
    Base *b= &d; 
    b->s(); //the function from derived class is called because the one in base class is virtual
    return 0;
}

/*Output:-
From Derived*/