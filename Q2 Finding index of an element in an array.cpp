
// Q2 Finding index of an element in an array

#include <iostream>
using namespace std;

int main() 
{
	int arr[] = {12, 56, 823, 7, 1023};
	int n = sizeof(arr) / sizeof(arr[0]);
	int index = -1;
	
    int element;
    cout <<"Enter the element to be searched";
    cin>>element;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            index = i;
            break;
        }
    }
    
	if(index==-1)
    {
        cout<<"Element doesn't exist in array"<<endl;
    }
    
    else
    {
        cout<<"Index of " <<element<<" is : "<<index<<endl;
    }
    return 0;

}


