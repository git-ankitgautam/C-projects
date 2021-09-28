#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	system("cls");
	int option;
	float radius,diameter,circum,area,pi;
	pi = 3.14;
	char quantity_opt;
	cout<<"Enter the number for what you want to find out";
	cout<<"\nFor:-\n Circumference-1\n Area-2 \n Radius-3";
	cout<<"\nYour entry here-";
	cin>>option;
	system("cls");
	switch(option)
	{
		case 1:
		cout<<"You wanted to find out - Circumference\n";
		break;

		case 2:
		cout<<"You wanted to find out - Area \n";
		break;

		case 3:
		cout<<"You wanted to find out - Radius \n";
		break;

		default:
		cout<<"invalid entry";
	}

	switch(option)
	{
		case 1:
		
		cout<<"Select the quantity that you have\n";
		cout<<"Radius-r \n Area-a\n Diameter-d";
		cout<<"\nYou have selected=";
		cin>>quantity_opt;
		switch(quantity_opt)
		{
			case 'r':
			cout<<"Enter the value of Radius=";
			cin>>radius;
			cout<<"The circumference of the circle is="<<radius*2*pi;
			break;
	
	   		case 'a':
			cout<<"Enter the value of Area=";
			cin>>area;
			cout<<"The circumference of the circle is="<<2*pi*(pow((area/pi),(0.5)));
			break;
		
	   		case 'd':
			cout<<"Enter the value of diameter=";
	 		cin>>diameter;
	 		cout<<"The circumference of the circle is="<<diameter*pi;
	 		break;
	 
	 		default:
	 		cout<<"invalid entry";
		}
		break;

		case 2:
		
		cout<<"Select the quantity that you have\n";
		cout<<"Radius-r \n Circumference-c\n Diameter-d";
		cout<<"\nYou have selected=";
		cin>>quantity_opt;
		switch(quantity_opt)
		{
			case 'r':
			cout<<"Enter the value of Radius=";
			cin>>radius;
			cout<<"The Area of the circle is="<<radius*radius*pi;
			break;

	   		case 'c':
			cout<<"Enter the value of Circumference=";
			cin>>circum;
			cout<<"The Area of the circle is="<<((circum*circum)/(4*pi));
			break;
		
	   		case 'd':
			cout<<"Enter the value of diameter=";
	 		cin>>diameter;
	 		cout<<"The Area of the circle is="<<diameter*pi;
	 		break;
	
			default:
			cout<<"invalid entry";
		}
		break;

		case 3:
		
		cout<<"Select the quantity that you have\n";
		cout<<"\n Area-a \n Circumference-c\n Diameter-d";
		cout<<"\nYou have selected=";
		cin>>quantity_opt;
		switch(quantity_opt)
		{
			case 'a':
			cout<<"Enter the value of Area=";
			cin>>area;
			cout<<"The Radius of the circle is="<<pow((area/pi),(0.5));
			break;

	   		case 'c':
			cout<<"Enter the value of Circumference=";
			cin>>circum;
			cout<<"The Radius of the circle is="<<circum/(2*pi);
			break;
		
	   		case 'd':
			cout<<"Enter the value of diameter=";
	 		cin>>diameter;
	 		cout<<"The Radius of the circle is="<<diameter/2;
	 		break;
	
			default:
			cout<<"invalid entry.";
		}
		break;
	}
	  	

	return 0;
}
