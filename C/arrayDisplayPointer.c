#include<stdio.h>
void main(){
    int n,a[50];
    printf("Enter range of the array:");
    scanf("%d",&n);
    printf("Enter array Elements:\n");
    for(int i=0;i<n;i++){
        printf("[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Array Elements:\n");
    for(int i=0;i<n;i++)
        printf("%d ",*(a+i));
    printf("\n");
}