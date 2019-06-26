#include <bits/stdc++.h>
using namespace std;
int main()
{
    int P,i,x;
    string a;

    while(!cin.eof()){
        getline(cin,a);
        for(i=0;i<a.size();i++){
            if(a[i]>='a'&&a[i]<='z'){
                if(a[i]<'n')
                    a[i]+=13;
                else if(a[i]>='n')
                    a[i]-=13;
            }
            else if(a[i]>='A'&&a[i]<='Z'){
                if(a[i]<'N')
                    a[i]+=13;
                else if(a[i]>='N')
                    a[i]-=13;
            }
        }
        cout << a << endl;
        a.clear();
    }
    return 0;
}
