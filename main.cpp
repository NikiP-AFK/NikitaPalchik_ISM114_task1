#include <iostream>
#include "point.h"



int main() {

    point point_test = point(1, 4);
    const point move_x = point_test.move_x(7);
    std::cout << "поменяли первую координату на 7 " <<  point << "\n";

    const point move_y = point_test.move_x(5);
    std::cout << "поменяли первую координату на 5 " <<  point << "\n";

    const point dist_x = point_test.dist_x();
    std::cout << "посчитали расстояние от начала " <<  dist_x << "\n";

    point point_help = point(2, 5);
    const point dist_btw = point_test.dist_btw(point_help);
    std::cout << "расстояние между двумя точками " <<  dist_btw << "\n";

    const point comprasion_xy = point_test.comprasion_xy();
    std::cout << "сравнивание координат xy  " <<  comprasion_xy << "\n";
   
    std::cout << std::endl;
    return 0;
}



