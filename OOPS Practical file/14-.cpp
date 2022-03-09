/*Ankit Gautam
CSE-1 (A1)
20EEBCS011*/
#include <iostream>
using namespace std;
 
int main()
{
   int *p1, *p2, max,min;
   int n,j=0;
   cout<<"Enter the size of array :";
   cin>>n;
   p1=new int[n]; //allocate space of an int array of size n
   p2=p1; 
   cout<<"Enter values of array\n";
   for(int i=0; i<n; i++){
    cin>>*p1++;}
    p1=p2;
    max = *p1;
    while(j<n) //simple loop to cycle through the p1 array and find max
    {
        if(max<*p1)
            max= *p1;
        *p1++;
        j++;
    }
    int i=0;
    min = *p1;
    while (i<=n) //simple but reverse loop to cycle through the p1 array and find min 
    {
       if(min > *p1)
            min = *p1;
        *p1--;
        i++;    
    }
    cout<<"The largest value is :"<<max;
    cout<<"\nThe smallest value is :"<<min;
    delete p1;
 
}
/*Output:-
Enter the size of array :5
Enter values of array
22
33
66
88
99
The largest value is :99
The smallest value is :22*/