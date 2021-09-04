#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the Number to check Prime : ";
    cin>>num;
    int flag=0;
    for (int i = 2; i < sqrt(num)+1; i++)
    {
        if(num==2)
        {
            break;
        }
        if(num%i==0)
        {
            cout<<num<<" is not prime number ";
            flag=1;
            break;

        }
    }
    if(flag == 0)
    {
            cout<<num<<" is prime number ";
    }
    return 0;
}