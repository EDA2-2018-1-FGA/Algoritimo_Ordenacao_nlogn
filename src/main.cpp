#include <bits/stdc++.h>
#include <iostream>
#include "sorting.h"

#define LENGTH 100
#define START 0
#define END LENGTH-1

int* generate_array(int size){
	int* array = new int[size];
	for(int i=0; i<size; i++){
		array[i] = rand()% (2*size);
	}
	return array;
}

void print_array(int array[], int size){
	std::cout << "i | array[i]" << std::endl;
	for(int i=0; i<size; i++){
		std::cout << i << " | " << array[i] << std::endl;
	}
}

int main(){
	/*
	int* array = generate_array(LENGTH);
	print_array(array, LENGTH);
	Sorting::quick_sort(array, START, END);
	print_array(array, LENGTH);
	*/
	/*
	int* array = generate_array(LENGTH);
	print_array(array, LENGTH);
	Sorting::merge_sort(array, START, END);
	print_array(array, LENGTH);
	*/
	return 0;
}
