/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

class student
{
    private:
        string name;
        int roll,marks;
    public:
        void save(); //function declaration , function definition is done outside class here
        void display();
};

int main()
{
    int N,i=0,j=0;
    cout<<"Enter the number of students- ";
    cin>>N;
    student obj1[N];
    while(i<N)
    {
        obj1[i].save(); i++;
    }
    while(j<N)
    {
        obj1[j].display(); j++;
    }
    return 0;
}

void student::display() //using scope resolution operator to tell control which class the function belongs to
{
    cout<<"Name-"<<name<<" Roll No.-"<<roll<<"\nMarks-"<<marks<<"\n";
}

void student::save()
{
    cout<<"Enter name, roll and marks-\n";
    cin>>name>>roll>>marks;    
}

/*Output:-
Enter the number of students- 2
Enter name, roll and marks-
Ankit
11
89
Enter name, roll and marks-
Ashish
16
93
Name-Ankit Roll No.-11
Marks-89
Name-Ashish Roll No.-16
Marks-93*/