/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    string str;
    ofstream outf("output2.txt"); 
    ifstream fin("output.txt");
    while(fin)
    {
        getline(fin,str); //take lines one by one from output.txt
        outf<<str<<endl; //saving the input from before to output2.txt
    }
    cout<<"***Files compied successfully***";
    fin.close();
    outf.close();
    return 0;
}

/*Output:- 
***Files compied successfully***
*/