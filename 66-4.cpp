#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,x,i;
    cin >> T;
    while(T--){
        cin >> x;
        if(x==49){
            printf("IL\n");
            continue;
        }
        if(x==499){
            printf("ID\n");
            continue;
        }
        if(x/100<9){
            if(x%10==4)
                cout << 'C';
            else if(x/10>3){
                x-=5;
                cout << 'D';
            }
            if(x>0)
                for(i=0;i<x/10;i++)
                    cout << 'C';
        }
        x%=100;
        if(x%10==9)
            cout << "CL";
        if(x/10<9){
            if(x%10==4)
                cout << 'X';
            else if(x/10>3){
                x-=5;
                cout << 'L';
            }
            if(x>0)
                for(i=0;i<x/10;i++)
                    cout << 'X';
        }
        if(x%10==9)
            cout << "IX";
        if(x%10<9){
            if(x%10==4)
                cout << 'I';
            else if(x%10>3){
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
