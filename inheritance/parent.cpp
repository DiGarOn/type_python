
#include "parent.h"
using namespace std;
 var::var(string a){
     type = "string";
     val = myString b(a);
 }
 var::var(int a){
     type = "int";
     val = myInt b(a);
 }
 var::var(double a){
     type = "double";
     val = myDouble b(a);
 }
 var::var(){
     type = "int";
     val = myInt b(0);
 }
 string var::getType() const{
     return type;
 }
auto std::getVal() const{
    return val;
}

void setType(const string& type){
    this->type = type;
}
void setVal(const auto& val){
    this->val = val; 
}





