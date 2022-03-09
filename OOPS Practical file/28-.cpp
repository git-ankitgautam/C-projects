/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include <iostream>
using namespace std;

class Base
{
    private:
        int a;
    public:
        void get_a(int val_a){
            a=val_a;
        }
        void put_a(void){
            cout <<"value of a: " << a << endl;
        }
};
 
class Base1
{
    private:
        int b;
    public:
        void get_b(int val_b){
            b=val_b;
        }
        void put_b(void){
            cout <<"value of b: " << b << endl;
        }
};

class final:public Base,public Base1 //multiple inheritance
{//now, we can access member functions of both Base, Base1
    public:
        void printValues(void){            
            put_a();
            put_b();
        }
};
 
int main()
{
    final obj;
    obj.get_a(100);
    obj.get_b(200);
     
    obj.printValues();
     
    return 0;
}

/*Output:-
value of a: 100
value of b: 200*/