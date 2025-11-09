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
