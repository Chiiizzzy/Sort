#ifndef quickSort_h
#define quickSort_h

#include "sortI.h"

class quickSort : public sortI{
public:
    quickSort();
    virtual ~quickSort();
    virtual std::vector<int> sort(std::vector<int> nums);
    virtual void sort(std::vector<int>& nums,int l,int r);
};
#endif