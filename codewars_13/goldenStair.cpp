#include <iostream>

using namespace std;
int goldenStair(int gold){
    if(gold <= 0){
        return 0;
    }
    int maxStair = 0;
    int levelStair = 0;
    while(true){
        ++levelStair;
        maxStair += levelStair;
        if(maxStair > gold){
            return levelStair -1;
        }
    } 
}