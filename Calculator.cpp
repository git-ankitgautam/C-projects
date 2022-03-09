#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter the number according to the operation you want to use\n";
	cout<<"For Addition-1 \n    Subtraction-2 \n    Multiplication- 3 \n    Division-4\n";
	int x,c;
	float y,z,b,d;
	char a;
	cout<<"Your entry here-";
	cin>>x;
	switch(x)
	{
		case 1:
		cout<<"You have chosen addition \n";
		cout<<"Enter the numbers to execute the operation\n";
    	cout<<"First number is=";
	    cin>>y;
	    cout<<"\nSecond number is=";
    	cin>>z;
	    cout<<"===>>";
	    cout<<""<<y<<"+"<<z<<"="<<(y+z);
	    b=y+z;
	    break;
	     
	    case 2:
		cout<<"You have chosen substraction\n";
		cout<<"Enter the numbers to execute the operation\n";
	    cout<<"First number is=";
	    cin>>y;
	    cout<<"\nSecond number is=";
	    cin>>z;
	    cout<<"===>>";
	    cout<<""<<y<<"-"<<z<<"="<<(y-z);
	    b=y-z;
	    break;
	    
	    case 3:
		cout<<"You have chosen Multipilcation\n";
		cout<<"Enter the numbers to execute the operation\n";
	    cout<<"First number is=";
	    cin>>y;
	    cout<<"\nSecond number is=";
	    cin>>z;
	    cout<<"===>>";
	    cout<<""<<y<<"*"<<z<<"="<<(y*z);
	    b=y*z;
		break;
	    
	    case 4:
		cout<<"You have chosen division\n";
		cout<<"Enter the numbers to execute the operation\n";
	    cout<<"First number is=";
	    cin>>y;
	    cout<<"\nSecond number is=";
	    cin>>z;
	    cout<<"===>>";
	    cout<<""<<y<<"/"<<z<<"="<<(y/z);
	   //for the second part of the opertion
	   b=y/z;
	    break;
		
		 default :
		cout<<"invalid entry";
		break;
	}
	if(x<=4 && x>=1)
	{
	//first operation end
	
	// second operation start
	cout<<"\nif you want to continue the operation with your current result press a\n";
	cout<<"your entry here-";
	cin>>a;
	if(a=='a')
	{
		cout<<"Enter the number according to the operation you want to use\n";
	    cout<<"For Addition-1 \n    Subtraction-2 \n    Multiplication- 3 \n    Division-4\n";
	    cout<<"\nyour entry here-";
	    cin>>c;
	    switch(c)
	    {
		case 1:
		cout<<"You have chosen addition \n";
		cout<<"Enter the number to execute the operation\n";
    	cout<<"First number was="<<b;
	    cout<<"\nSecond number is=";
    	cin>>d;
	    cout<<"===>>";
	    cout<<""<<b<<"+"<<d<<"="<<(b+d);
	    break;
	     
	    case 2:
		cout<<"You have chosen substraction\n";
		cout<<"Enter the numbers to execute the operation\n";
	    cout<<"First number was="<<b;
	    cout<<"\nSecond number is=";
	    cin>>d;
	    cout<<"===>>";
	    cout<<""<<b<<"-"<<d<<"="<<(b-d);
	    break;
	    
	    case 3:
		cout<<"You have chosen Multipilcation\n";
		cout<<"Enter the numbers to execute the operation\n";
	    cout<<"First number was="<<b;
	    cout<<"\nSecond number is=";
	    cin>>d;
	    cout<<"===>>";
	    cout<<""<<b<<"*"<<d<<"="<<(b*d);
	    break;
	    
	    case 4:
		cout<<"You have chosen division\n";
		cout<<"Enter the numbers to execute the operation\n";
	    cout<<"First number was="<<b;
	    cout<<"\nSecond number is=";
	    cin>>d;
	    cout<<"===>>";
	    cout<<""<<b<<"/"<<d<<"="<<(b/d);
	    break;
	   
	   default :
		cout<<"invalid entry";
	}
	}
	else
	{
		cout<<"Thank you for using the calculator";
	}
}
	return 0;
}
