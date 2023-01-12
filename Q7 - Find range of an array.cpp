
// Q7 - Find range of an array 

#include<iostream>
using namespace std;
int main()
{
	int n,a[n],range,min=0,max=0;
	cin>>n;
	if(n<20)
	{
		for(int i=0;i<n;i++)
	    {
		cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	    	if(a[min]>a[i])
	    	{
	    		min=i;
			}
			if(a[max]<a[i])
	    	{
	    		max=i;
			}
	    }
	    range = a[max]-a[min];
	    cout<<range;
    }
    else
    cout<<"range is wrong";
}
