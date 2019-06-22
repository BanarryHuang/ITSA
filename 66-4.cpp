#include <bits/stdc++.h>

int main()
{
    int T,x;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&x);
        if(x==49){
            printf("IL\n");
            continue;
        }
        if(x==499){
            printf("ID\n");
            continue;
        }
        if(x/100!=0){
            if(x/100==1)printf("C");
            if(x/100==2)printf("CC");
            if(x/100==3)printf("CCC");
            if(x/100==4)printf("CD");
            if(x/100==5)printf("D");
            if(x/100==6)printf("DC");
            if(x/100==7)printf("DCC");
            if(x/100==8)printf("DCCC");
            if(x/100==9)printf("CM");
        }
        x%=100;
        if(x/10!=0){
            if(x/10==1)printf("X");
            if(x/10==2)printf("XX");
            if(x/10==3)printf("XXX");
            if(x/10==4)printf("XL");
            if(x/10==5)printf("L");
            if(x/10==6)printf("LX");
            if(x/10==7)printf("LXX");
            if(x/10==8)printf("LXXX");
            if(x/10==9)printf("XC");
        }
        if(x%10!=0){
            if(x%10==1)printf("I");
            if(x%10==2)printf("II");
            if(x%10==3)printf("III");
            if(x%10==4)printf("IV");
            if(x%10==5)printf("V");
            if(x%10==6)printf("VI");
            if(x%10==7)printf("VII");
            if(x%10==8)printf("VIII");
            if(x%10==9)printf("IX");
        }
        printf("\n");
    }

    return 0;
}