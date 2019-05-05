#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
	int n;
	int first=0;
	int second=1;
	int next;
	
	cout<<"Fibonacci Sequence\n"<<endl;
	
	for(int n=0;n<22;n++)
	{
		
		if (n==0)
		{
		
		cout<<first<<","<<second<<",";
		
		}
		else if (n<20)
		
		{
		
		next = first + second;
		first = second;
		second = next;
		cout<<next<<",";
		
		}
		else if (n==21)
		{
		
		next = first + second;
		first = second;
		second = next;
		cout<<next;
		
		}
		
	}
	
	cout<<endl;
	getch();
	return 0;
}
