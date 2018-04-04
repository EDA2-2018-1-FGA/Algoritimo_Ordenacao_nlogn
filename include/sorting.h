#ifndef SORTING_H
#define SORTING_H

class Sorting{
  private:
  public:
    static int partition(int array[], int start, int end);
    static void quick_sort(int array[], int start, int end);
    static void merge_sort(int array[], int size);
};

#endif
