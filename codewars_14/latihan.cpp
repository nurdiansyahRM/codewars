#include <vector>
#include <iostream>

using namespace std;

vector<int> Move_negatif(const vector<int>& input){
    vector<int> result(input.size());
    size_t idx = 0;
    for(int digit : input){
        if(digit < 0){
            result[idx++] = digit; //ambil digit yang negatif
        }
    }
    for(int digit : input){
        if(digit >= 0){
            result[idx++] = digit; //ambil sisa dari nilai positif
        }
    }
    return result;

}