#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const double z=2.50;
	int y;
	int x;
	
	
	cout<<"What is the value of x?\n"<<endl;
	cin>>x;
	
	cout<<"What is the value of y?\n"<<endl;
	cin>>y;
	
	switch(x)
	{
		case 1:
		cout<<fixed<<showpoint<<setprecision(2);
		
		if (y>1&&y<5)
		{
		cout<< " \n"<<endl;
		
		cout<<setw(10)<<"V is "<< (x*y)*z<<endl;
	
		}
		else if (y>=5)
		{
		
		cout<< " \n"<<endl;
		cout<<setw(10)<<"V is "<< x+(y/z)<<endl;
		
		}
		else if (y==1)
		{
		cout<< " \n"<<endl;
		cout<< setw(10)<< "V is "<< x+y+z<<endl;
		
		}
		
		else
		{
			cout<<"\nPlease use number only"<<endl;
			cout<<"\nThank you..."<<endl;
		}
		break;
		
		case 2:
		
		cout<<fixed<<showpoint<<setprecision(2);
		
		if (y<=5)
		{
		cout<< " \n"<<endl;
		cout<<setw(10)<< "V is "<< abs((x-y)/z)<<endl;
		}
		else if (y>5)
		{
		
		cout<<setw(10)<< "V is "<< x-(sqrt(y+z))<<endl;
		}
		
		else
		{
			cout<<"\nPlease use number only"<<endl;
			cout<<"\nThank you..."<<endl;
		}
	
		
		break;
		
		default:
		
		if(x>=3&&0<=x&&0<=y)
		{
		
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<setw(10)<< "V is "<< x+y+z<<endl;
		}
		
		else
		{
			cout<<"\nPlease use number only"<<endl;
			cout<<"\nThank you..."<<endl;
		}
	}
	
	getch();
	return 0;
}
