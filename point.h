#pragma once
#include <string>
#include <iostream>
/**
 * @brief Класс позволяющий работать с векторами
 */

class point {

private:

    /**
     * @brief координата вектора по x
     */
    double x;

    /**
     * @brief координата вектора по y
     */
    double y;

public:

    /**
     * @brief Параметризированный конструктор
     * @param x Координата вектора по x
     * @param y Координата вектора по y
     */
    explicit point(const double x, const double y);
    
    /**
     * @brief Конструктор копирования
     */

    /* конструтор перемещения */

    point(const point& other) = default;

    /**
     * @brief конструтор перемещения 
     * 
     * @param other 
     */
    point(point&& other) = default;

    /**
     * @brief Деструктор
     */
    ~point() = default;

    /**
     * @brief Возвращает координату x
     * @return координата x
     */

    double get_x() const;

    /**
     * @brief Возвращает координату y
     * @return координата y
     */

    double get_y() const;

    /** 
     * @brief перемещение по оси x
     * @return новая координата x 
     */
    double move_x(const double x) const;

    
    /** 
     * @brief перемещение по оси y
     * @return новая координата y 
     */
    double move_y(const double y) const;

    /**
     * @brief определение расстаяние точки x от начала
     * @return расстояние 
     */
    double dist_x(const double x, const double y) const;

   /**
     * @brief определение расстаяние между точками x и y
     * @return расстояние 
     */
    double dist_btw(const double x, const double y) const;

    /**
     * @brief преооброзование декартых точек в полярные координаты 
     * @return полярная координата   
     */
    double polar_xy(const double x , const double y) const;

    /**
     * @brief сравнение на совпадение и несовпадение значений x и y 
     * @return true or false
     */
    bool comprasion_xy(const double x, const double y) const;

    std::string to_string() const;

    friend std::ostream& operator << (std::ostream& out, const point& vector);

};




    
    
