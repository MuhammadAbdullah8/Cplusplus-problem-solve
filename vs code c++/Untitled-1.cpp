 #include <iostream> 
using namespace std;

int main()
{
    int n;
    do{
    cout<<"Enter your choice"<<endl;
    cout<<"===== MENU ====="<<endl;
    cout<<"1. Print numbers from 1 to N"<<endl;
    cout<<"2. Print all even numbers up to N"<<endl;
    cout<<"3. Calculate sum until 0 entered "<<endl;
    cout<<"4. Exit"<<endl;

    cin>>n;

    if(n==1)
    {
     cout<<"Print numbers from 1 to N  (using for loop)"<<endl;
     int n;
 
     cout<<"enter number"<<endl;
     cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cout<<i<<endl;
    }
    }

    else if(n==2)

    {
    cout<<"while loop"<<endl;
    cout<<"2. Print all even numbers up to N  (using while loop)"<<endl;

    cin>>n;

    int i=1;

    while(i<=n)
    {
        if(i%2==0)
        {cout<<i<<endl;
        i++;}
        else{cout<<"end while"<<endl;}
    }
    cout<<"exit from while"<<endl;
    }




else if(n==3)

{

             cout<<"do-while loop"<<endl;
    cout<<"3. Calculate sum of numbers until user enters 0  (using do-while loop)"<<endl;
   int sum=0;
    do
    {


    cin>>n;
        if(n!=0)
        {
        sum= sum+n;
        cout<<"sum of total"<<sum<<endl;
        }

        else{cout<<"exit"<<endl;}

    } while (n!=0);
}

else if(n==4){
    cout<<"exit"<<endl;
}
else{
    cout<<"invalid choice"<<endl;
}




}while(n!=4);
    

}