/*#include<iostream>

using namespace std;
int main()
{
    system("cls");
    double num,s;
    cout<<"enter the number you want the factorial to";
    cin>>num;
    s=1;
    for(int i=1;i<=n;i++)
    {
        s =+ s*(i);
    }
    cout<<""<<s;
    return 0;

}
*/
// C++ program to find factorial of given number
#include<iostream>

inline double factorial(int n)
{
	// single line to find factorial
	return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

// Driver Code
int main()
{
	int num;
    std::cin>>num;
	printf ("Factorial of %d is %d", num, factorial(num));
	return 0;
}
