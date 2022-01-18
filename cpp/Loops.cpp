#include <iostream>

using namespace std;

int main()
{
    
    /*
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    */
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    /*
    *******
    *******
    *******
    *******
    */
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<7;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    /*
    *
    **
    ***
    ****
    *****
    */
    
    for(int j=1;j<=5;j++)
    {
        for(int i=0;i<j;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    /*
    *****
    ****
    ***
    **
    *
    */
    
    
    for(int i=5;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    
    /*for loop*/
    
    for(int i=0;i<10;i++)
    {
        cout<<i+1<<" ";
    }
    cout<<endl;
    
    /*while loop*/
    
    int i=0;    //initialisation
    
    while(i<10)    //condition  if satisfy enter while loop
    {
        cout<<i+1<<" ";
        
        i++;
    }
    
    cout<<endl;
    cout<<endl;
    
    //do while loop
    
    i=0;
    
    do
    {
        cout<<i+1<<" ";
        
        i++;
        
    }while(i<10);
    
    cout<<endl;
    cout<<endl;
    
    /*Nested while loop*/
    
    int j=0;
    while(j<5)
    {
        i = 0;
    
        while(i<5)
        {
            cout<<i+1<<" ";
            
            i++;
        }
        cout<<endl;
        
        j++;
    }
    
    cout<<endl;
    
    
    /*difference between while and do while*/
    
    i=0;
    
    while(i<0)
    {
        cout<<i+1<<" ";
        i++;
    }
    cout<<endl;
    
    
    i=0;
    
    do
    {
        cout<<i+1<<" ";
        i++;
    }while(i<0);
    cout<<endl;
    
    
    
    

    return 0;
}
