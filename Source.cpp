#include <iostream>

using namespace std;
struct Rectangle {
    int x, y, width, height;
    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }
    void resize(int dw, int dh) {
        width += dw;
        height += dh;
    }
    void draw() {
        cout << "Rectangle(" << x << ", " << y << ", " << width << ", " << height << ")" << endl;
    }
};

int main() {
    Rectangle rect = { 10, 20, 30, 40 };
    rect.move(5, 5);
    rect.resize(10, 10);
    rect.draw();

    return 0;
}