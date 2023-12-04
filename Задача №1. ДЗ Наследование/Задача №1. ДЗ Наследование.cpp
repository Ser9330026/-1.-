#include <iostream>

class Figure
{
protected:
    int a = 0;
public:
    int showFigure() {
        return a;
    }
};

class Triangel : public Figure
{
public:
    Triangel() {
        a = 3;
    }
};

class Rectangle : public Figure
{
public:
    Rectangle()
    {
        a = 4;
    }
};

int main() {
    setlocale(LC_ALL, "rus");
    Figure f;
    Triangel t;
    Rectangle r;
    std::cout << "Количество сторон: " << std::endl;
    std::cout << "Фигура: " << f.showFigure() << std::endl;
    std::cout << "Треугольник: " << t.showFigure() << std::endl;
    std::cout << "Прямоугольник: " << r.showFigure() << std::endl;

    return 0;
}
