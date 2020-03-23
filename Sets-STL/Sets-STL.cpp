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
    set<int> s;
    int t;cin>>t;
    while(t--){
        int y,x;
        cin>>y>>x;
        if(y==1)
            s.insert(x);
        else if(y==2)
            s.erase(x);
        else{
            set<int>::iterator it;
            it = s.find(x);
            it==s.end() ? cout<<"No"<<endl : cout<<"Yes"<<endl;
        }
    }

    return 0;
}

