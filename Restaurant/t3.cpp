#include<iostream>
using namespace std;

int main()
{
    int T,l,b;
    cin>>T;
    for(int j=0; j<T; j++)
    {
        int i=2;
        cin>>l>>b;
        while(l!=1&&b!=1&&i<=b&&i<=l)
        {
            if(l%i==0 && b%i==0)
            {
                b=b/i;
                l=l/i;
            }
            else
                i++;
        }
        cout<<b*l<<endl;
    }

    return 0;
}
