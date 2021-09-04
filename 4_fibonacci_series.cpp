#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3, i, number,count=2;
    cout << "Enter the number of elements to display in the Fibonacci Series : ";
    cin >> number;
    cout << n1 << " " << n2 << " ";
    while(count<number)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
        count+=1;
    }
    return 0;
}