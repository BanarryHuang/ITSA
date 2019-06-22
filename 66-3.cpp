#include <bits/stdc++.h>

int main()
{
    int T,i,copy;
    char deli[]=";:,";
    scanf("%d",&T);
    while(T--){
    char path[40];
    char file[40][40];int cont=0;
    char *start=path;
    scanf("%s",path);
    start=strtok(start,deli);
    while(start!=NULL){
        strcpy(file[cont],start);
        cont++;
        start=strtok(NULL,deli);
    }
    printf("Tokens found:\n");
    for(i=0;i<cont;i++)
        printf("%s\n",file[i]);
    }
    return 0;
}
