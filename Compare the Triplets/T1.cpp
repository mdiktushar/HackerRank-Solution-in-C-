#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int a[3],b[3];
    int asum=0,bsum=0;
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<3; i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i])asum++;
        if(a[i]<b[i])bsum++;
    }
    cout<<asum<<" "<<bsum<<endl;

    return 0;
}
