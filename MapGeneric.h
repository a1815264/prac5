#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>

class MapGeneric
{
public:
    MapGeneric();
    std::vector<int> map(std::vector<int>);
    std::vector<int> vecCopy;

private:
    virtual int f(int) = 0;
};
#endif