#include<iostream>
using namespace std;

int main()
{ int sum=0;
   for(int i=1; i<=10;i++)
   {
    int n;
    cout<<"enter 10 inout"<<endl;
    cin>>n;
if(n<0)
{
   continue;
}
else if (n==0)
{
   break;
}
else if (n>0)
{
   sum=sum+n;
}


    
   }
cout<<sum<<endl;

}
