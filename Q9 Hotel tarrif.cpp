
// Q9 Hotel tarrif

#include <iostream>
using namespace std;
int main()
{
	int month,days;
	cout<<"1.January"<<endl;
	cout<<"2.February"<<endl;
	cout<<"3.March"<<endl;
	cout<<"4.April"<<endl;
	cout<<"5.May"<<endl;
	cout<<"6.June"<<endl;
	cout<<"7.July"<<endl;
	cout<<"8.August"<<endl;
	cout<<"9.Semptember"<<endl;
	cout<<"10.October"<<endl;
	cout<<"11.November"<<endl;
	cout<<"12.December"<<endl;
	cout<<"Please Enter the month you want to know the tarrif about: ";
	cin>>month;

	cout<<"Enter the number of days you want to stay: ";
	cin>>days;

	int tarrif=1500;
	
	switch(month)
	{
	case 4:
		int tarrif1=tarrif+(tarrif*20/100);
		int tarrif2=tarrif1*days;
		cout<<"The tarrif of your stay is: "<<tarrif2<<endl;
	case 5:
		int tarrif1=tarrif+(tarrif*20/100);
		int tarrif2=tarrif1*days;
		cout<<"The tarrif of your stay is: "<<tarrif2<<endl;
	case 6:
		int tarrif1=tarrif+(tarrif*20/100);
		int tarrif2=tarrif1*days;
		cout<<"The tarrif of your stay is: "<<tarrif2<<endl;
	case 11:
		int tarrif1=tarrif+(tarrif*20/100);
		int tarrif2=tarrif1*days;
		cout<<"The tarrif of your stay is: "<<tarrif2<<endl;
	case 12:
		int tarrif1=tarrif+(tarrif*20/100);
		int tarrif2=tarrif1*days;
		cout<<"The tarrif of your stay is: "<<tarrif2<<endl;
	default:
		cout<<"Your tarrif is: "<<tarrif<<endl;
	}
	
}

