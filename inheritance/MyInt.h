#include "parent.h"

class MyInt:var {
private:
    int value;
public:
    MyInt();
    MyInt(int a);
    ~MyInt;
    int getValue();
    void setValue();
}