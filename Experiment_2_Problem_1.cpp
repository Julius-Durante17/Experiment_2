#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
	const int hrs_a=10;
	const int pack_a=995;
	char package;
	int hours;
	
	cout<<"Here are the lists of packages:\n"<<endl;
	cout<<" (A)For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n"<<endl;
	cout<<" (B)For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.\n"<<endl;
	cout<<" (C)For P1995/mo of unlimited access is provided.\n"<<endl;
	cout<<"What is the package you availed?(letter only)"<<endl;
	cin>>package;

	
	switch(package)
	{
	
	case 'A':
	case 'a':
		
		cout<<" For P995/mo 10 hrs of access are provided. Additional hours are P20/hr."<<endl;
	
	cout<<"\nHow many hours of internet did you use?"<<endl;
	cin>>hours;
	
	if(hours<=10)
	
		cout<<"Your bill is only 995 pesos"<<endl;
	else
	
		cout<<"Total amount due:"<< 995 + ( (hours - 10) * 20)<< " pesos"<<endl;
	
		break;
	
	case 'B':
	case 'b':
		cout<<" For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr."<<endl;
	cout<<"\nHow many hours of internet did you use?"<<endl;
	cin>>hours;

	if(hours<=20)
		cout<<"Your bill is only 1495 pesos"<<endl;
	else
		cout<<"Total amount due: "<< 1495 + ((hours-20) * 10)<< " pesos"<<endl;
		break;
	case 'C':
	case 'c':
		cout<<"  For P1995/mo of unlimited access is provided."<<endl;
		cout<<"Total amount due is: 1995 pesos"<<endl;	
	cout<<"\nThank you..."<<endl;
		break;

	default:
		cout<< " There is no package like that.."<<endl;		
	}
	
	
	
	getch();
	return 0;
}

