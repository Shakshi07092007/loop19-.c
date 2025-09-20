#include<stdio.h>
int main(){
 int n, i;
 int first=0,second=1,next;
printf("enter number of terms");
sacnf("%d",&n);
printf("fabonacci series up to %d terms\n",n);
for(i=1;i<=n;i++){
if(i==1){
  printf("%d",first);
continue;
}
if(i==2){
    printf("%d",second);
continue;
}next=first+second;
printf("%d",next);
first=second;
second=next;
}
return 0;
}