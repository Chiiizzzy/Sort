#include "selectSort.h"
#include <iostream>

int main(){
    std::vector<int> a {1,2,5,3,8,9,4,11,6,0};
    selectSort select;
    std::vector<int> b ;
    b = select.sort(a);
    for(int i:b){
        std::cout<<i<<std::endl;
    }
    return 0;
}