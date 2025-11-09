#include <iostream>
using namespace std;

int main() {
	int a = 3, b = 9, c = 5;
	cout << a + b + c << endl;
	cout << (a + b + c)/3 << endl;
}

//사용자에게 정수 하나를 입력받아,
//그 수가 짝수면 "짝수입니다", 홀수면 "홀수입니다"를 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if (a % 2 == 0) {
		cout << "짝수입니다" << endl;
	}
	else {
		cout << "홀수입니다" << endl;
	}
}

//세 개의 정수 a, b, c를 입력받아,
//(1) 세 수의 합,
//(2) 평균(소수점 버림),
//(3) 세 수 중 가장 큰 값을 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	int avg = sum / 3;
	int max_val = a;
	if (b > max_val) max_val = b;
	if (c > max_val) max_val = c;
	cout << sum << endl;
	cout << avg << endl;
	cout << max_val << endl;
	return 0;
}

//두 정수를 매개변수로 받아서 합을 반환하는 함수 sum()을 작성하고,
//main() 함수에서 사용자 입력을 받아 sum()을 호출하여 결과를 출력하시오.

#include <iostream>
using namespace std;

int sum(int a, int b) {
	return a + b;
}

int main() {
	int num1, num2;
	cout << "두 정수를 입력하세요: ";
	cin >> num1 >> num2;
	int result = sum(num1, num2);
	cout << "두 정수의 합: " << result << endl;
	return 0;
}

//5개의 정수를 입력받아 배열에 저장하고,
//모든 원소의 합을 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
		cout << "현재까지의 합: " << sum << endl;
	}
	cout << "모든 원소의 합: " << sum << endl;
}

//정수형 변수 a의 주소를 포인터 p에 저장하고,
//포인터를 이용해 a의 값을 출력하는 프로그램을 작성하시오.

//예: (변수 a의 값은 10)
#include <iostream>
using namespace std;

int main() {
	int a = 10;          // 정수형 변수 a 선언 및 초기화
	int* p = &a;       // 변수 a의 주소를 포인터 p에 저장
	cout << "The value of a is: " << *p << endl; // 포인터를 이용해 a의 값 출력
	return 0;
}

//정수형 변수 a와 이를 참조하는 변수 b를 선언하고,
//b를 이용해 값을 변경하면 a의 값도 바뀌는 프로그램을 작성하시오.

//예: a = 10; b = a; b = 20; → 출력 결과 : a = 20

#include <iostream>
using namespace std;

int main() {
	int a = 10;      // 정수형 변수 a 선언 및 초기화
	int& b = a;     // a를 참조하는 변수 b 선언
	cout << "초기값: a = " << a << ", b = " << b << endl;
	b = 20;         // b를 이용해 값을 변경
	cout << "변경 후: a = " << a << ", b = " << b << endl;
	return 0;
}

//이름(string)과 나이(int)를 저장하는 구조체 Person을 선언하고,
//구조체 변수를 만들어 값을 저장하고 출력하시오.

#include <iostream>
#include <string>
using namespace std;

struct Person {
	string name;
	int age;
};

int main() {
	Person person;
	person.name = "Alice";
	person.age = 30;
	cout << "Name: " << person.name << endl;
	cout << "Age: " << person.age << endl;
	return 0;
}

//Car 클래스를 정의하고,
//멤버 변수 speed를 가지고,
//멤버 함수 accelerate()가 속도를 + 10 증가시키도록 작성하시오.

//main()에서 객체를 만들어 accelerate()를 두 번 호출 후 현재 속도를 출력하시오.

#include <iostream>
using namespace std;

class Car {
	int speed;
public:
	Car() : speed(0) {} // 생성자에서 speed 초기화
	void accelerate() {
		speed += 10;
	}
	int getSpeed() const {
		return speed;
	}
};

int main() {
	Car myCar;
	myCar.accelerate();
	myCar.accelerate();
	cout << "Current speed: " << myCar.getSpeed() << " km/h" << endl;
	return 0;
}

//int형 변수 하나를 동적으로 할당하고,
//사용자로부터 값을 입력받아 저장한 뒤,
//출력하고 메모리를 해제하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
	int* p = new int; // 동적 메모리 할당
	cout << "정수를 입력하세요: ";
	cin >> *p; // 사용자로부터 값 입력받기
	cout << "입력한 값은: " << *p << endl; // 값 출력
	delete p; // 메모리 해제
	return 0;
}

//Animal 클래스를 만들고,
//Dog 클래스가 Animal을 상속받게 한 뒤,
//Dog 클래스 안에서 "멍멍!"을 출력하는 함수를 작성하시오.

#include <iostream>
using namespace std;

class Animal {
	// Animal 클래스 내용 (필요시 추가 가능)
};

class Dog : public Animal {
public:
	void bark() {
		cout << "멍멍!" << endl;
	}
};

int main() {
	Dog myDog;
	myDog.bark(); // "멍멍!" 출력
	return 0;
}

//Animal 클래스에 speak() 함수를 정의하고,
//Dog 클래스에서 이를 오버라이딩(override) 하여 "멍멍!"을 출력하도록 작성하시오.

//Animal * 형 포인터로 Dog 객체를 가리키고, speak()를 호출했을 때 "멍멍!"이 출력되어야 합니다.

#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak() {
		cout << "Animal sound" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() override {
		cout << "멍멍!" << endl;
	}
};

int main() {
	Animal* myDog = new Dog();
	myDog->speak(); // "멍멍!" 출력
	delete myDog;
	return 0;
}

//두 개의 값을 받아 둘 중 큰 값을 반환하는 함수 템플릿을 작성할 수 있나요 ?

#include <iostream>
using namespace std;

template <typename T>
T mymax(T a, T b) {
	return (a > b) ? a : b;
}

int main() {
	int x = 10, y = 20;
	double p = 5.5, q = 3.3;
	
	cout << "Max of " << x << " and " << y << " is " << mymax(x, y) << endl;
	cout << "Max of " << p << " and " << q << " is " << mymax(p, q) << endl;
	
	return 0;
}

//사용자가 입력한 숫자가 0이면 예외를 발생시키고,
//예외를 잡아 "0은 입력 불가" 라고 출력할 수 있나요 ?

#include <iostream>
using namespace std;

class ZeroException {
public:
	ZeroException() {}
};

int main() {
	int num;
	cout << "숫자를 입력하세요: ";
	cin >> num;
	try {
		if (num == 0) {
			throw ZeroException();
		}
		cout << "입력한 숫자는: " << num << endl;
	} catch (ZeroException& e) {
		cout << "0은 입력 불가" << endl;
	}
	return 0;
}

//같은 이름의 함수 print()가 서로 다른 네임스페이스 A와 B 안에 존재할 때,
//네임스페이스를 지정해서 각각 호출할 수 있나요 ?

#include <iostream>
namespace A {
	void print() {
		std::cout << "This is namespace A" << std::endl;
	}
}

namespace B {
	void print() {
		std::cout << "This is namespace B" << std::endl;
	}
}

int main() {
	A::print(); // 네임스페이스 A의 print() 호출
	B::print(); // 네임스페이스 B의 print() 호출
	return 0;
}

//5개의 정수를 vector에 저장하고,
//모든 원소를 순회하며 출력할 수 있나요 ?

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> numbers;
	// 5개의 정수를 벡터에 저장
	for (int i = 0; i < 5; ++i) {
		int num;
		cout << "정수를 입력하세요: ";
		cin >> num;
		numbers.push_back(num);
	}
	// 모든 원소를 순회하며 출력
	cout << "벡터에 저장된 정수들: ";
	for (size_t i = 0; i < numbers.size(); ++i) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	return 0;
}

//두 개의 Complex 클래스 객체를 + 연산으로 더할 수 있도록 연산자 오버로딩을 할 수 있나요 ?

#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double imag;
public:
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
	// + 연산자 오버로딩
	Complex operator+(const Complex& other) {
		return Complex(real + other.real, imag + other.imag);
	}
	void display() const {
		cout << real << " + " << imag << "i" << endl;
	}
};

int main() {
	Complex c1(2.0, 3.0);
	Complex c2(4.0, 5.0);
	Complex c3 = c1 + c2; // + 연산자 사용
	c3.display(); // 출력: 6.0 + 8.0i
	return 0;
}

//A와 B 클래스를 만들고, C 클래스가 두 클래스를 모두 상속받아,
//각각의 멤버 함수를 호출할 수 있나요 ?

#include <iostream>
using namespace std;

class A {
public:
	void displayA() {
		cout << "This is class A" << endl;
	}
};

class B {
public:
	void displayB() {
		cout << "This is class B" << endl;
	}
};

class C : public A, public B {
public:
	void displayC() {
		cout << "This is class C" << endl;
	}
};

int main() {
	C objC;
	objC.displayA(); // A 클래스의 멤버 함수 호출
	objC.displayB(); // B 클래스의 멤버 함수 호출
	objC.displayC(); // C 클래스의 멤버 함수 호출
	return 0;
}

//unique_ptr<int>를 이용해 동적 메모리를 관리하고,
//값을 저장하고 출력할 수 있나요 ?

#include <iostream>
#include <memory>
int main() {
	// unique_ptr을 사용하여 동적 메모리 할당
	std::unique_ptr<int> ptr(new int);
	// 값 저장
	*ptr = 42;
	// 값 출력
	std::cout << "Stored value: " << *ptr << std::endl;
	// unique_ptr는 자동으로 메모리를 해제하므로 별도의 delete가 필요 없음
	return 0;
}

//사용자로부터 이름과 나이를 입력받아
//"홍길동님은 20세입니다." 형태로 출력하시오.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	int age;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "나이를 입력하세요: ";
	cin >> age;
	cout << name << "님은 " << age << "세입니다." << endl;
	return 0;
}

//세 개의 정수를 입력받아
//합계, 평균, 최댓값을 출력하시오.
//(최댓값 구하기 포함 — 비교 연산과 조건문 사용)

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "세 개의 정수를 입력하세요: ";
	cin >> a >> b >> c;
	int sum = a + b + c;
	double average = sum / 3.0;
	int max_value = a; // 초기값 설정
	if (b > max_value) {
		max_value = b;
	}
	if (c > max_value) {
		max_value = c;
	}
	cout << "합계: " << sum << endl;
	cout << "평균: " << average << endl;
	cout << "최댓값: " << max_value << endl;
	return 0;
}

//1~100까지 수 중에서 3의 배수만 출력하시오.

#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			cout << i << " ";
		}
	}
	return 0;
}

//두 정수를 매개변수로 받아 합과 차를 반환하는 함수 calculate()를 작성하고,
//main()에서 호출하여 출력하시오.

#include <iostream>
using namespace std;

int* calculate(int a, int b) {
	static int result[2]; // 합과 차를 저장할 배열
	result[0] = a + b;    // 합
	result[1] = a - b;    // 차
	return result;
}

int main() {
	int num1, num2;
	cout << "두 정수를 입력하세요: ";
	cin >> num1 >> num2;
	int* results = calculate(num1, num2);
	cout << "합: " << results[0] << endl;
	cout << "차: " << results[1] << endl;
	return 0;
}

//5개의 정수를 입력받아 배열에 저장한 뒤,
//짝수만 출력하고 짝수 합계를 구하시오.

#include <stdio.h>

int main() {
	int arr[5];
	int sum = 0;

	// 5개의 정수 입력받기
	printf("5개의 정수를 입력하세요:\n");
	for (int i = 0; i < 5; i++) {
		if (scanf_s("%d", &arr[i]) != 1) { // scanf_s 사용 및 반환 값 확인
			printf("입력 오류가 발생했습니다.\n");
			return 1; // 오류 발생 시 프로그램 종료
		}
	}

	// 짝수 출력 및 합계 계산
	printf("짝수는:\n");
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d\n", arr[i]);
			sum += arr[i];
		}
	}

	// 짝수 합계 출력
	printf("짝수 합계: %d\n", sum);
	return 0;
}

//구조체 Student를 만들고, 이름과 점수를 저장하시오.
//학생 3명의 점수를 입력받아, 평균 점수를 출력하시오.

#include <iostream>
using namespace std;

struct Student {
	string name;
	int score;
};

int main() {
	Student students[3];
	int totalScore = 0;
	for (int i = 0; i < 3; i++) {
		cout << "Enter name of student " << (i + 1) << ": ";
		cin >> students[i].name;
		cout << "Enter score of " << students[i].name << ": ";
		cin >> students[i].score;
		totalScore += students[i].score;
	}
	double averageScore = static_cast<double>(totalScore) / 3;
	cout << "Average score: " << averageScore << endl;
	return 0;
}

//Rectangle 클래스를 만들어, 가로와 세로를 멤버 변수로 하고
//area() 함수를 만들어 면적을 반환하시오.
//객체 2개를 생성하고 각각 면적을 출력하시오.

#include <iostream>
using namespace std;

class Rectangle {
private:
	double width;
	double height;
public:
	Rectangle(double w, double h) : width(w), height(h) {}
	double area() {
		return width * height;
	}
};

int main() {
	Rectangle rect1(3.0, 4.0);
	Rectangle rect2(5.0, 6.0);
	cout << "Area of rectangle 1: " << rect1.area() << endl;
	cout << "Area of rectangle 2: " << rect2.area() << endl;
	return 0;
}

//Shape 클래스를 만들고, Circle이 상속받게 하시오.
//반지름을 입력받아 원의 넓이를 출력하시오.

#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846 // M_PI가 정의되지 않은 경우 정의
#endif
using namespace std;

class Shape {
public:
	virtual double area() = 0; // 순수 가상 함수
};

class Circle : public Shape {
private:
	double radius;
public:
	Circle(double r) : radius(r) {}
	double area() override {
		return M_PI * radius * radius;
	}
};

int main() {
	double r;
	cout << "반지름을 입력하세요: ";
	cin >> r;
	Circle circle(r);
	cout << "원의 넓이: " << circle.area() << endl;
	return 0;
}

//Animal과 Dog 클래스를 정의하고,
//Dog에서 speak() 함수를 오버라이딩하시오.
//Animal* 포인터로 Dog 객체를 가리키고 호출하면 "멍멍!"이 출력되도록 하시오.

#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak() {
		cout << "Animal sound" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() override {
		cout << "멍멍!" << endl;
	}
};

int main() {
	Animal* myDog = new Dog();
	myDog->speak(); // "멍멍!" 출력
	delete myDog;
	return 0;
}
