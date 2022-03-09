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
        void save()
        {
            cout<<"Enter name, roll and marks-\n";
            cin>>name>>roll>>marks;
        }
        void display()
        {
            cout<<"Name-"<<name<<" Roll No.-"<<roll<<"\nMarks-"<<marks<<"\n";
        }
};

int main()
{
    int N,i=0,j=0;
    cout<<"Enter the number of students- ";
    cin>>N;
    student obj1[N]; //declaration of array of objects
    while(i<N)
    {
        obj1[i].save(); i++; //the method to access the data in object array is same as simple array - object_name[index];
    }
    while(j<N)
    {
        obj1[j].display(); j++;
    }
    return 0;
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