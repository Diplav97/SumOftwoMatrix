#include<stdio.h>
int main(){
    int r, c;
    printf("Enter the number of row : ");
    scanf("%d", &r);
    printf("Enter the number of column : ");
    scanf("%d", &c);

    int arr[r][c];
    printf("\nEnter element of first matrix.....\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("\nEnter Element no. A%d%d : ",i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nEnter element of second matrix.....\n");
    int brr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("\nEnter Element no. A%d%d : ",i+1, j+1);
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\nThe sum of two matris is....\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t",arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }
}