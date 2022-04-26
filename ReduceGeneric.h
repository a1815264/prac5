#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>

class ReduceGeneric
{
public:
    int reduce(std::vector<int>);
    std::vector<int> vecCopy;

private:
    virtual int binaryOperator(int, int) = 0;
};

#endif
