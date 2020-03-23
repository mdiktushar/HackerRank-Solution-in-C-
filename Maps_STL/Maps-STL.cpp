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
    int t;cin>>t;
    map<string , int> m;
    while(t--){
        int n;cin>>n;
        if(n==1){
            int f;
            string s;cin>>s;
            int i; cin>>i;
            auto it = m.find(s);
            if(it == m.end())
                f = 0;
            else f = it->second;
            m.erase(s);

            i += f;
            m.insert(make_pair(s,i));
        }else if(n==2){
            string s; cin>>s;
            m.erase(s);
        }else{
            string s;cin>>s;
            auto it = m.find(s);
            if(it == m.end())
                cout<<0<<endl;
            else cout<<it->second<<endl;
        }
    }

    return 0;
}
