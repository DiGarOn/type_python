#include <string>

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

    getType()const;
    getVal()const;

    setType();
    setVal();
}