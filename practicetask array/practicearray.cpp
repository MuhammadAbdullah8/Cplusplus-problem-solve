#include <iostream>
using namespace std;

int main()
{

cout<<"Find 2nd Largest Number"<<endl;
    cout<<"enter 6 input"<<endl;

int o[6];

int largest = o[0];

    for( int  i = 0; i < 6; i++)
    {
        cin>>o[i];




if(o[i]>largest)
{
    largest = o[i];
}

    }
cout<<"largest here "<<largest<<endl;



cout<<"second largest  "<<endl;

int secondlargest=0.9999;

for(int  i = 0; i < 6; i++ )
{
 if(o[i]!= largest && o[i]>secondlargest)
 {
secondlargest= o[i];
 }
}

cout<<"second largest is    "<<secondlargest<<endl;







}

/*

    cout<<"sum of positive number"<<endl;
    cout<<"enter 8 input"<<endl;
int n;
int sum =0;
    
for(int i=1;i<=8;i++)
{
    cin>>n;

    if(n>0)
    {
    sum = sum+n;
    }



}
cout<<sum<<endl;


cout<<"Count Even & Odd Numbers"<<endl;
    cout<<"enter 10 input"<<endl;

    int m;
    int evencount=0;
    int oddcount=0;
    for(int i=1;i<=10;i++)
{
    cin>>m;
    if(m%2==0)
    {
      evencount = evencount + 1;
    }
    else
    {
oddcount = oddcount+1;
    }
}

cout<<"number of even"<<evencount<<endl;
cout<<"nuber of odd"<<oddcount <<endl;


cout<<"Find 2nd Largest Number"<<endl;
    cout<<"enter 6 input"<<endl;

int o[6];

int largest = o[0];
int smallest =o[0];
    for( int  i = 0; i < 6; i++)
    {
        cin>>o[i];




if(o[i]>largest)
{
    largest = o[i];
}

if(o[i]<smallest)
{
    smallest = o[i];
}
    }
cout<<"largest here "<<largest<<endl;
cout<<"smallest here "<<smallest<<endl;*/