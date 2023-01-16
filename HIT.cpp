#include<iostream>
using namespace std; 

/*
int main()
{
	int a[7]= {1, 2, 5, 8, 9, 10, 12}; 
	for(int i=0;i<7;i++)
	{
		if(a[i]%2!=0) 
		cout<<a[i]<<endl;
	}

}
*/

int main()
{
	int a[7]= {1, 2, 5, 8, 9, 10, 12}; 
	int i=0;
	while(i<7)
	{
		if(a[i]%2!=0) 
		cout<<a[i]<<endl;
		i++;
	}

}
