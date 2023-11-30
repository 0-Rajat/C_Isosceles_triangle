#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of rows for which you want equilagtgeral triangle \n");
   scanf("%d",&a);
    
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i;j++){
          
        printf(" ");
     }
     for(int j=0;j<2*i+1;j++){
        printf("*");
     }
      for(int j=0;j<a-i;j++){
          
        printf(" ");
     }
         printf("\n");
    }

    

    return 0;
}