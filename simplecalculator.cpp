#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"the result is :"<<a+b<<"\n";

}
void sub(int a,int b)
{
    cout<<"the result is :"<<a-b<<"\n";
    
}
void mul(int a,int b)
{
    cout<<"the result is :"<<a*b<<"\n";
    
}
void divi(int a,int b)
{
    if(b==0){
        cout<<"The value of second number can't be ZERO\n";
    }
    else{
        cout<<"the result is :"<<a/b<<"\n";
    } 
}
int main()
{
    int a,b;
    char c;
    cout<<"Enter the first value: \n";
    cin>>a;
    cout<<"Enter the operand: \n";
    cin>>c;
    cout<<"Enter the second value: \n";
    cin>>b;
    switch (c)
    {
    case '+':
        add(a,b);
        break;
    case '-':
        sub(a,b);
        break;
    case '*':
        mul(a,b);
        break;
    case '/':
        divi(a,b);
        break;
    default:
        break;
    }
    

}
