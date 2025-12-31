#include<iostream>
using namespace std;

int main()
{
    int number[6];
    cout<<"Enter 5 integer"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cin>>number[i];
    }
cout<<"check"<<endl;
    for(int i=0;i<6;i++)
    {
        if(number[i]%2==0)
        
        {cout<<number[i]<<endl;}
    }

int size;
size= sizeof(number)/sizeof(number[0]);
cout<<"elements"<<size<<endl;
    
}