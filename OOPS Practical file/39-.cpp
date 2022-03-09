/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include <iostream>
using namespace std;

int division(int a, int b) {
   if( b == 0 ) 
    {
        throw("cannot divide by zero"); //send the following string if this is encountered
    }
   return a/b;
}

int main () {
   int x = 25;
   int y = 0;
   float z = 0;
 
   try //the control will move on to next step after throwing exception if try fails
    {
        z = division(x, y);
        cout << z << endl;
    } //catch - saves the thrown expection to the given variable (msg here) 
    catch (const char* msg) 
    {
        cerr << msg << endl;
    }
   return 0;
}

/*Output:-
cannot divide by zero*/