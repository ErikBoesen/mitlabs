#include <iostream>

class Rectangle {
public:
    Rectangle(int width, int height) {
        this->width = width;
        this->height = height;
    }
    void setW(int width) { this->width = width; }
    void setH(int height) { this->height = height; }
    int getArea() { return this->width * this->height; }
    int getPerimeter() { return 2*(this->width + this->height); }
private:
    int width, height;
};

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    std::cout << "argc: " << argc << std::endl;
    Rectangle r(argc, atoi(argv[1]));
    std::cout << r.getPerimeter() << std::endl;
}
