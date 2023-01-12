
// Q4 Decimal to binary conversion

#include<iostream>
using namespace std;

int binary(int n) 
{ 

  if (n==0)  

    return 0; // If the number is 0, return 0

  else

    return (n%2 + 10*binary(n/2)); // If not 0, it will make the reminder of the number when divided by 2 
	// which has to be added to the return value of the recursive call by sending the n divided by 2.

} 

int main() 

{ 

  int n ; // Declaring an integer variable

 cin>>n; // Getting the value from user

  cout<<"Binary Number : "  <<binary(n); // Here we call our recursion function and pass the value n

  return 0; 

}


