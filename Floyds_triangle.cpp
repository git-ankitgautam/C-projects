#include<iostream>
 using namespace std;

 int main()
 {
     system("cls");
     int n, i,r,s;
     s=1;
     cout<<"enter the value for n";
     cin>>n;
    for(i=1;i<=n;i++)
    {
        for(r=1;r<=i;r++)
        {
            cout<<""<<s;
            s++;
        }
        cout<<"\n";
    }

    return 0;
}