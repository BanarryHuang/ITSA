#include <bits/stdc++.h>
using namespace std;
#define N 101000
int main()
{
    int T, a[N], n, i, j, max_so_far, max_ending_here, start, endi, s;

    cin >> T;

    while(T--){
        max_so_far=-N;
        max_ending_here=0;
        start=0;
        endi=0;
        s=0;

        scanf("%d",&n);

        a[0]=0;

        for(i=0;i<n;i++) {
            cin >> a[i];
            max_ending_here += a[i];

            if(max_so_far < max_ending_here){
                max_so_far=max_ending_here;
                start=s;
                endi=i;
            }

            if(max_ending_here < 0){
                max_ending_here=0;
                s=i+1;
            }
        }
        cout << max_so_far << endl;
        for(j=0;j<n;j++)
            a[j]=0;
    }
    return 0;
}
