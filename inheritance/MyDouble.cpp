#ifndef MYDOUBLE_H
#define MYDOUBLE_H
#include "MyDouble.h"

MyDouble::MyDouble() {
    value = 0*1.0;
}

MyDouble::MyDouble(double a) {
    value = a;
}

double MyDouble::getValue() {
    return value;
}

void MyDouble::setValue(double a) {
    value = a;
}

#endif