#include "selectSort.h"
#include <iostream>
#include <algorithm>

selectSort::selectSort(){std::cout<<"selectSort constructor"<<std::endl;}

selectSort::~selectSort(){std::cout<<"selectSort desctructor"<<std::endl;}

std::vector<int> selectSort::sort(std::vector<int> nums){
    for(int i = 0;i < nums.size() - 1;i++){
        int min = i;
        for(int j = i + 1;j < nums.size();j++){
            if(nums[j] < nums[min]){
                min = j;
            }
        }
        std::swap(nums[i],nums[min]);
    }
    return nums;
}



