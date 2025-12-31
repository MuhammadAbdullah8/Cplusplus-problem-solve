#include<iostream>
using namespace std;

int main()
{
    int m;
    
    do{

    

    cout<<"===== MENU ====="<<endl;
    cout<<"Choose your option"<<endl;
    cout<<"1. Print numbers from 1 to N  (using for loop)"<<endl;
    cout<<"2. Print all even numbers up to N  (using while loop)"<<endl;
    cout<<"3. Calculate sum of numbers until user enters 0  (using do-while loop)"<<endl;
    cout<<"4. Exit "<<endl;

    cout<<"Provide the menu number"<<endl;
    cin>>m;

    if(m==1)
    {
        int n;
        cout<<"Print numbers from 1 to N  (using for loop)"<<endl;
        cout<<"Provide the number for N"<<endl;
        cin>>n;

        for(int i=1; i<=n; i++)
        {
            cout<<i<<endl;
        }
    }

    else if(m==2)
    {
        int n;
        cout<<"2. Print all even numbers up to N  (using while loop)"<<endl;
        cout<<"Provide the number for N"<<endl;
        cin>>n;
        int i=1;

        while(i<=n)
        {
            if(i%2==0)
            {
                cout<<i<<endl;
                i++;
            }
            else
            {
                i++;
            }
        }
    }
    else if (m==3)
    {
        int n;
        int sum=0;
        cout<<"3. Calculate sum of numbers until user enters 0  (using do-while loop)"<<endl;
        cout<<"enter number"<<endl;
        do
        {
            cin>>n;
            sum= sum+n;
            cout<<sum<<endl;
            

        }while(n!=0);

        cout<<"you entered 0 for exit"<<endl;
    }
    else if(m==4)
    {
        cout<<"exit"<<endl;
    }
    }while(m!=4);

    cout<<"exit successful"<<endl;

}