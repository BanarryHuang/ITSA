#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,x,y,z;
    cin >> T;
    while(T--){
        cin >> x >> y >> z;
        if((x>=60&&y>=60&&z>=60)||((x+y+z)>=220))
            cout << "P\n";
        else if(((x>=60&&y>=60)||(y>=60&&z>=60)||(x>=60&&z>=60))||(x>=80||y>=80||z>=80))
            cout << "M\n";
        else
            cout << "F\n";
    }
    return 0;
}
