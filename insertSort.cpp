#include "insertSort.h"
#include <iostream>
#include <algorithm>

insertSort::insertSort(){std::cout<<"insertSort constructor"<<std::endl;}

insertSort::~insertSort(){std::cout<<"insertSort desctructor"<<std::endl;}

std::vector<int> insertSort::sort(std::vector<int> nums){
    for(int i = 1;i<nums.size();i++){
        for(int j = i;j > 0 && nums[j] < nums[j-1];j--){
            std::swap(nums[j],nums[j-1]);
        }
    }
    return nums;
}



