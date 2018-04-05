#include <math.h>
#include "sorting.h"

int
Sorting::partition(int array[], int start, int end){
  int left, right, pivot, aux;
  left = start;
  right = end;
  pivot = array[start];
  while(left < right){
    while(array[left] <= pivot)
      left++;
    while(array[right] > pivot)
      right--;
    if(left < right){
      aux = array[left];
      array[left] = array[right];
      array[right] = aux;
    }
  }
  array[start] = array[right];
  array[right] = pivot;
  return right;
}

void
Sorting::quick_sort(int array[], int start, int end){
  int pivot;
  if(end > start){
    pivot = partition(array, start, end);
    quick_sort(array, start, pivot-1);
    quick_sort(array, pivot+1, end);
  }
}

void
Sorting::merge(int array[], int start, int half, int end){
  int *temp, array1, array2, size, j, k;
  int end1 = 0;
  int end2 = 0;
  size = end-start+1;
  array1 = start;
  array2 = half+1;
  temp = new int[size];
  if(temp!=nullptr){
    for(int i=0; i<size; i++){
      if(!end1 && !end2){
        if(array[array1] < array[array2])
          temp[i] = array[array1++];
        else
          temp[i] = array[array2++];
        if(array1 > half) end1 = 1;
        if(array2 > end) end2 = 1;
      }else{
        if(!end1)
          temp[i] = array[array1++];
        else
          temp[i] = array[array2++];
      }
    }
    for(j=0, k=start; j<size; j++, k++)
      array[k] = temp[j];
  }
  delete[] temp;
}

void
Sorting::merge_sort(int array[], int start, int end){
  int half;
  if(start < end){
    half = floor((start+end)/2);
    merge_sort(array, start, half);
    merge_sort(array, half+1, end);
    merge(array, start, half, end);
  }
}
