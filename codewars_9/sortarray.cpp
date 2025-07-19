#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class Kata
{
public: vector<int> sortArray(vector<int> array)
    {
        vector <int> oods;
        // ambil semua angka ganjil
        for (int num : array){
            if(num % 2 != 0){
                oods.push_back(num);
            }
        }
        // urutkan semua angka ganjil
        sort(oods.begin(), oods.end());

        //gabungkan ualng : genap dan ganjil diurutkan
        int oddIndex = 0;
        for(int& num : array){
            if(num % 2 != 0){
                num = oods[oddIndex++];
            }
        }
        return array;
    }
};