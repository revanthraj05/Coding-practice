#include <iostream>
using namespace std;


/*
return_type function_name(parameters)
{
    
    
    return value;
}

*/

int add(int num1, int num2)//num1 = 4, num2 = 3
{
    int sum = num1 + num2;  // sum = 7
    return sum; //return 7
}


void print_sum(int num1, int num2)
{
    int sum = num1 + num2;
    cout<<sum<<endl;
    
    return;
}


bool isPrime(int n)
{
    //2 to n-1 
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    
    return true;
}


void printIsPrime(int n)
{
    bool p = true;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            p = false;
            break;
        }
    }
    
    if(p == true)
    {
        cout<<n<<" is a prime"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime"<<endl;
    }
    
    return;
}


int main()
{
    int a=4, b=3;
    
    int c = add(a, b);  //c = 7
    
    cout<<c<<endl;
    
    print_sum(a, b);
    
    int n = 21;
    
    if(isPrime(n) == true)
    {
        cout<<n<<" is prime"<<endl;
    }
    else
    {
        cout<<n<<" is not prime"<<endl;
    }
    
    int m = 31;
    
    printIsPrime(m);
    
    printIsPrime(65);
    
    for(int i=1;i<=1000;i++)
    {
        if(isPrime(i)==true)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    
    
    return 0;
}
