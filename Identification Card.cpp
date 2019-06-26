#include <bits/stdc++.h>
using namespace std;
int main()
{
    int P,i,x;
    string a;
    vector <int> n;
    while(!cin.eof()){
        getline(cin,a);
        if(a[0]=='W')
            x=22;
        else if(a[0]=='Z')
            x=23;
        else if(a[0]=='I')
            x=24;
        else if(a[0]=='O')
            x=25;
        else{
            x=a[0]-'A';
            if(a[0]>'I')
                x--;
            if(a[0]>'O')
                x--;
            if(a[0]>'W')
                x--;
        }
        n.push_back(1+x/10);
        n.push_back(x%10);
        for(i=1;i<11;i++)
            n.push_back(a[i]-'0');
        P=n[0];
        for(i=1;i<10;i++)
            P+=(10-i)*n[i];
        P+=n[10];
        if(P%10==0)
            cout << "CORRECT!!!" << endl;
        else
            cout << "WRONG!!!" << endl;
        a.clear();
        n.clear();
    }
    return 0;
}
