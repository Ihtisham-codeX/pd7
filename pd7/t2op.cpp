#include<iostream>
using namespace std;
int printUpper(int n);
int printLower(int n);
int main()
{
    int n;
    cout<<"Enter the number of rows ";
    cin>> n;
    printUpper(n);
    printLower(n);

}
int printUpper(int n)
{
    int a, b , c = n ;
    
    for (int i = 1 ; i <= n ; i++)
    {
         
        c=c-1;
        for( b=c ; b>=1 ; b--)
        {
            cout<<" ";            
        }
        
        for ( a = 1 ; a <= i ; a=a+1)
        
        { cout<<"*";
        
        }
        a = 1;
         
        cout<<"\n";   
    }
}
int printLower(int n)
{
    int  b , c=0    ;
    
    for (int i = n ; i >=1 ; i--)
    {
             
        for( b=1 ; b<=c ; b++)
        {
            cout<<" ";            
        }
        c++;
        
        for ( int a = i ; a >= 1 ; a--)
        
        { 
            cout<<"*";
        }
        cout<<"\n";   
    }
}