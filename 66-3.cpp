#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,copy;
    char deli[]=";:,";
    scanf("%d",&T);
    while(T--){
    char path[40];
    char file[40][40];int count=0;
    char *start=path;
    cin >> path;
    start=strtok(start,deli);
    while(start!=NULL){
        strcpy(file[cont],start);
        count++;
        start=strtok(NULL,deli);
    }
    printf("Tokens found:\n");
    for(i=0;i<count;i++)
        cout << file[i] << endl;
    }
    return 0;
}
