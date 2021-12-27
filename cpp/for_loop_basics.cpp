#include<iostream>
using namespace std;

int main()
{
    //++ operator
    int a = 5;
    
    //increment by 4
    a = a + 4;
    a += 4;

    //increment by 1 using different syntax    
    a = a + 1;
    a += 1;
    a++;
    ++a;
    
    /////////////////////////////////////////
    //for loop
    /*
    >>syntax
    
    for(s1;s2;s3)
    {
        s4;
    }
    
    >>meaning
    1 - Execute s1
    2 - check condition s2
    3 - run s4
    4 - run s3 (increment)
    
          ___________________
         |        loop       \
         v                    \
    1 -> 2 ->(if true)-> 3 -> 4 
         |
         |(if false)
         v
        Out of for loop    
    */
    
    cout<<"5 10 15 20 25 30"<<endl;
    
    for(int i=5;i<=50;i+=5)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
    
    
    cout<<"**********"<<endl;
    
    for(int i=0;i<10;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
    
    for(int i=1;i<=10;i++)
    {
        cout<<7*i<<" ";                    //Multiples of 7
    }
    cout<<endl;
    
    for(int i=1;i<=10;i++)
    {
        cout<<6*i<<" ";                     //Multiples of 6
    }
    cout<<endl;
    
    
    cout<<1+2+3+4+5+6+7+8+9+10<<endl;
    
    int sum=0;
    
    for(int i=1;i<=100;i++)
    {
        sum = sum + i;                         //Sum of first 100 natural numbers
    }
    
    cout<<sum<<endl;
    
    
    for(int i=1;i<=10;i++)
    {
        cout<<"7 x "<<i<<" = "<<7*i<<endl;         //Multiplication table
    }
    
    
    //Factorial of number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int prod=1;
    
    for(int i=n;i>=1;i--)
    {
        prod = prod*i;
    }
    
    cout<<prod<<endl;
    
    
    //a power b
    
    int c,b;
    cout<<"Enter a number: ";
    cin>>c;
    cout<<"Enter another number: ";
    cin>>b;
    
    //a^b

    prod=1;
    
    for(int i=b;i>=1;i--)
    {
        prod = prod*c;
    }
    //prod = 1*1*2*3*4*..*b =b!
    //prod = 1*a*a*a*a*...*a = a^b
    
    cout<<prod<<endl;
    
    
    //Take 10 numbers as input and find the sum of odd and even numbers
    int r;
    int sum_odd=0, sum_even=0;
    
    cout<<"Enter 10 numbers: ";
    
    for(int i=1;i<=10;i++)
    {
        cin>>r;
        if(r%2==0)   //even
        {
            sum_even = sum_even + r;    
        }
        else         //odd
        {
            sum_odd = sum_odd + r;
        }
    }
    
    cout<<sum_odd<<" "<<sum_even<<endl;
    
    
    return 0;
}
