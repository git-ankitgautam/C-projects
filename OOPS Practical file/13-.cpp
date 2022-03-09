/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include <iostream>
#include <string>
using namespace std;
  
int main()
{
   int *ptr=NULL;
   ptr = new int(); // allocate space needed for an int 
   int *var = new int(12); //allocate space needed for an int and give it valur 12
  
    cout<<"memory allocated successfully"<<endl;
    *ptr = 10; 
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"*var = "<<*var<<endl;

    int *arr = NULL;
    arr = new int[10]; //allocate memory equal to an int array of size 10
 
    for(int i=0;i<10;i++){
    arr[i] = i+1;
    }
    cout<<"myarray values : ";
    for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
    }
    // free up all the space which was allocated using 'new' before
    delete ptr;
    delete var;
    delete[] arr; //[] is used to specificy that we have to free up all space occupied by the array
    return 0;
}

/*Output:-
memory allocated successfully
*ptr = 10
*var = 12
myarray values : 1 2 3 4 5 6 7 8 9 10*/