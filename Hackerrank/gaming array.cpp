#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int val[n],max=0,moves=0;
        for(int i=0;i<n;i++)cin>>val[i];
        for(int i=0;i<n;i++){
            if(val[i]>max){
                max=val[i];
                moves++;
            }
        }
        if(moves%2==0)
            cout<<"ANDY"<<endl;
        else cout<<"BOB"<<endl;
    t-=1;}
}
