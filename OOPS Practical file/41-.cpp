/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    string str;
    ifstream fin("output.txt"); //opens a file named"output.txt" for reading
    while(fin)
    {
        getline(fin,str); //reads the line from the file
        cout<<str<<endl; //prints the output
    }
    cout<<"***End of file reached***";
    fin.close();
    return 0;
}

/*Output:- 

this is a sample sentence
don't read this

***End of file reached****/