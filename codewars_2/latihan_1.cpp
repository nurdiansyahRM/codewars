#include <iostream>
using namespace std;

int exclusiveMultiples(int number){
    int sum = 0;
    for(int i = 0; i < number; i++){
        if((i % 3 == 0 || i % 5 == 0) && !((i % 3 == 0 && i % 5 == 0))){
            sum = sum + i;
        }
    }
    return sum;
}
int main(){
    int tampung;
    tampung = exclusiveMultiples(15);
    cout << tampung;
    return tampung;
}