#include <iostream>
using namespace std;

int main()
{
	// variable declaration
	// data_type variable_name;
	int num;   //num is a variable of type integer. Range of int is roughly -10^9 to 10^9
	long long int big_num;  //big_num is a variable of type long long int. Range of long long int is roughly -10^18 to 10^18
	char box;  //box is a variable of type character. It stores only a single character.
	float a;   //a is a variable of type float (decimal)
	double b;  //b is a variable of type double (decimal with more digits after decimal point)
	
	num = 12345678;
	big_num = 123456789012345;
	box = 'h';
	a = 5.4321;
	b = 321.3230182819283l;
	
	cout << num << endl;    //displaying using cout
	printf("%d\n", num);    //displaying same num using printf
	
	cout << big_num << endl;   
	printf("%lld\n", big_num);
	
	cout << box << endl;
	printf("%c\n", box);
	
	cout << a << endl;
	printf("%.4f\n", a);   //Use %.4f to print 4 digits after decimal point
	
	cout << b <<endl;      //cout will only display 4 digits after decimal point
	printf("%.12lf\n", b);   //using printf we can display any number of digits we like after the decimal point
	
	return 0;
}
