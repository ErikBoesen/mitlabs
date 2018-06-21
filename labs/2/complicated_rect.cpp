#include <iostream>

template <typename T>
class Rectangle {
public:
    Rectangle(T width, T height) {
        this->width = width;
        this->height = height;
    }
    void setWidth(T width) { this->width = width; }
    void setHeight(T height) { this->height = height; }
    int getArea() { return this->width * this->height; }
    int getPerimeter() { return 2*(this->width + this->height); }
private:
    T width, height;
};

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    std::cout << "argc: " << argc << std::endl;
    Rectangle<int> r(argc, atoi(argv[1]));
    std::cout << r.getPerimeter() << std::endl;
}
