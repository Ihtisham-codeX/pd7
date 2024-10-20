#include<iostream>
using namespace std;
bool isPrime(int num);
int main()
{
    int n , count = 0 , num = 2 , primorial = 1;
    cout<<"Enter a number: ";
    cin>> n;
    while(count < n)
    {
         
        if(isPrime(num))
        {            
            count ++;
            
            primorial=primorial * num;
        }
        num++;
    }
    cout<<" = "<< primorial;

}
bool isPrime(int num)
{
    if(num<=1)
    {
        return false;
    }
    for(int i = 2 ; i * i <= num ; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
        
    }
    return true;

}