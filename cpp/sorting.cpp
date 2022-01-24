#include <iostream>
using namespace std;

/*
return_type fun_name(parameters)
{
    /////
    return val;
}
*/

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}


int min_in_array(int arr[], int n, int start, int end)
{
    int min = arr[start];
    int idx = start;
    for(int i=start;i<=end;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
            idx = i;
        }
    }
    
    return idx;
}



int main()
{                  
    int arr[10] = {72, 192, 10, 2, 31, 42, 21, 12, 54, 8};
    
    int idx = min_in_array(arr, 10, 2, 5);
    cout<<idx<<endl;
    
    int a=4, b = 10;
    swap(a, b);
    cout<<a<<" "<<b<<endl;
    
    for(int j=0;j<10;j++)  //
    {
        /*
        int min = arr[j];
        int idx = j;
        for(int i=j;i<10;i++)
        {
            if(min>arr[i])
            {
                min = arr[i];
                idx = i;
            }
        }
        */
        int idx = min_in_array(arr, 10, j, 9);
        
        swap(arr[j], arr[idx]);
        
    }
    
    
    /*
    int min = arr[0];
    int idx = 0;
    for(int i=0;i<10;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
            idx = i;
        }
    }
    
    swap(arr[0], arr[idx]);
    
    min = arr[1];
    idx = 1;
    for(int i=1;i<10;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
            idx = i;
        }
    }
    
    swap(arr[1], arr[idx]);
    
    
    min = arr[2];
    idx = 2;
    for(int i=2;i<10;i++
    {
        if(min>arr[i])
        {
            min = arr[i];
            idx = i;
        }
    }
    
    swap(arr[2], arr[idx]);
    
    
    
    min = arr[3];
    idx = 3;
    for(int i=3;i<10;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
            idx = i;
        }
    }
    
    swap(arr[3], arr[idx]);
    
    */
    
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    
    
    /*
    72, 192, 10, 2, 31, 42, 21, 12, 54, 8
    2, 192, 10, 72, 31, 42, 21, 12, 54, 8
    2, 8, 10, 72, 31, 42, 21, 12, 54, 192
    2, 8, 10, 72, 31, 42, 21, 12, 54, 192
    2, 8, 10, 12, 31, 42, 21, 72, 54, 192
    2, 8, 10, 12, 21, 42, 31, 72, 54, 192
    2, 8, 10, 12, 21, 31, 42, 72, 54, 192
    2, 8, 10, 12, 21, 31, 42, 72, 54, 192
    2, 8, 10, 12, 21, 31, 42, 54, 72, 192
    */
    
    /*
    int min = arr[4];
    
    for(int i=4;i<10;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    cout<<min<<endl;
    */
    
    
    
    
    

    return 0;
}
