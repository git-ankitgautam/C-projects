/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include <iostream>
using namespace std;

template <typename T> //the function template declaration
void Swap(T &n1, T &n2) 
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int i1 = 2, i2 = 4;
    float f1 = 7.68, f2 = 4.55;
    char c1 = 'a', c2 = 'b';

    cout << "Before passing data to function template.\n";
    cout << "i1 = " << i1 << " i2 = " << i2;
    cout << "\nf1 = " << f1 << " f2 = " << f2;
    cout << "\nc1 = " << c1 << " c2 = " << c2;
    Swap(i1, i2);
    Swap(f1, f2);
    Swap(c1, c2);
    cout << "\nAfter passing data to function template.\n";
    cout << "i1 = " << i1 << " i2 = " << i2;
    cout << "\nf1 = " << f1 << " f2 = " << f2;
    cout << "\nc1 = " << c1 << " c2 = " << c2;

    return 0;
}

/*Output:-
Before passing data to function template.
i1 = 2 i2 = 4
f1 = 7.68 f2 = 4.55
c1 = a c2 = b
After passing data to function template.
i1 = 4 i2 = 2
f1 = 4.55 f2 = 7.68
c1 = b c2 = a*/