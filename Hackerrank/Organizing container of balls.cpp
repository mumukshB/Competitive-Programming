#include <bits/stdc++.h>

using namespace std;

// Complete the organizingContainers function below.
string organizingContainers(vector<vector<int>> container) {
vector<int> hor,ver;
int sum_h,sum_v;
for(int i=0;i<container.size();i++)
{
    sum_h=0,sum_v=0;
    for(int j=0;j<container[0].size();j++)
    {
        sum_h+=container[i][j];
        sum_v+=container[j][i];
    }
    hor.push_back(sum_h);
    ver.push_back(sum_v);
}
sort(hor.begin(),hor.end());
sort(ver.begin(),ver.end());
string ans="Possible";
for(int i=0;i<container.size();i++)
    if(hor[i]!=ver[i])
        ans="Impossible";
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> container(n);
        for (int i = 0; i < n; i++) {
            container[i].resize(n);

            for (int j = 0; j < n; j++) {
                cin >> container[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string result = organizingContainers(container);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
