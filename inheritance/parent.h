#ifndef PARENT_H
#define PARENT_H
#include <string>
using std::string;
class var {
private:
    string type;
    auto val;
public:
    //конструктор без параметров, для работы надо досоздать дочерний класс MyInt
    var();
    //конструктор с параметрами для создания переменной типа инт
    var(int a);
    //конструктор с параметрами для создания переменной типа дабл
    var(double a);
    //конструкторы с параметрами для создания переменной типа string
    var(string a);

    string getType() const;
    auto getVal()const;

    void setType(const string&);
    void setVal(const auto&);
}
#endif