/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/

#include<iostream>
using namespace std;

int main()
{
    char str[20];
    cout<<"Enter your string - ";
    cin.getline(str,20); //cin.getline(variable_name, character limit)
    cout<<str;
    return 0;
}

/*Output: -
Enter your string - this is a test string
this is a test stri*/