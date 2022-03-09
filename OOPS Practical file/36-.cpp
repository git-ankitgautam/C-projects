/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

class Distance
{
    private:
        float d;
    public:
        void read()
        {
            cout<<"Enter the distance-(in metres)- ";
            cin>>d;
        }
        void display()
        {
            cout<<d<<" metres";
        }
        Distance operator+(Distance ob) // binary  operator is overloaded to add whole objects
        {
            Distance temp;
            temp.d = ob.d+d;
            return temp; //an object of Distance type is returned
        }
};

int main()
{
    Distance obj1,obj2,obj3;
    obj1.read();
    obj2.read();
    obj3 = obj1+obj2; 
    obj3.display();
    return 0;
}

/*Output:-
Enter the distance-(in metres)- 56
Enter the distance-(in metres)- 69
125 metres*/