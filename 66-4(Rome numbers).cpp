#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,x,i;
    cin >> T;
    while(T--){
        cin >> x;
        if(x/100==9)
            cout << "CM";
        if(x/100<9){
            if(x/100==4)
                cout << 'C';
            if(x/100>3){
                if(x/100==4)
                	x-=400;
                else
                	x-=500;
                cout << 'D';
            }
            if(x/100>0)
                for(i=0;i<x/100;i++)
                    cout << 'C';
        }
        x%=100;
        if(x/10==9)
            cout << "XC";
        if(x/10<9){
            if(x/10==4)
                cout << 'X';
            if(x/10>3){
                if(x/10==4)
                	x-=40;
                else
                	x-=50;
                cout << 'L';
            }
            if(x/10>0)
                for(i=0;i<x/10;i++)
                    cout << 'X';
        }
        if(x%10==9)
            cout << "IX";
        if(x%10<9){
            if(x%10==4)
                cout << 'I';
            if(x%10>3){
                x-=5;
                cout << 'V';
            }
            if(x>0)
                for(i=0;i<x%10;i++)
                    cout << 'I';
        }
        cout << endl;
    }

    return 0;
}
