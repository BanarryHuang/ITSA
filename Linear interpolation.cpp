#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,x,y,i,gc,bc,t;
    float f;

    cin >> x;

    if(x<0)
        f=0;
    else if(x<800)
        f=(float)x/800*7.3;
    else if(x<1000)
        f=7.3-(float)(x-800)/200*0.8;
    else if(x<2000)
        f=6.5+(float)(x-1000)/1000*0.4;
    else if(x<3000)
        f=6.9+(float)(x-2000)/200*0.3;
    else if(x<3500)
        f=7.2+(float)(x-3000)/500*0.3;
    else if(x<4000)
        f=7.5+(float)(x-3500)/500*0.5;
    else if(x<4500)
        f=8.0+(float)(x-4000)/500*12.0;
    else if(x<5000)
        f=20.0-(float)(x-4500)/500*11.6;
    else if(x<6000)
        f=8.4+(float)(x-5000)/1000*0.8;
    else if(x<6600)
        f=9.2+(float)(x-6000)/600*0.9;
    else if(x<8600)
        f=10.1+(float)(x-6600)/2000*5.4;
    else
        f=15.5;
    cout << fixed << setprecision(4) << f << endl;

    return 0;
}
