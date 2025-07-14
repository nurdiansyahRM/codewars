#include <vector>
#include <iostream>
using namespace std;
vector<int> tribonacci(std::vector<int> signature, int n)
{
    vector<int> result;
    if(n == 0){
        return result;
    } 
    for(int i = 0; i < min(n, 3); ++i){
        result.push_back(signature[i]);
    }
    for (int i = 3; i < n; ++i ){
        int next = result[i - 1] + result [i - 2] + result [i - 3];
        result.push_back(next);
    }
    return result;
}