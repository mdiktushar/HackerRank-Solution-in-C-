#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> v;
    while(n--){
        int i;cin>>i;
        v.push_back(i);
    }
    int a;cin>>a;
    v.erase(v.begin()+--a);
    cin>>a>>n;
    v.erase(v.begin()+--a, v.begin()+--n);

    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x<<' ';
    }cout<<endl;

    return 0;
}
