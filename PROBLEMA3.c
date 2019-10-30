
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int compare(const void* a, const void* b){
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}
int contains(int *v, int value, int size){
    int i;
    for(i = 0; i < size; i++){
        if(value == v[i]){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int *v = (int*)malloc(n*sizeof(int));
    int **sum = (int**)malloc(n*sizeof(int*));
    for(i = 0; i< n; i++){
        scanf("%d", &v[i]);
        // printf("%d\n", v[i]);
        sum[i] = (int*)malloc(n*sizeof(int));
    }
    int fibonaccias = 0, count, first, second;
    qsort(v, n, 4, compare);
   for(i = 0; i < n - 1; i ++){
       for(j = i + 1; j < n; j++){
           sum[i][j] = v[i] + v[j];
           printf("%d ", sum[i][j]);
       }
       printf("\n");
   }
   int comparing;
   for(i = 0; i < n-1; i++){
       count = 0;
       for(j = i == 0? 1:0; j < n; j++){
           comparing = sum[i][j];
        //   while(comparing > v[j] && j < n){
        //         j++;
        //   }
           printf("%d sum[%d][%d]", comparing, i, j);
           if(contains(v, comparing, n) != -1){
               count++;
           }
       }
       if(count > fibonaccias){
           fibonaccias = count;
       }
       printf("%d count\n", count);
   }
   printf("%d", fibonaccias+2);

    return 0;
}
