#include <bits/stdc++.h>
#define N 3000

int main()
{
    int M,n,i,j,w,k;

    scanf("%d",&M);
    while(M--){
    	scanf("%d",&n);
  	long int a[N]={0};
    	int diff[N]={0};
    	for(i=0;i<n;i++)
   	scanf("%ld",a+i);
    	w=1;
    	for(i=0;i<n-1;i++)
	    for(k=1;k<n;k++){
            j=i+1;
            if((a[i]>a[j]&&a[i]-a[j]==k)||(a[i]<a[j]&&a[j]-a[i]==k))
		diff[k]++;
            if((a[i]>a[j]&&a[i]-a[j]>=n)||(a[i]<a[j]&&a[j]-a[i]>=n)){
        	w=0;
		break;
            }
            if(diff[k]>1){
        	w=0;
		break;
	    }
	}
	if(w==1)
	    printf("Jolly\n");
	else
	    printf("Not jolly\n");
    }
    return 0;
}
