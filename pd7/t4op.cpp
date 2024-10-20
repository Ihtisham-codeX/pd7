#include<iostream>
using namespace std;
int triangleDots(int n);
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>> n;
    triangleDots(n);

}
int triangleDots(int n)
{
    int  dots = 0;
    for(int i =1 ; i <= n ; i++)
    {
        
        
        for(int b=i ; b<=n ; b++)
        {
            dots++;   
        }
        

    }
    cout<<dots;
}