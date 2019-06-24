#include <bits/stdc++.h>

using namespace std;

int pre[61];
void pref() {
//int pre[61];
pre[0]=1;
int pow=1;
for(int i=1;i<61;i+=2)
{
   pre[i]=1<<(pow+1);
   pre[i]-=2;
   pre[i+1]=1<<(pow+1);
   pre[i+1]-=1;
   //cout<<pre[i+1]<<endl;
   pow+=1;
}
/*for(int i=0;i<61;i++)
    cout<<pre[i]<<endl;
}*/
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    pref();

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = pre[n];

        cout<< result << "\n";
    }
   return 0;
}
