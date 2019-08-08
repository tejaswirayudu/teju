#include <stdio.h>


int main()

{
    
int x,p,s=0,i;
   
 scanf("%d %d",&x,&p);
    
p=100-p;
    
while(x)
    {
       
 s=s+x;
       
 x=(x*p)/100;
    
}
  
  printf("%d",s); 
    
return 0;
}