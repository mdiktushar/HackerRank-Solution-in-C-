#include<iostream>

using namespace std;

int main(){

    int q,isPrime;
    long long int N;
    cin>>q;
    for(int k=0; k<q; k++)
    {
        int t=0,sum =1;
        cin >> N;

        for(int i = 2; i <= N; i++)
        {
            isPrime = 0;
            for(int j = 2; j <= i/2; j++)
            {
                 if(i % j == 0)
                 {
                     isPrime = 1;
                     break;
                 }
            }

            if(isPrime==0 && N!= 1){
                    sum *=i;
                }
            if(sum>N)break;
            t++;
        }
        cout<<t<<endl;
        cout<<endl;
    }

   return 0;
}
