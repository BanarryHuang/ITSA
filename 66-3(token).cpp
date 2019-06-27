#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,copy,count;
    char deli[]=";:,";
    cin >> T;
    while(T--){
        count=0;
        char path[40];
        char file[40][40];
        char *start=path;
        cin >> path;
        start=strtok(start,deli);
        while(start!=NULL){
            strcpy(file[count],start);
            count++;
            start=strtok(NULL,deli);
        }
        printf("Tokens found:\n");
        for(i=0;i<count;i++)
            cout << file[i] << endl;
    }
    return 0;
}
