#ifndef selectSort_h
#define selectSort_h

#include "sortI.h"
#include <iostream>

class selectSort : public sortI{
public:
    selectSort(){std::cout<<"construct selectSort"<<std::endl;};
    ~selectSort(){std::cout<<"desctruct selectSort"<<std::endl;};
    std::vector<int> sort(std::vector<int> nums){
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
    };
};

#endif