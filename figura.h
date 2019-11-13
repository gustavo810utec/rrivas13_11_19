//
// Created by utec on 13/11/19.
//

#ifndef RRIVAS13_11_19_FIGURA_H
#define RRIVAS13_11_19_FIGURA_H
typedef int longitud_t;
typedef int distancia_t;
typedef double area_t;
class figura_t {
protected:
    longitud_t w = 0;
    longitud_t h = 0;
    distancia_t x = 0;
    distancia_t y = 0;
public:
    figura_t(distancia_t x, distancia_t y
    ,longitud_t w ,longitud_t h);
    virtual area_t calcular_area();
    distancia_t get_x();
    distancia_t get_y();
};

class rectangulo_t: public figura_t {
public:
    rectangulo_t(distancia_t x, distancia_t y, longitud_t w, longitud_t h);
    area_t calcular_area() override ;
};

class circulo_t : public figura_t {
public:
    circulo_t(distancia_t x, distancia_t y, longitud_t radio);
    area_t calcular_area() override ;
};
#endif //RRIVAS13_11_19_FIGURA_H
