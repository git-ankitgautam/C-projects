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
        static int sr; // we can make it private here becuase it will be accessed thorugh member function
    public:
        student(){sr++;}
        void save()
        {
            cout<<"Enter name, roll and marks-"<<endl;
            cin>>name>>roll>>marks;
        }
        static void srnumber() //this can only access static members, otherwise we'll have error
        {
            cout<<"Total students- "<<sr;
        }
        void display()
        {
            cout<<"Name-"<<name<<" Roll No.-"<<roll<<"\nMarks-"<<marks;
        }
};

int student::sr=0;
int main()
{
    student obj1,obj2,obj3,obj4,obj5;
    student::srnumber(); //the function belongs to class so class_name has to be used to call it
    return 0;
}

/*Output:-
Total students- 5*/