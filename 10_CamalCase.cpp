#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    int count=1;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    cout<<"Enter the string to analyze"<<endl;
    string s;
    cin>>s;
    int result = camelcase(s);

    cout<<"The number of words in \'"<<s<<"\' is "<< result <<endl;
    return 0;
}