#include <iostream>
using namespace std;


int a1=0,a2=0,a3=0;
int b1=0,b2=0,b3=0;
int c1=0,c2=0,c3=0;

char fun1(int a)
{
    if(a==0)
        return ' ';
    else if(a==1)
        return 'X';
    else
        return 'O';
}

void printBoard()
{
    /*
    a1|a2|a3
    b1|b2|b3
     | |
    */
    
    cout<<fun1(a1);
    cout<<"|";
    
    cout<<fun1(a2);
    cout<<"|";
    
    cout<<fun1(a3);
    cout<<endl;
    
    cout<<fun1(b1);
    cout<<"|";
    
    cout<<fun1(b2);
    cout<<"|";
    
    cout<<fun1(b3);
    cout<<endl;
    
    cout<<fun1(c1);
    cout<<"|";
    
    cout<<fun1(c2);
    cout<<"|";
    
    cout<<fun1(c3);
    cout<<endl;

}


void turn(int a)  //a==1 X //a==2 O
{
    int row, col;
    if(a==1)
        cout<<"X turn."<<endl;
    else
        cout<<"O turn."<<endl;
    cout<<"Enter row: ";
    cin>>row;
    
    cout<<"Enter col: ";
    cin>>col;
    
    if(row==1 && col==1)
        a1 = a;
    else if(row==1 && col==2)
        a2 = a;
    else if(row==1 && col==3)
        a3 = a;
    else if(row==2 && col==1)
        b1 = a;
    else if(row==2 && col==2)
        b2 = a;
    else if(row==2 && col==3)
        b3 = a;
    else if(row==3 && col==1)
        c1 = a;
    else if(row==3 && col==2)
        c2 = a;
    else if(row==3 && col==3)
        c3 = a;
    
    cout<<"Board updated!!!"<<endl;
    
    printBoard();
}


int main()
{
    printBoard();
    
    
    turn(1);  //X
    turn(2);  //O
    turn(1);  //X
    turn(2);  //O
    
    
    
    return 0;
}
