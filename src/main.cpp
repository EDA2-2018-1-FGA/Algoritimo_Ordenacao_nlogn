#include <bits/stdc++.h>
#include "sorting.h"
#include "generate.h"

using namespace std;

#define LENGTH 100
#define MAX 10000

void results(vector<int> quick, vector<int> merge){

  auto start = std::chrono::high_resolution_clock::now();
  Sorting::quick_sort(&quick[0], 0, quick.size() - 1);
  auto end = std::chrono::high_resolution_clock::now();
  cout << chrono::duration_cast<std::chrono::nanoseconds>(end - start).count(); 
  cout << "|";

  start = std::chrono::high_resolution_clock::now();
  Sorting::merge_sort(&merge[0], 0, quick.size() - 1);
  end = std::chrono::high_resolution_clock::now();
  cout << chrono::duration_cast<std::chrono::nanoseconds>(end - start).count(); 
  cout << "|";
}

int main(){

  cout << "|N |quicksort many repetitions vector(ns)|merge many repetitions vector(ns)|";
  cout << "quicksort no repetitions vector(ns)|merge no repetitions vector(ns)|";
  cout << "quicksort ordened vector(ns)|merge ordened vector(ns)|";
  cout << "quicksort reverse order vector(ns)|merge reverse order vector(ns)|" << endl;
  cout << "|--|----------|-------------|";
  cout << "----------|-------------|";
  cout << "----------|-------------|";
  cout << "----------|-------------|" << endl;

  for(int i = 1; i * LENGTH < MAX; i += 10){
    vector<int> merge, quick;
    int total = LENGTH * i;

    cout << "|" << total << "|"; 
    merge = quick = Generate::random_with_many_rep(total);
    results(quick, merge);

    merge = quick = Generate::random_with_no_rep(total);
    results(quick, merge);

    merge = quick = Generate::ordened(total);
    results(quick, merge);

    merge = quick = Generate::inverted_ordened(total);
    results(quick, merge);

    cout << endl;
  }

  return 0;
}
