#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 0;
    }
   void no();
    friend void setLength(Box &b);
};

void setLength(Box &b) {
    b.length = 10;   // ✅ Correct (access via object)
}
void Box::no(){
    length=80;
}

int main() {
    Box b1;
    setLength(b1);
    return 0;
}