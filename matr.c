#include<stdio.h>
int main()
{
    int arr[100][100],a,b;
    printf("enter the raws and columns of the matrix:");
    scanf("%d %d",&a,&b);
    printf("enter the elements:");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("element at[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d",arr[i][j]);
            
        }
        printf("\n");
    
    }
   
    
    printf("matrix is :\n");
    for(int i=a-1;i>=0;i--){
        for(int j=0;j<b;j++){

            printf("%d",arr[a-j-1][b-i-1]);
        }
        printf("\n");
    }
    return 0;
}