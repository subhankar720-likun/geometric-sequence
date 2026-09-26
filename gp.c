#include <stdio.h>
int main(){
    int n,i,a=100;
    printf("Enter the terms = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}