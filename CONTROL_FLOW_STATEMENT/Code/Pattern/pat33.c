//TO PRINT PATTERN
#include<stdio.h>
 int main(){
    int n,i,j,s,num=1;
    printf("Enter row and column \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for(s=1;s<=n-i;s++)
        printf(" ");
        for (j=1;j<=i;j++){
            printf("%c",96+j);
            num++;
        }
        printf("\n");
    }
    return 0;
 }