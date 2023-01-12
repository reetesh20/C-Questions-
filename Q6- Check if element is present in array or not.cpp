
// Q6- Check if element is present in array or not
#include<iostream>
using namespace std;
int main()
{
	int n,x,a[n],flag=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"present";
	}
	else
	cout<<"not present";
}

