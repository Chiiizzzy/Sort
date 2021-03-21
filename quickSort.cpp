#include "quickSort.h"
#include <iostream>

quickSort::quickSort(){std::cout<<"quickSort constructor"<<std::endl;}

quickSort::~quickSort(){std::cout<<"quickSort destructor"<<std::endl;}

std::vector<int> quickSort::sort(std::vector<int> nums) {
    sort(nums,0,nums.size()-1);
    return nums;
}

void quickSort::sort(std::vector<int>& nums,int l,int r){
    if(l>r) return ;
    int head = l;
    int tail = r;
    while(l!=r){
        while(l<r && nums[r]>=nums[head]) r--;
        while(l<r && nums[l]<=nums[head]) l++;
        if(l<r)
            std::swap(nums[l],nums[r]);
    }
    std::swap(nums[l],nums[head]);
    sort(nums,head,l-1);
    sort(nums,l+1,tail);
}