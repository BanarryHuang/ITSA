#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,x,f;
    while(!cin.eof()){
        cin >> x;
        f=1;
        for(i=2;i*i<=x;i++)
            if(x%i==0){
                f=0;
                break;
            }
        if(x==1)
            f=0;
        if(f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
