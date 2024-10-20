#include<iostream>
using namespace std;
int prime(int n);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>> n;
    prime(n);

}
int prime(int n)
{
    int status = 1;
    for(int i= 2 ; i <= n ; i++)
    {
        if( n % i == 0)
        {
            status = 0;
        }
    }
    cout<<status;

}