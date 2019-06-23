#include <bits/stdc++.h>
using namespace std;
typedef struct inf{
    int num;
    int x;
}inf;
inf order[500][500];
void Print(int i, int j){
    if(i==j)
        printf("M%d",i);
    else{
        printf("(");
        Print(i,order[i][j].x);
        Print(order[i][j].x+1,j);
        printf(")");
    }
}
int main(){

    int i,j,k,l,n,temp,mini,index;
    vector <int> d;

    for(i=0;i<500;i++)
        for(j=0;j<500;j++)
            order[i][j].num=0;

    cin >> n;
    for(i=0;i<n;i++){
        cin >> j >> k;
        d.push_back(j);
    }
    d.push_back(k);

    for(i=1;i<n;i++)
        for(j=1;j<=n;j++){
            l=i+j;
            if(l<=n){
                mini=1e9;
                index=0;
                for(k=j;k<l;k++){
                    temp=order[j][k].num+order[k+1][l].num+d[j-1]*d[k]*d[l];
                    if(temp<mini){
                        mini=temp;
                        index=k;
                    }
                }
                order[j][l].num=mini;
                order[j][l].x=index;
            }
        }
    Print(1,n);
    printf("\n%d\n",order[1][n].num);
    return 0;
}
