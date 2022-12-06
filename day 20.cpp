#include<iostream>
using namespace std;
int main()
{
    int flag=0,i,n;
    cout<<"enter any no. = ";
    cin>>n;
    if(n==0 || n==1)
    {
        flag=1;
    }
    for(i=2;i<=n/21;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<n<<" is prime";
    }
    else
    {
        cout<<n<<" is not prime";
    }

    return 0;
}
