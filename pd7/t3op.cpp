#include<iostream>
using namespace std;
int amplifier(int n);
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>> n ;
    amplifier(n);
}
int amplifier(int n)
{
    int c;
    for(int i=1 ; i <= n ; i++)
    {
        c = i;
        if(i%4 == 0 )
        {
            c = i * 10 ;
        }
        cout<< c <<",";
    }
}