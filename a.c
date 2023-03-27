#include<stdio.h>
int main(){
 int n1,n2,c=0;
 printf("ENTER THE NUMBER");
 scanf("%d %d",&n1,&n2);
 for(int i=n1;i<=n2;i++){
for(int j=1;j<=i;j++){
  if(i%j==0){
     c++;

  }
 
}
if(c==2){
  printf("%d",i);
}
 }

return 0;
}
    


