

// Q3 Finding sum of odd and even numbers

#include <iostream>
using namespace std;

int main() 
{
	int arr[5]={11,12,13,14,15};
	int sumeven=0;
	int sumodd=0;
	for(int i=0; i<5; i++)
	{
		if(arr[i]%2==0)
		{
    		cout<<"Even elements"<<arr[i]<<endl;
    		sumeven=sumeven+arr[i];
  		}
  		else if(arr[i]%2!=0)
  		{
  			cout<<"Odd elements"<<arr[i]<<endl;
    		sumodd=sumodd+arr[i];
		}
  	
 	}
 	cout<<"Sum of even numbers in an array is : "<<sumeven<<endl;
 	cout<<"Sum of odd numbers in an array is : "<<sumodd<<endl;



}


