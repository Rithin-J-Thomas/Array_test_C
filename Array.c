//max value, min, mean, sum of arr, reverse & print & search for elements using function, switch, while or do-while

#include<stdio.h>

int max_value(int arr[]);
int mininum_value(int arr[]);
int mean_value(int arr[]); int 
int arr_sum(int arr[]);
int arr_reverse(int arr[]);
int arr_print(int arr[]);
int arr_search(int arr[]);

void main()
{
    int arr[5], a, b,ops, i, prog_over = 1;
    //int max = 0,min;
    for(i=0;i<=4;i++) { 
        scanf("%d",&arr[i]); 
    }
    do { 
        printf("\n1:max value \n2 min \n3 mean \n4 sum of arr \n5 reverse \n6 print & \n7 search \n8 exit \n");
        scanf("%d",&ops);
    I
        switch(ops) {
        case 1:
            max_value(arr);
            break;
        case 2:
            mininum_value(arr);
            break;
        case 3:
            mean_value(arr);
            break;
        case 4:
            arr_sum(arr);
            break;
        case 5:
            arr_reverse(arr); 
            break;
        case 6:
            arr_print(arr); 
            break;
        case 7:
            arr_search(arr); 
            break;
        case 8:
            prog_over = 0;
            break;
        }
    }
    while(prog_over == 1);
}




int max_value(int arr[]){
    int i , max = 0;
    for(i=0;i<=4;i++) {
        if (arr[i]>max) {
        max = arr[i];
        }
    }
    printf("\nMaximum value = %d", max);
}


int mininum_value(int arr[]){
    int i, min;
    for(i=0;i<=4;i++) {
        if (arr[i]<min) {
        min = arr[i];
        }
    } 
    printf("\nMinimum value = %d",min);
}


int mean_value(int arr[]){
    int i , mean=0;
    for(i=0;i<=4;i++) {
        mean=mean+arr[i];
    }
    mean = mean/5;
    printf("\nMean = %d", mean);
}
I


int arr_sum(int arr[]){
    int i , sum=0;
    for(i = 0;i<=4;i++) {
        sum = sum+arr[i];
    }
    printf("\nSum = %d",sum);
}


int arr_reverse (int arr[]){
    int i;
    for(i = 4;i>=0;i--){
        printf("\nReverse = %d",arr[i]);
    }
}


int arr_print(int arr[]){
    int i;
    for(i=0;i<=4;i++){
        printf("\narr[%d] = %d",i,arr[i]);
    }
}


int arr_search(int arr[]){
    int i, search, found = 0;
    printf("\nEnter num to be found");
    scanf("%d",&search);
    for(i = 0;i<=4;i++) {
        if(search == arr[i]){
            printf("%d was found at index of %d", search, i); 
            found = 1;
        }
    }
    if (found == 0) {
        printf("%d was not Found", search);
    }
}
