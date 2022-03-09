/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

class Distance
{
    private:
        float d1,d2; 
    public:
        void read()
        {
            cout<<"Enter the distances-(in metres)\n";
            cin>>d1;
            cin>>d2;
        }
        void display() //function to add and print the sum of the distances d1 and d2 of the object
        {
            cout<<"Sum="<<d1+d2<<" metres";
        }
};

int main()
{
    Distance obj1;
    obj1.read();
    obj1.display();
    return 0;
}

/*Output:-
Enter the distances-(in metres)
5.4
6.2
Sum=11.6 metres*/