#include <vector>
#include <iostream>
using namespace std;

int SearchCoint(const vector<int>& keys){
    vector<int> coins = {2, 3, 5, 7, 11, 13, 17};
    int result = 0;

    for(int key : keys){
        int idx = key % coins.size(); // Hitung dulu index-nya

        if(idx != 0){
            result += coins[idx]; // Ambil dari coins sesuai hasil mod
        } else {
            // Kalau hasil mod-nya 0, pakai langsung index "key" (dengan syarat aman)
            if(key < coins.size()) result += coins[key];
            // Bisa juga kasih else buat handle out-of-bounds
        }
    }

    return result;
}