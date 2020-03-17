#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long int t,n;
    long int c=1,sum=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        for(int j=1; j<=n; j++)
        {
            sum += c;
            c+=2;
        }
        cout<<sum<<endl;
        sum = 0;
        c=1;
    }

    return 0;
}
