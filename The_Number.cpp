#include <bits/stdc++.h>

int main()
{
    char x1,x2;
    int i,count;

    while(scanf("%c%c ",&x1,&x2)!=EOF){
    	char str[8]={0};
    	count=0;
    	gets(str);
    	for(i=0;i<7;i++){
        	if(str[i]==x1&&str[i+1]==x2)
        		count++;
    	}
    	printf("%d\n",count);
    }

    return 0;
}

