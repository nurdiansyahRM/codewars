#include <vector>
#include <iostream>
using namespace std;

int maxSequence(const std::vector<int>& arr){
  int localmax = 0;
  int globalmax = 0;
  
  for(int i = 0; i < arr.size();i++){
    localmax = localmax + arr[i];
    if(localmax > globalmax){
      globalmax = localmax;
    }
    if(localmax < 0){
      localmax = 0;
    }
  }
  return globalmax;
}