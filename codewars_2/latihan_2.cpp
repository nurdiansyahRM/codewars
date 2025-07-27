#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool exclusiveMultiple(int x){
    return (x % 3 == 0) ^ (x % 5 == 0);
}
int main(){
    int n = 50;
    vector<int> original ;
    for(int i = 0; i < n ; i++){
        original.push_back(i);
    }
    vector<int> filtered;
    copy_if(original.begin(), original.end(), back_inserter(filtered), exclusiveMultiple);
     // Cetak hasilnya
    cout << "Exclusive multiples of 3 or 5 (not both):\n";
    for (int num : filtered) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;

}