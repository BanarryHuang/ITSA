#include <bits/stdc++.h>
using namespace std;
int main(){

    int S,N,w,i;
    float p,all,x,y;

    cin >> S;

    while(S--){
        cin >> N >> p >> w;
        all=0;x=1;
        for(i=0;i<N;i++){
            if(w-1==i)
                y=x;
            all+=x;
            x*=(1.0-p);
        }
        cout << fixed << setprecision(4) << y/all << endl;
    }
}
