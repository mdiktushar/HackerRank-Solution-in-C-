#include<iostream>
using namespace std;

int main()
{
    int c,t;
    long long int sum=1;
    cin>>c;
    for(int i=0; i<c; i++)
    {
        cin>>t;
        int r[t-1];
        for(int j=0; j<t-1; j++)
        {
            cin>>r[j];
            sum *= r[j];
        }
        cout<<sum<<endl;
        sum = 1;
    }

    return 0;
}
