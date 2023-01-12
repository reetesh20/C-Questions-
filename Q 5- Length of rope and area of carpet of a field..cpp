
// Question 5- Length of rope and area of carpet of a field.

#include<iostream>
using namespace std;
int main()
{
	int l,b,p=0,a=0;
	cin>>l>>b;
	p = 2*(l+b);
	a = l*b;
	cout<<"carpet "<<a;
	cout<<"rope "<<p;
}
