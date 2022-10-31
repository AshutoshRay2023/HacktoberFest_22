#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return (*(int*)a - *(int*)b);
}

int main(){
  int n = 0,k = 0;
  int a[n];

  printf("Enter number of elements: ");
  	scanf("%d", &n);
  for(int i = 0; i < n; i++){
    printf("Enter element #%d: ", i+1);
    scanf("%d", &a[i]);
  }
  printf("Enter which kth maximum element to find: ");
  scanf("%d", &k);
  qsort(a, n, sizeof(int), cmpfunc);
  printf("Answer: %d\n", a[k-1]);

  return 0;
}
