#include <iostream>
using namespace std;

int main()
{
    //task 1
    int arr[6];
    cout<<"Take 6 number"<<endl;
    for(int i=0; i<6; i++)
    {
        cin>>arr[i];
        
    }
int n;
    cout<<"enter a another number to find if this number exists in previous"<<endl;
    cin>>n;
int count =0;
int found =0 ;
    for(int i=0;i<6;i++)
    {
        if (arr[i]==n)
        {
            cout<<"found"<<endl;
            cout<<"found index "<<i<<endl;
            count++;
            found = 1;
            
        }
    }

    if (found==0)
    {
        cout<<"Not found"<<endl;
    }
    else{cout<<"Appears "<<count <<endl;}
    return 0;
}
