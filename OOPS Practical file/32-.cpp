/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include <iostream>
using namespace std;
  
class A {
public:
    void show()
    {
        cout<<"Hello from A\n";
    }
};
  
class B : public virtual A{ //the show function from A gets overrided because of virtual keyword
    public:
    void show()
    {
        cout<<"Hello from B\n";
    }
};
  
class C : public virtual A{
};
  
class D : public virtual B, public C{ /*here show function from B will be called becuase there is no function 
named show in C even tho we used virtual for B*/
};
  
int main()
{
    D d;
    d.show();
}
/*Output:-
Hello from B*/