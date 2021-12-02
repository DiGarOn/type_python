#include "parent.h"

class MyDouble:var {
private:
    double value;
public:
    MyDouble();
    MyDouble(int a);
    ~MyDouble;
    int getValue();
    void setValue();
}