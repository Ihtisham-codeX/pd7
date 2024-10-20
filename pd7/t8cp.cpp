#include<iostream>
using namespace std;
float cargo(int n);
int main()
{
    int n;
    cout<<"Enter the count of cargo :";
    cin>> n;
    cargo(n);
}
float cargo(int n)
{
    float tonnage , weight1 = 0, weight2 = 0, weight3 = 0 ,AvgPerTon , weight1Avg , minibus , truck , train , total;
    for(int i = 1 ; i <= n ; i++)
    {
        cout<<"Enter the tonnage of cargo  "<<i<<" :  ";
        cin>> tonnage;
    if(tonnage <= 3 && tonnage >= 1)
    {
        weight1 = weight1 + tonnage;
    }
    if(tonnage <=11 && tonnage > 3)
    {
        weight2 = weight2 + tonnage; 
    }
    if(tonnage >11)
    {
        weight3 = weight3 + tonnage;
    }
    }
    total =  weight1 + weight2  + weight3 ;
    weight1Avg= 200*weight1 + 175*weight2  + 120*weight3;
    AvgPerTon= weight1Avg / total;
    minibus = (weight1 / total ) *100;
    truck = (weight2 / total ) *100;
    train = (weight3 / total ) *100;
    cout<< "Average price per ton : "<< AvgPerTon<<endl;
    cout<< "Percentage by Minibus : "<< minibus<<"%"<<endl;
    cout<< "Percentage by Truck : "<<truck<<"%"<<endl;
    cout<< "Percentage by Train : "<<train<<"%"<<endl;
}
