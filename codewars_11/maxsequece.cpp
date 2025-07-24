#include <vector>
#include <iostream>
using namespace std;
int maxSequence(const vector<int>& arr){
 int max_sum = 0;
  int current_sum = 0;
  for(int num : arr){
    current_sum = max(0, current_sum + num);
    max_sum = max(max_sum, current_sum);
  }
  return max_sum;
}