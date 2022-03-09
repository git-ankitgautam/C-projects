/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

class student //simple student class with 3 data members and 2 member functions
{
    private:
        string name;
        int roll,marks;
    public:
        void save()
        {
            cout<<"Enter name, roll and marks-"<<endl;
            cin>>name>>roll>>marks;
        }

        void display()
        {
            cout<<"Name-"<<name<<" Roll No.-"<<roll<<"\nMarks-"<<marks;
        }
};

int main()
{
    student obj1;
    obj1.save();
    obj1.display();
    return 0;
}

/*Output:-
Enter name, roll and marks-
Ankit
11
89
Name-Ankit Roll No.-11
Marks-89*/