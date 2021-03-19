#ifndef selectSort_h
#define selectSort_h

#include "sortI.h"
#include <iostream>
class selectSort : public sortI{
public:
    selectSort();
    virtual ~selectSort();
    virtual std::vector<int> sort(std::vector<int> nums);
};

#endif