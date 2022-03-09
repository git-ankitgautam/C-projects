/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
using namespace std;

class Time
{
    private:
        int hour,min,sec;
    public:
        void read()
        {
            cout<<"Enter the time-\n";
            cout<<"Hour-"; cin>>hour;
            cout<<"Minutes-"; cin>>min;
            cout<<"Seconds-"; cin>>sec;
        }
        void add(Time a,Time b)
        {   /*we don't have to use dot operator with one set of data, 
            because they correspond to the object which called the function*/
            hour = a.hour + b.hour; 
            min = a.min + b.min;
            if(min>=60) //  60 mins = 1 hr
            {
                min = min - 60;
                hour++;
            }
            sec = a.sec + b.sec;
            if(sec>=60) // 60 secs  = 1 min
            {
                sec = sec - 60;
                min++;
            }
        }
        void display()
        {
            cout<<"Sum = "<<hour<<":"<<min<<":"<<sec;
        }
};

int main()
{
    Time t1,t2,t3;
    t1.read();
    t2.read();
    t3.add(t1,t2);
    t3.display();
    return 0;
}

/*Output:-
Enter the time-
Hour-12
Minutes-45
Seconds-59
Enter the time-
Hour-14
Minutes-56
Seconds-59
Sum = 27:42:58*/