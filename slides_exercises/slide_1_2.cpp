#include <iostream>
#include <memory>

class Shape 
{
    public:
        int x;
        int y;    
};

int main()
{
    Shape shape1;
    Shape * shape2 = new Shape();
    std::unique_ptr<Shape> shape3(new Shape());
    Shape shape4;

    shape1.x = 1;
    shape1.y = 2;

    shape2->x = 1;
    shape2->y = 2;

    shape3->x = 1;
    shape3->y = 2;

    shape4.x = 1;
    shape4.y = 2;

    std::cout << "Add obj1: " << &(shape1) << std::endl;
    std::cout << "Add obj2: " << &(shape2) << std::endl;
    std::cout << "Add obj3: " << &(shape3) << std::endl;
    std::cout << "Add obj4: " << &(shape4) << std::endl << std::endl;

    std::cout << "Add obj1 X: " << &(shape1.x) << " Size obj1 X: " << sizeof(shape1.x) << std::endl;
    std::cout << "Add obj1 Y: " << &(shape1.y) << " Size obj1 Y: " << sizeof(shape1.y) << std::endl << std::endl;
    std::cout << "Add obj2 X: " << &(shape2->x) << " Size obj2 X: " << sizeof(shape2->x) << std::endl;
    std::cout << "Add obj2 Y: " << &(shape2->y) << " Size obj2 Y: " << sizeof(shape2->y) << std::endl << std::endl;
    std::cout << "Add obj3 X: " << &(shape3->x) << " Size obj3 X: " << sizeof(shape3->x) << std::endl;
    std::cout << "Add obj3 Y: " << &(shape3->y) << " Size obj3 Y: " << sizeof(shape3->y) << std::endl << std::endl;
    std::cout << "Add obj4 X: " << &(shape4.x) << " Size obj4 X: " << sizeof(shape4.x) << std::endl;
    std::cout << "Add obj4 Y: " << &(shape4.y) << " Size obj4 Y: " << sizeof(shape4.y) << std::endl << std::endl;

    delete shape2;

    return 0;
}