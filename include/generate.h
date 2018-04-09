#ifndef GENERATE_H
#define GENERATE_H

#include <bits/stdc++.h>

class Generate{
  public:
    static std::vector<int> random_with_many_rep(int lenght);
    static std::vector<int> random_with_no_rep(int lenght);
    static std::vector<int> ordened(const int lenght);
    static std::vector<int> inverted_ordened(int lenght);
};

#endif
