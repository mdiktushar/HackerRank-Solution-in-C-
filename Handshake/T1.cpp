#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int sum=0;
        cin>>n;
        for(int j=n-1; j>=1; j--)
        {
            sum += j;
        }
        cout<<sum<<endl;
    }

    return 0;
}
