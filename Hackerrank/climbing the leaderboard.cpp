#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     vector<int> ans;
     int n,m;
    cin>>n;
     int scores[n];
     
    for(int i=0;i<n;i++)
        cin>>scores[i];
    cin>>m;
    int alice[m];
    for(int i=0;i<m;i++)
        cin>>alice[i];
    int rank=1,low=0;
    for(int i=m-1;i>=0;i--){
        for(int j=low;j<n;j++){
            //cout<<"alice"<<alice[i]<<endl;
            if(scores[j]<=alice[i])
            {
                low=j;
                ans.push_back(rank);
                break;
            }
            if(j==n-1){
                ans.push_back(rank+1);
                low=n-1;}
            else if(scores[j]!=scores[j+1])
                rank+=1;
        }
    }
    for(int i=ans.size()-1;i>=0;i--)
        cout<<ans[i]<<endl;
     
     
}
