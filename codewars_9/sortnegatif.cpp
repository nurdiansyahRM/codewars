#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class SortNegatif {
    public: vector<int> sortnegatif(vector<int> array){
        vector <int> negatives;
        //ambil semua angka negatif

        for(int num : array){
            if(num < 0){
                negatives.push_back(num);
            }
        }
        //urutkan semua angka
        sort(negatives.begin(), negatives.end());

        //gabungkan semua angka
        int oddIndex = 0;
        for (int& num : array)
        {
            if(num < 0){
                num = negatives[oddIndex++];
            }
        }
        return array;
        
    }
};