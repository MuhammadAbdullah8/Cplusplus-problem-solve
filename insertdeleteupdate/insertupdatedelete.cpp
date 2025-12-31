#include <iostream>
using namespace std;
int main()
{

    
cout<<"Q5 Write a program that: Takes 10 numbers Replace all even numbers with 0"<<endl;
int arr[10];
cout<<"Takes 10 numbers"<<endl;
for (int i = 0; i < 10; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < 10; i++)
{
    cout<<arr[i]<<endl;
}

for (int i = 0; i < 10; i++)
{
    if(arr[i]%2==0)
    {
        arr[i]= 0;
    }
}

for (int i = 0; i < 10; i++)
{
    cout<<arr[i]<<endl;
}

}










/*






cout<<"Q1 update operation(Update index 1 to 99.)"<<endl;

int arr[10] = {10,20,30,40,55};

cout<<"before"<<endl;

for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<endl;
}

arr[1]= 99;

cout<<"after"<<endl;

for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<endl;
}



cout<<"------------------------------------------"<<endl;

cout<<" Q2 insert operation(Update index 3 to 100.)"<<endl;


int arr[3]= 100;

for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<endl;
}


cout<<" Q3 Take 5 inputs from the user. Update the last element to 999"<<endl;

int arr[5];

for (int i = 0; i < 5; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<endl;
}


arr[4]=999;

for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<endl;
}


cout<<"------------------------------------------"<<endl;
cout<<" Q4 Ask the user: Enter 6 numbers Enter index to change Enter new value Then update."<<endl;
int arr[10];
int index;
int newvalue;

cout<<"Enter 6 numbers"<<endl;

for (int i = 0; i < 6; i++)
{
    cin>>arr[i];
}
cout<<"numbers are"<<endl;

for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<endl;
}



cout<<"Enter the index where you want to change"<<endl;
cin>>index;




cout<<"Enter new value for this index"<<endl;
cin>>newvalue;
arr[index] = newvalue;


for (int i = 0; i <6; i++)
{
    cout<<arr[i]<<endl;
}


cout<<"Q5 Write a program that: Takes 10 numbers Replace all even numbers with 0"<<endl;
int arr[10];
cout<<"Takes 10 numbers"<<endl;
for (int i = 0; i < 10; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < 10; i++)
{
    cout<<arr[i]<<endl;
}

for (int i = 0; i < 10; i++)
{
    if(arr[i]%2==0)
    {
        arr[i]= 0;
    }
}

for (int i = 0; i < 10; i++)
{
    cout<<arr[i]<<endl;
}

*/


