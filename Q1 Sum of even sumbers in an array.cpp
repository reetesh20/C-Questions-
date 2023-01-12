// Q1 Sum of even sumbers in an array

#include <iostream>
using namespace std;

int main() 
{
	int arr[5]={11,12,13,14,15};
	int sum=0;
	for(int i=0; i<5; i++)
	{
		if(arr[i]%2==0)
	{
    	cout<<arr[i]<<endl;
    	sum=sum+arr[i];
  	}
 	}
 	cout<<"Sum of array is : "<<sum<<endl;


}

