#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {  // 가상 함수
        cout << "동물이 소리를 냅니다." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "멍멍!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "야옹!" << endl;
    }
};

int main() {

    Animal a1;
    Dog a2;
    Cat a3;

    a1.speak();
    a2.speak();
    a3.speak();

    return 0;
}
