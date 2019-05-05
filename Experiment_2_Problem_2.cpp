#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	const int late_charge = 20;
	int gallon;
	double unpaid;
	
	cout<<"Welcome, Please answer the following honestly."<<endl;
	cout<< "How many gallons of water did you used?"<<endl;
	cin>>gallon;
	cout<<"How much is your unpaid balance from previous months?"<<endl;
	cin>>unpaid;
	if(unpaid <=0)
	{
	
		cout<<"You don't have any unpaid balance\n"<<endl;
	}
	if(unpaid <=0)
	{
		cout<<"\nTotal amount due:\n "<< 35 + (gallon * 1.10)<<" pesos"<<endl;
	}	
	else 
	{
		cout<<"\nYour total unpaid balance for this month and previous months, including late charges are: \n"
			<< 35 + ((gallon * 1.10)+(unpaid + late_charge))<< " pesos"<<endl;
	
	}
	cout<<"\nThank you for answering honestly, please pay your water bill."<<endl;
	getch();
	return 0;	
}
