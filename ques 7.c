/*Q7. Develop a C program to print a binary pyramid pattern*/
#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows you want to create:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j%2==0?1:0);
        }
        for(int k=i;k<n;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j%2==0?1:0);
        }
        printf("\n");
    }
    return 0;
}
