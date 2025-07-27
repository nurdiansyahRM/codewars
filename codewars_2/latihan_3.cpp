#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool exclusiveMultiple(int x){
    bool exclusive = (x % 3 == 0) ^ (x % 5 == 0);
    int digitCount = to_string(x).length();
    return exclusive && (digitCount % 2 == 0);
}
int main(){
    int n = 27;
    vector<int> originial;
    for(int i = 0; i < n ;i++ ){
        originial.push_back(i);
    }
    vector<int> filtered;
    copy_if(originial.begin(), originial.end(), back_inserter(filtered), exclusiveMultiple);

    cout << "exclusive multiples of 3 or 5 (not both) and genap : \n";
    int jumlah = 0 ;
    for(int num : filtered){
        jumlah += num;
        cout << num << " ";
    }
    cout << "jumlah : " << jumlah;
    cout << "\n";
    return 0;
}