/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

class school
{
    public:
        string name;
        void save()
        {
            cout<<"Enter name of school- "; getline(cin,name);
        }
};

class private_school : public school //private_school is a derived class of base class school
{//this has access to all the public members of base class , here school
    private:
        int Fees;
    public:
        void read_data()
        {
            cout<<"Enter the fees- "; cin>>Fees;
        }
        void display()
        {
            cout<<name<<" has "<<Fees<<"rs as annual fees";
        }
};

int main()
{
    private_school s1;
    s1.save();
    s1.read_data();
    s1.display();
    return 0;
}

/*Output:-
Enter name of school- DPS Jodhpur
Enter the fees- 95000
DPS Jodhpur has 95000rs as annual fees*/