#include <vector>
#include <iostream>
using namespace std;
vector<int> move_zeroes(const vector<int>& input) {
  vector<int> result(input.size());
  size_t idx = 0;
  for(int digit : input){
      if(digit != 0){
        result[idx++] = digit;
      }
  }
  while(idx < input.size()){
    result[idx++] = 0;
  }
  return result;
}