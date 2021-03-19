#ifndef sortI_h
#define sortI_h

#include <vector>
#include <iostream>

class sortI{
public:
    sortI(){std::cout<<"sortI constructor"<<std::endl;}
    virtual ~sortI(){std::cout<<"sortI destructor"<<std::endl;}
    virtual  std::vector<int> sort(std::vector<int> nums){std::cout<<"can you sort?"<<std::endl; return {};}
};

#endif