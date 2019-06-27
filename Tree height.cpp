#include <bits/stdc++.h>
using namespace std;
int e=0,Per[300],In[300],h[300]={0};

void post(int a, int b, int c){
	if (a>b)
	    return;
	int r = c;
	while (In[r] != Per[a]){
	    r++;
		h[r]++;
	}
	if(e>0)
		h[r]++;
	post(a+1, a+r-c, c);
	post(a+r-c+1, b, r+1);
	e=1;
}

int main()
{
	int i,j,t=0,p=0,o=0,maxi=0;
	char a[1000],b[1000],x[3];
	fgets(a,1000,stdin);
	fgets(b,1000,stdin);
	for(i=0;i<strlen(a);i++){
            if(isdigit(a[i])){
        	x[t++]=a[i];
            }
            else{
        	if(t>0)
                    Per[p++]=atoi(x);
                t=0;
                for(j=0;j<strlen(x);j++)
           	    x[j]=0;
            }
	}
	if(t>0)
            Per[p++]=atoi(x);
    	t=0;
    	for(j=0;j<strlen(x);j++)
        	x[j]=0;
	for(i=0;i<strlen(b);i++){
            if(isdigit(b[i])){
           	x[t++]=b[i];
            }
            else{
                if(t>0)
                    In[o++]=atoi(x);
                t=0;
                for(j=0;j<strlen(x);j++)
                    x[j]=0;
            }
	}
	if(t>0)
        	In[o++]=atoi(x);
    	post(0,p-1,0);
    	for(i=0;i<p;i++){
        	if(h[i]>maxi)
        		maxi=h[i];
   	 }
   	cout << maxi+1 << endl;
	return 0;
}
