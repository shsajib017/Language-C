#include<stdio.h>

int main(){

    int num[10],n,i;

    printf("How many numbers: ");

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%d", &num[i]);

    }

    int max = num[0];

    for(i = 1; i < n; i++){
        if(max<num[i])
        max = num[i];
    }
    printf("Maximum: %d", max);

      int min = num[0];

    for(i = 1; i < n; i++){
        if(min>num[i])
        min = num[i];
    }
    printf("\nMinimum: %d", min);

    return 0;

}