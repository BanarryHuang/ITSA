#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,i,j;
    vector <int> s[51];
    cin >> p;
    if(p<0||p>50)
        cout << "I can only print Pascal's triangle between 0 and 50.";
    else{
        for(i=0;i<51;i++){
            s[i].push_back(1);
            if(i>1){
                for(j=0;j<s[i-1].size()-1;j++)
                    s[i].push_back(s[i-1][j]+s[i-1][j+1]);
            }
            if(i>0)
                s[i].push_back(1);
        }
        for(i=p;i>-1;i--){
            cout << s[i][0];
            for(j=1;j<s[i].size();j++)
                cout << ' ' << s[i][j];
            cout << endl;
        }

    }
    return 0;
}
