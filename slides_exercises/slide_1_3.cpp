#include <iostream>
#include <memory>

class Shape 
{
    private:

    protected:
        int x;
        int y;

    public:
        Shape(int a, int b) : x(a), y(b) {}

        ~Shape(){}

        bool print_origin() const
        {
            std::cout << "Origin - X: " << x << " Y: " << y << std::endl;
            return true;
        }

        virtual void print_addr() const
        {
            std::cout << "Addr X: " << &x << " Addr Y: " << &y << std::endl;
        }
};

class Rectangle : public Shape
{
    private:
        int h;
        int w;

    public:
        Rectangle(int a, int b, int c, int d) : Shape(a, b), h(c), w(d) {}

        ~Rectangle(){}

        bool print_area()
        {
            std::cout << "Rectangle area: " << h*w << std::endl;
            return true;
        }

        void print_addr() const
        {
            std::cout << "Addr X: " << &x << " Addr Y: " << &y << std::endl;
            std::cout << "Addr H: " << &h << " Addr W: " << &w << std::endl;
        }
};

int main()
{
    std::unique_ptr<Shape> shape(new Shape(6,8));
    std::unique_ptr<Rectangle> rect(new Rectangle(5,4,3,2));

    if(!shape->print_origin())
    {
        std::cout << "Error!" << std::endl;
    }

    if(!rect->print_origin())
    {
        std::cout << "Error!" << std::endl;
    }

    if(!rect->print_area())
    {
        std::cout << "Error!" << std::endl;
    }

    shape->print_addr();
    rect->print_addr();

    return 0;
}