#include <iostream>
using namespace std;

void increment(int &a)
{
    cout<<a<<endl;
    a = a + 1;
    cout<<a<<endl;
}

void swap(int &a, int &b)
{
    cout<<a<<" "<<b<<endl;
    int c = a;
    a = b;
    b = c;
    cout<<a<<" "<<b<<endl;
}

int max_in_array(int arr[], int n)
{
    int out = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i] > out)
            out = arr[i];
    }
    
    return out;
}


int min_in_array(int arr[], int n)
{
    int min_uptil_now = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i] < min_uptil_now)
            min_uptil_now = arr[i];
    }
    
    return min_uptil_now;
}



int main()
{
    //Swapping two numbers
    int a = 6, b=8;
    cout<<a<<" "<<b<<endl;
    int c = a;
    a = b;
    b = c;
    
    cout<<a<<" "<<b<<endl;
    
    //Swapping using function
    
    int x=10, y=3;
    cout<<x<<" "<<y<<endl;
    swap(x, y);
    cout<<x<<" "<<y<<endl;
    
    
    //difference between passing by value and passsing by reference
    
    int t = 5;
    cout<<t<<endl;
    increment(t);
    cout<<t<<endl;
    
    //find max element in array
    
    int marks[10] = {25, 92, 12, 54, 23, 10, 54, 3, 2, 78};
    //                                              |
    int max_uptil_now = marks[0];
    
    for(int i=0;i<10;i++)
    {
        if(marks[i] > max_uptil_now)
            max_uptil_now = marks[i];
    }
    
    cout<<"Maximum value = "<<max_uptil_now<<endl;
    
    //find min value in array
    
    int min_uptil_now = marks[0];
    for(int i=0;i<10;i++)
    {
        if(marks[i] < min_uptil_now)
            min_uptil_now = marks[i];
    }
    
    cout<<"Minimum value = "<<min_uptil_now<<endl;
    
    
    //function with arrays
    
    /*
    int max_in_array(int arr[], int n)
    {
        int out = arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i] > out)
                out = arr[i];
        }
        
        return out;
    }
    */
    
    int rates[15] = {10, 15, 20, 100, 200, 600, 1000, 1, 25, 65, 99, 35, 80, 3, 5};
    
    int max_from_fun = max_in_array(rates, 15);
    cout<<max_from_fun<<endl;
    
    int min_from_fun = min_in_array(rates, 15);
    cout<<min_from_fun<<endl;
    
    return 0;
}
