#include<iostream>
using namespace std;
int patients(int t );
int check(int input , int i);
int main()
{
    int t;
    cout<<"Enter the number of days : ";
    cin >> t;
    patients( t );

}       
int patients(int t )
{
    int input , tr, un , totalUn = 0 , totaltr = 0;
     
    for(int i = 1 ; i <=t ; i++)
    {   
        cout<<"Patients for Day "<< i <<" : "<<endl;
        cin >> input ;
        un = check(input , i);
        tr = input - un;
        totalUn = totalUn + un;
        totaltr = totaltr + tr;
    }
    cout<<"Treated  Pateints : " << totaltr ;
    cout<<"Untreated  Patients : "<< totalUn ;
      
}
int check(int input , int i)
{
    int dctr = 7;
    int   UTrPts;
    if( i % 3 == 0)
    {
        dctr= dctr + 1;
    }
    if( input >= dctr){
    UTrPts = input - dctr;
     
    }
    if(input < dctr)
    {
         
        UTrPts = 0;
    }
    return  UTrPts;
}