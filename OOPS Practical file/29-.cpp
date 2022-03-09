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
        static int sr; //It is a static memeber and will belong to the class instead of objects
        student(){sr++;}
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

int student::sr=0; //be have to specify class to access sr
int main()
{
    student obj1,obj2,obj3,obj4;
    cout<<"Total students= "<<student::sr; // class_name::variable_name has to be used instead of object_name.variable_name
    return 0;
}

/*Output:-
Total students= 4*/