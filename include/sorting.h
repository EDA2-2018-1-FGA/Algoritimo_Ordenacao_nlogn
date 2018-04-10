#ifndef SORTING_H
#define SORTING_H

class Sorting{
  private:
    static int partition(int array[], int start, int end);
    static void merge(int array[], int start, int half, int end);
  public:
    static void quick_sort(int array[], int start, int end);
    static void merge_sort(int array[], int start, int end);
};

#endif
