/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include <iostream>
using namespace std;

template <typename T>
T square(T &n) // T is used as return type also here unlinke the last example
{
    return n*n;
}

int main()
{
    int n=3;
    float f=4.5;
    long int li = 44444;
    cout<<"Square of int- "<<square(n)<<endl;
    cout<<"Square of float- "<<square(f)<<endl;
    cout<<"Square of long int- "<<square(li);
    return 0;
}

/*Output:-
Square of int- 9
Square of float- 20.25
Square of long int- 1975269136*/