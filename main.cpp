#include <iostream>
#include "figura.h"
#include <vector>
#include <cmath>
using namespace std;

distancia_t calculaar_distancia(figura_t f1, figura_t f2){
    auto dx = f1.get_x() - f2.get_x();
    auto dy = f1.get_x() - f2.get_x();
    return  sqrt(dx * dx + dy * dy);
}

area_t calcular_diferencia_area(figura_t* f1 ,figura_t* f2){
    return f1->calcular_area() - f2->calcular_area();
}

int main() {

    rectangulo_t r1 {10,20,40,80};
    circulo_t c1{ 50,100,80};
    vector<figura_t*> vf = { &r1,&c1};
    for (auto f : vf)
        cout<<"El area es: "<<f-> calcular_area()<<endl;

    auto d = calculaar_distancia(r1 , c1);
    cout <<"La distancia entre r1 y c1 es: "<< d <<endl;

    auto a = calcular_diferencia_area( &r1 , &c1);
    cout <<"La diferencia de area entre r1 y c1 es: "<< a <<endl;

    return 0;
}