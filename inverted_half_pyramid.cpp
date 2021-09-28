#include<iostream>

using namespace std;

int main()
{
    system("cls");
    int n,r,s,i;
    s=1;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=1;
        for(r=n;r>=i;r--)
        {
            cout<<""<<s;
            s++;
        }
        cout<<"\n";
    }
    
    return 0;
}