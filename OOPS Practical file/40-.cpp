/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    int n,i=0;
    string str;
    cout<<"Enter the number of sentences you want to save:-"<<endl;
    cin>>n;
    cout<<"Enter the sentences one by one-"<<endl;
    ofstream outf("output.txt"); //opens a file named "output.txt" for writing
    while(i<=n)
    {
        getline(cin,str);
        outf<<str<<endl; // outf sends the data to the file
        i++;
    }
    cout<<"***the data has been saved successfully***";
    outf.close();
    return 0;
}

/*Output:- 
Enter the number of sentences you want to save:-
2
Enter the sentences one by one-
this is a sample sentence
don't read this
***the data has been saved successfully***
*/