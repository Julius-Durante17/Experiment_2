#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	
	int n;
	int z=0;
	int y=0;
	int d=1;
	int again=1;
	do
	{
	
		cout<<"\nEnter a number:\n"<<endl;
		cin>>n;
		
		if (n<=0)
		{
				
			cout<<"\n Thank you!"<<endl;
			break;
		}
		for (int x=1;x<=n;x++)
		{
			z+=x;
			
		}
		
		cout<<"The sum of the whole numbers from "<<d<<" to "<<n<<" is "<<z<<endl;
		z=0;
	}
	while(again);
	
	
	
	
	getch();
	return 0;
}
