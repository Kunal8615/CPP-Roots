#include <stdio.h>


int loop(int s){
    for ( int i = s; i <0; i--)
    {   
    
        return loop(s-1);
    }
    
}
 
int main(){
   int n,i,j;
   scanf("%d",&n);
   for ( i = 0; i <=n; i++)
   {
    for ( j = 0; j <= n; j++)
    {
        if(i==0 || j==0 || i==n ||j==n){
            printf("%d",n);
        }
        
        else{
           
           printf("+");
        }
    }
     printf("\n");
    
    
   }
   
}