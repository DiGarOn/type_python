#include <string>

class var {
private:
    string type;
    auto val;
public:
    //конструктор без параметров, для работы надо досоздать дочерний класс MyInt
    var() {
        type = "int";
        val = MyInt b(0); //надо досоздать класс MyInt
    }
    //конструктор с параметрами для создания переменной типа инт
    var(int a) {
        type = "int";
        val = MyInt b(a); //надо досоздать класс MyInt
    }
    //конструктор с параметрами для создания переменной типа дабл
    var(double a) {
        type = "double";
        val = MyDouble(a); //надо досоздать класс MyDouble
    }
    //конструкторы с параметрами для создания переменной типа string
    var(string a) {
        type = ""
    }
}