#include <iostream>
#include <vector>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
        vector<int> arr(grades.size());

        for(int i=0;i<grades.size();i++)
        {
            int a=grades[i]+1;
            int b=grades[i]+2;
            if(grades[i]<38)
            {
                arr[i]=grades[i];
            }
            else if((a%5)==0)
            {
                arr[i]=a;
            }
            else if((b%5)==0)
            {
                arr[i]=b;
            }
            else {
                arr[i]=grades[i];
            }
        }
        return arr;
}

int main()
{
    int n,num;
    vector<int> arr;

    cout<<"Enter the number of students : ";
    cin>>n;
    cout<<"Enter "<<n<<" student's grades for rounding "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    vector<int> result = gradingStudents(arr);
    cout<<"The grades after rounding "<<endl;
    for(int i=0 ; i<n ;i++)
    {
        cout<<result[i]<<endl;
    }
       
    return 0;
}