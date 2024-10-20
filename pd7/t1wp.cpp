#include<iostream>
using namespace std;
int printTriangle(int n);
int main()
{
    int n;
    cout<<"Enter the number of rows ";
    cin>> n;
    printTriangle(n);

}
int printTriangle(int n)
{
    for (int i = 1 ; i <= n ; i++)
    {
        for (int a = 1 ; a <= i ; a++)
        {
            cout<<"*";
        }
        cout<<"\n";   
    }
}