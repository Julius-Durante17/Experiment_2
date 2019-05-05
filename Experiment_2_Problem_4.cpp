#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
	int n;
	
	cout<<"Counting...\n"<<endl;
	
	for (n=1;n<=30;n++)
	{
		if(n<10)
		{
		
		cout<<n<<",";
		}
		else if (n<30)
		{
		
		cout<<n++<<",";
		
		}
		else if (n==30)
		{
		
		cout<<n;
		
		}
	}
	
	
	cout<<endl;
	
	getch();
	return 0;
}

