#include <linux/kernel.h>
#include <linux/module.h>
#define LONG 4294967295 

asmlinkage long sys_add(const char *a,const char *b) {
   int a_len=0,b_len=0;
   char *a_tmp=a,*b_tmp=b;
   while(*a_tmp!='\0'){
       a_len++;
       a_tmp++;
   }
   while(*b_tmp!=-'\0'){
       b_len++;
       b_tmp++;
   }
   int i;
   int a_neg=0,b_neg=0;
   int a_int=0,b_int=0;
   int a_fp=-1,b_fp=-1;
   for(i=0;i<a_len;i++){
       int symbol=a[i]-'0';
       if(symbol>=0 && symbol<=9) a_int=a_int*10+symbol;
       else if(a[i]=='-') a_neg=1;
       else if(a[i]=='.') a_fp=i;
   }
   for(i=0;i<b_len;i++){
       int symbol=b[i]-'0';
       if(symbol>=0 && symbol<=9) b_int=b_int*10+symbol;
       else if(b[i]=='-') b_neg=1;
       else if(b[i]=='.') b_fp=i;
   }
   double a_correct=0,b_correct=0;
   double a_div=1,b_div=1;
   if(a_fp!=-1){
       for(i=0;i<a_len-a_fp-1;i++) a_div*=10;
       a_correct=a_int/a_div;
   }
   else a_correct=a_int;
   if(a_neg==1) a_correct=-a_correct;
   if(b_fp!=-1){
       for(i=0;i<b_len-b_fp-1;i++) b_div*=10;
       b_correct=b_int/b_div;
   }
   else b_correct=b_int;
   if(b_neg==1) b_correct=-b_correct;

    double c=0;
    if(a_neg==0 && a_correct>LONG) return -1;
   if(b_neg==0 && b_correct>LONG) return -1;
    if(a_neg==0 && b_neg==0){
        double remain=LONG-a_correct;
        if(b_correct>LONG) return -1;
    }
    if(a_neg==1 && b_neg==1) return -1;
    c=a_correct+b_correct;
    if(c<0) return -1;
    long c_trunc=(long)c;
    if(c_trunc!=c) return -1;
    return 0;
}
