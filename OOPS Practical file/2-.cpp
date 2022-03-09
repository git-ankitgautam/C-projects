/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

struct student //simple structure with only data members
{
    int marks,roll;
    string name;
}s[2]; //declaration of an array of 'struct student' type variables

int main()
{
    cout<<"Enter name, roll and name respectively\nFirst student-\n";
    cin>>s[0].name>>s[0].roll>>s[0].marks;
    cout<<"Second student-\n";
    cin>>s[1].name>>s[1].roll>>s[1].marks;
    cout<<"Name-"<<s[0].name<<"Roll No.-"<<s[0].roll<<"\nMarks-"<<s[0].marks;
    cout<<"\nName-"<<s[1].name<<"Roll No.-"<<s[1].roll<<"\nMarks-"<<s[1].marks;
    return 0;  
} 

/*Output:-
Enter name, roll and name respectively
First student-
Ankit
11
89
Second student-
Ashish
16
94
Name-Ankit Roll No.-11
Marks-89
Name-Ashish Roll No.-16
Marks-94*/

