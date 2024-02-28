#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of rows for which you want equilagtgeral triangle \n");
   scanf("%d",&a);
    
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i;j++){
          
        printf(" ");      /* for the space before of star */
     }
     for(int j=0;j<2*i+1;j++){
      
         printf("*"); /* for the space no of star */
     }
      for(int j=0;j<a-i;j++){
          
        printf(" "); /* for the space after of star */
     }
        
        printf("\n"); /* to go to next line */
    }

    printf("So i am adding this line in my pc and will deploy it to the it hub website");

    return 0;
}
