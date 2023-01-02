#include <stdio.h>
void printArray(int A[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}

void insertionSort(int A[], int n) {
  for (int i = 1; i < n; i++) {
    int t = A[i];
    int k = i - 1;

   
    while (k >= 0 && t < A[k]) {
      A[k + 1] = A[k];
      --k;
    }
     A[k + 1] = t;
  }
}


void main() {
  int A[50],n;
  printf("Please enter the size of array  to be created: ");
  scanf("%d",&n);
  printf("Please enter %d elements: \n",n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&A[i]);
  }
  
  insertionSort(A, n);
  printf("Sorted array in ascending order:\n");
  printArray(A, n);
}