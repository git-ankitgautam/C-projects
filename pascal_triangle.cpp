#include<iostream>

using namespace std;

int main()
{
    system("cls");
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    for(int i=0;i<=n;i++)
    { 
        for(int m=1;m<=n;m++)
        {
            cout<<"\t";
            for(int r=1;r<=n;r++)
            {
                cout<<""<<r;
            }
        }    
        cout<<"\n";
    }
}