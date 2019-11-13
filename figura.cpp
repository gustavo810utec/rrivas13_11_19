//
// Created by utec on 13/11/19.
//

#include "figura.h"

area_t figura_t::calcular_area() {
    return 0;
}

distancia_t figura_t::get_x() {
    return x;
}

distancia_t figura_t::get_y() {
    return y;
}

figura_t::figura_t(
        distancia_t x, distancia_t y,
        longitud_t w, longitud_t h)
:x{x},y{y},w{w},h{h} {

}

rectangulo_t::rectangulo_t(
        distancia_t x, distancia_t y,
        longitud_t w, longitud_t h) :
figura_t(x, y, w, h) {

}

area_t rectangulo_t::calcular_area() {
    return w*h;
}

circulo_t::circulo_t(
        distancia_t x, distancia_t y,
        longitud_t radio) :
        figura_t(x, y, radio*2, radio*2) {

}

area_t circulo_t::calcular_area() {
    return 3.1416 * w * w / 4;
}
