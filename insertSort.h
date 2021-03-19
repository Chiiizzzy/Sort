#ifndef insertSort_h
#define insertSort_h

#include "sortI.h"
#include <iostream>
class insertSort : public sortI{
public:
    insertSort();
    virtual ~insertSort();
    virtual std::vector<int> sort(std::vector<int> nums);
};

#endif