#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>


#define ll long long
#define l long

using namespace std;

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

int findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

//md.imrul kayes
int main()
{
    int n; cin>>n;
    vector<long> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int num; cin>>num;
    while(num--){
        long N;cin>>N;
        auto it = lower_bound(v.begin(), v.end(), N);
        int loc = distance(v.begin(), it)+1;
        *it==N ? cout<<"Yes "<<loc<<endl :cout<<"No "<<loc<<endl;
    }
    return 0;
}
