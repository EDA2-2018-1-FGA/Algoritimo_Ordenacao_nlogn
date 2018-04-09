#include "generate.h"
#include <bits/stdc++.h>

std::vector<int> 
Generate::random_with_many_rep(int lenght){
  std::vector<int> generated;
  srand(time(nullptr));

  while(lenght--){
    generated.push_back(rand() % 2);
  }

  return generated;
}

std::vector<int> 
Generate::random_with_no_rep(int lenght){
  std::vector<int> generated;
  srand(time(nullptr));

  while(lenght--){
    int number;
    do{
      number = rand() % 104729;
    } while(std::find(generated.begin(), generated.end(), number) != generated.end());
    generated.push_back(number);
  }

  return generated;
}

std::vector<int> 
Generate::ordened(const int lenght){
  std::vector<int> generated;

  for(int i = 0; i < lenght; i++){
    generated.push_back(i);
  }

  return generated;
}

std::vector<int> 
Generate::inverted_ordened(int lenght){
  std::vector<int> generated;

  generated.push_back(lenght);
  while(lenght--){
    generated.push_back(lenght);
  }

  return generated;
}
