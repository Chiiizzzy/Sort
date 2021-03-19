#include "selectSort.h"
#include "insertSort.h"
#include <iostream>
#include <memory>

int main(){
    std::vector<int> a {1,2,5,3,8,9,4,11,6,0};
    std::vector<int> b;
    
    selectSort select;
    b = select.sort(a);
    for(int i:b){
        std::cout<<i<<std::endl;
    }
    insertSort insert;
    b = insert.sort(a);
    for(int i:b){
        std::cout<<i<<std::endl;
    }
    return 0;
}