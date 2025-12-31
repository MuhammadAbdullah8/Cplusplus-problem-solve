#include <iostream>
using namespace std;

int main()
{
    
    int arr[10];
    int size=6;
    int index =0;
    

cout<<"Q4 (Medium) Take 6 numbers. Insert 0 at index 0 (shift everything)."<<endl;

 cout<<"enter 6 number"<<endl;
    for ( int i = 0; i < 6; i++)
    {
        cin>>arr[i];
    }
    

     cout<<"here are input numbers"<<endl;
    for ( int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

int n;
    cout<<"Enter a number to insert"<<endl;
    cin>>n;
    

    for ( int i = size -1; i >= index; i--)
    {
        arr[i+1]=arr[i]; 
    }

   arr[index]=n;
    cout<<"here are updated numbers"<<endl;

    for ( int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }


    
}


/*

cout<<"Q1 (Easy)Array:10 20 30 40 Insert 99 at index 1."<<endl;

 cout<<"enter 4 number"<<endl;
    for ( int i = 0; i < 4; i++)
    {
        cin>>arr[i];
    }
    

     cout<<"here are input numbers"<<endl;
    for ( int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<endl;
    }


    int size=5;
    int index =1;
    int value = 99;

    for ( int i = size -1; i >= 1; i--)
    {
        arr[i+1]=arr[i]; 
    }

    arr[index]=99;
    cout<<"here are updated numbers"<<endl;

    for ( int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }

----------------------------------
#include <iostream>
using namespace std;

int main()
{
    
    int arr[10];
    int size=5;
    int index =4;
    

cout<<"Q2 (Easy) Insert 100 at the end of the array."<<endl;

 cout<<"enter 4 number"<<endl;
    for ( int i = 0; i < 4; i++)
    {
        cin>>arr[i];
    }
    

     cout<<"here are input numbers"<<endl;
    for ( int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<endl;
    }


    
    

    for ( int i = size -1; i >= 4; i--)
    {
        arr[i+1]=arr[i]; 
    }

   arr[index]=100;
    cout<<"here are updated numbers"<<endl;

    for ( int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }



----------------------------------

int main()
{
    
    int arr[10];
    int size=5;
    int index =2;
    

cout<<"Q3 (Medium) Ask user: Enter 5 numbers Enter a number to insertInsert at index 2"<<endl;

 cout<<"enter 5 number"<<endl;
    for ( int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    

     cout<<"here are input numbers"<<endl;
    for ( int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }

int n;
    cout<<"Enter a number to insert"<<endl;
    cin>>n;
    

    for ( int i = size -1; i >= index; i--)
    {
        arr[i+1]=arr[i]; 
    }

   arr[index]=n;
    cout<<"here are updated numbers"<<endl;

    for ( int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }


    
}

----------------------------------

int main()
{
    
    int arr[10];
    int size=6;
    int index =0;
    

cout<<"Q4 (Medium) Take 6 numbers. Insert 0 at index 0 (shift everything)."<<endl;

 cout<<"enter 6 number"<<endl;
    for ( int i = 0; i < 6; i++)
    {
        cin>>arr[i];
    }
    

     cout<<"here are input numbers"<<endl;
    for ( int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

int n;
    cout<<"Enter a number to insert"<<endl;
    cin>>n;
    

    for ( int i = size -1; i >= index; i--)
    {
        arr[i+1]=arr[i]; 
    }

   arr[index]=n;
    cout<<"here are updated numbers"<<endl;

    for ( int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }


    
}

-------------------------------------



---------------------------------------

*/