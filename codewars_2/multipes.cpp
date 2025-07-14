#include <iostream>
using namespace std;
int solution(int number){
    if(number < 0){
        return 0;
    }
    int total = 0;
    for(int i = 0; i < number; i++){
        if(i % 3 == 0 || i % 5 == 0){
            total = total + i;
        }
    }
    return total;
}
int main(){
    int tampung;
    tampung = solution(5);
    cout << tampung;
    return tampung;
}