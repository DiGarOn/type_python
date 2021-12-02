#include <string>

class Var {
private:
    string type;
    auto val;
public:
    //конструктор без параметров, для работы надо досоздать дочерний класс MyInt
    Var() {
        type = "int";
        val = MyInt b(0); //надо досоздать класс MyInt
    }
    //конструктор с параметрами для создания переменной типа инт
    Var(int a) {
        type = "int";
        val = MyInt b(a); //надо досоздать класс MyInt
    }
    //конструктор с параметрами для создания переменной типа дабл
    Var(double a) {
        type = "double";
        val = MyDouble(a); //надо досоздать класс MyDouble
    }
    //окнструкторы с 
}