#include <vector>
#include <iostream>

using namespace std;
bool isPrime(int x){
    if (x < 2) return false;
    for (int i = 2; i * i <= x; ++i){
        if (x % i == 0) return false;
    }
    return true;
}
int CollectCoin(const vector<int>& keys){
    vector<int> coins = {2, 3, 5, 7, 11, 13, 17};
    int result = 0;
    for (int key : keys){
        int idx = (key * key) % coins.size();
        bool isKeyPrime = isPrime(key);
        if(isKeyPrime){
            result += coins[idx]*2;
        }else{
            result += coins[idx];
        }
    }
    return result;

}
