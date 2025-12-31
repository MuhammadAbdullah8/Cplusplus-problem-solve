#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <=50; i++)
    {
        if(i==23)
        {
            break;
        }
        cout<<i<<endl;

    }
cout<<"second"<<endl;
    for(int i=1;i<=20;i++)
    {
if (i%3==0)
{
    continue;
}
cout<<i<<endl;
    }
    
}