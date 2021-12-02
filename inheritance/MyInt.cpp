#ifndef MYINT_H
#define MYINT_H
#include "MyInt.h"

MyInt::MyInt() {
    value = 0;
}

MyInt::MyInt(int a) {
    value = a;
}

int MyInt::getValue() {
    return value;
}

void MyInt::setValue(int a) {
    value = a;
}

#endif