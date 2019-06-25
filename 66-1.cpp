#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,maxi,c[1000],temp,numi,co;
    char det[]=" ,";
    char *token;
    char a[210];
    while(fgets(a,210,stdin)!=NULL){
        co=0;
        token=strtok(a,det);
        while(token!=NULL){
            c[co]= atoi(token);
            co++;
            token=strtok(NULL,det);
        }
        maxi=0;
        for(i=co-1;i>0;i--){
        for(j=0;j<i;j++) for(k=j+1;k<=i;k++)
            if(c[j]>c[k]){
                temp = c[k];
                c[k] = c[j];
                c[j] = temp;
            }
        }
        temp=0;
        for(i=0;i<co-1;i++){
            if(c[i+1]==c[i])
                temp++;
            else{
                temp++;
                if(temp>maxi){
                    maxi=temp;
                    numi=c[i];
                }
                temp=0;
            }
        }
        temp++;

        if(temp>maxi){
                maxi=temp;
                numi=c[co-1];
                temp=0;
        }
        if(maxi>(co/2))
            cout << numi << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
