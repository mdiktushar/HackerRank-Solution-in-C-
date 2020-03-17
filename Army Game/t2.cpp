#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int i,j,r=0,c=0;
    if(m==0||n==0)cout<<"0"<<endl;
    else
    {
        for(i=1; i<=m; i++)
        {
            if(i%2!=0)r++;
        }
        for(j=1; j<=n; j++)
        {
            if(j%2!=0)c++;
        }
        cout<<r*c<<endl;
    }

    return 0;
}
