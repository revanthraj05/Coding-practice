#include <iostream>
using namespace std;

int main()
{
	int a = 24;
	int b = 10;
	
	//Addition operator
	int sum = a + b;
	cout << sum << endl;
	
	//Subtraction operator
	int sub = a - b;
	cout << sub << endl;
	
	//Multiplication operator
	int product = a * b;
	cout << product << endl;
	
	//Division operator
	int division = a/b;             //Note that a and b are both int. Therfore the resultant a/b will also be an int. 
	cout << division << endl;
	
	//To get the division in decimals
	float division1 = (float)a/b;     //Here we are converting 'a' which is an int to float. So the resulting division will be a float.
	cout << division1 << endl;
	
	//Modulo operator
	int rem = a%b;                    //Modulo operator give the remainder which is obtained by dividing a by b.
	cout << rem << endl;
	
	return 0;
}
