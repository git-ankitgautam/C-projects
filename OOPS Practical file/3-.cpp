/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

struct student
{
    int marks,roll;
    string name;
    void save() //member function to read and save input data
    {
        cin>>name>>roll>>marks;
    }

    void print() //member function to print data
    {
        cout<<"\nName-"<<name<<" Roll No.-"<<roll<<"\nMarks-"<<marks;
        
    }
}s[2];

int main()
{
    cout<<"Enter name, roll and marks respectively\n";
    s[0].save();
    s[1].save();
    s[0].print();
    s[1].print();
    return 0;  
} 

/*Output:-
Enter name, roll and name respectively
Ankit    
11
89
Ashish
16
94

Name-Ankit Roll No.-11
Marks-89
Name-Ashish Roll No.-16
Marks-94*/