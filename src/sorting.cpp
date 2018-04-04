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
Sorting::merge_sort(int array[], int size){

}
