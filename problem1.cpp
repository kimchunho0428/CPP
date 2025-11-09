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

