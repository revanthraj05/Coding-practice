#include <iostream>

using namespace std;

int main()
{
    
    /*
       *
      ***
     *****
    *******
    */
    
    for(int i=0;i<4;i++)
    {
        //i=0   3 space    (3 - i)
        //i=1   2 space 
        //i=2   1 space 
        //i=3   0 space 
        
        for(int j=0;j< (3-i);j++)
        {
            cout<<" ";
        }
        
        //i=0 1 star    i*2 + 1
        //i=1 3 star
        //i=2 5 star
        //i=3 7 star
        
        for(int k=0;k< (i*2+1);k++)
        {
            cout<<"*";
        }
        
        
        cout<<endl;
    }
    
    cout<<endl;
    
    
    /*
      *
     ***
    *****
     ***
      *
    */
    
    
    for(int i=0;i<5;i++)
    {
        
        //i=0 2 space    
        //i=1 1 space
        //i=2 0 space     abs(i-2) spaces
        //i=3 1 space
        //i=4 2 space
        
        for(int j=0;j<abs(i-2);j++)
        {
            cout<<" ";
        }
        
        //i=0 1 star      (5 - 4)
        //i=1 3 star      (5 - 2)   (5 - abs(i-2)*2)
        //i=2 5 star      (5 + 0)   (5 - abs(i-2)*2)
        //i=3 3 star      (5 - 2)
        //i=4 1 star      (5 - 4)
        
        for(int k=0;k<(5 - abs(i-2)*2);k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    cout<<endl;
    
    /*
    1010101
     10101 
      101  
       1   
    */
    for(int i=0;i<4;i++)
    {
        // i=0 0 space 
        //i=1 1 space 
        //i=2 2 space 
        for(int y=0;y<i;y++)
        {
            cout<<' ';
        }
        //i=0 7 
        //i=1 5
        //i=2 3 
        //i=3 1 
        for(int t=0;t<7-i*2;t++)
        {
            if(t%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
    }
    cout<<endl;
    
    // prime numbers - 2 factors - 1 and n 
    
    int n = 7;  // 1 and n divide 
    
    //check - 2 to n-1 
    //atleast 1 number k n%k == 0 -> composite. 
    //no number k such that n%k == 0 -> prime
    
    bool isPrime = true;  //bool  -> true, false
    
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            isPrime = false;
            break;
        }
    }
    
    
    if(isPrime == true)
    {
        cout<<n<<" is Prime"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime"<<endl;
    }
    cout<<endl;
    
    return 0;
}
