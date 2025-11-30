1. 다음과 같이 int형 vector 클래스의 객체를 선언하고 객체에 새로운 데이터를 push_back() 을 여러번 호출하도록 코드를 수정하라. push_back() 함수를 호출할 때 마다 객체에 대해 size와 capacity를 구해서 값의 변화를 분석하라
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    for (int i = 1; i <= 10; ++i) {
        v.push_back(i);
        cout << "push_back(" << i << ") -> size: " << v.size()
            << ", capacity: " << v.capacity() << endl;
    }
    return 0;
}
//size()는 매번 1씩 증가합니다.
//capacity()는 필요할 때만 증가하며, 1.5배씩 증가합니다.

2. 클래스 템플릿 vector를 사용한 프로그램이다. 프로그램 수행 결과를 예측하고 실행 결과의 비교하고 vector 분석하라.
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v1 = { 10, 20, 30, 40, 50 };
    vector<int> v2, v3;

    // v1 출력
    cout << "v1 = ";
    for (auto& val : v1) cout << val << " ";
    cout << endl;

    // v1을 v2에 복사
    v2.assign(v1.begin(), v1.end());

    cout << "v2 = ";
    for (auto& val : v2) cout << val << " ";
    cout << endl;

    // v3에 3개의 6 할당
    v3.assign(3, 6);
    cout << "v3 = ";
    for (auto& val : v3) cout << val << " ";
    cout << endl;

    // v3에 {5,6,7} 할당
    v3.assign({ 5, 6, 7 });
    cout << "v3 = ";
    for (auto& val : v3) cout << val << " ";
    cout << endl;

    int& i = v1.at(0);
    cout << "v1 첫 번째 원소: " << i << endl;

    if (v1 == v2) cout << "v1과 v2는 같다." << endl;

    i = 80; // 값 변경
    const int& j = v1.at(0);
    cout << "값 변경 후 v1 첫 번째 원소: " << j << endl;

    if (v1 == v2) cout << "v1과 v2는 같다." << endl;
    else cout << "v1과 v2는 다르다." << endl;
}
//assign()은 기존 내용을 모두 지우고 새로운 데이터를 채움.
//v1.at(0)를 참조로 받으면 값 수정 가능, const 참조로 읽기 전용 가능.
//참조로 값을 바꾸면 벡터 내용이 실제로 바뀌며, == 비교 결과가 달라짐.

3. 사각형을 표현하는 클래스를 정의하고 클래스를 vector 를 이용하여 저쟝하고 처리하는 프로그램을 작성하라.
#include <iostream>
#include <vector>
using namespace std;

class Rectangle {
public:
    int width, height;
    Rectangle(int w, int h) : width(w), height(h) {}
    int area() { return width * height; }
};

int main() {
    vector<Rectangle> rects;
    rects.push_back(Rectangle(3, 4));
    rects.push_back(Rectangle(5, 6));
    rects.push_back(Rectangle(2, 8));

    for (auto& r : rects) {
        cout << "Rectangle: " << r.width << "x" << r.height
            << ", area: " << r.area() << endl;
    }

    return 0;
}

4. 다음 프로그램의 실행 결과를 분석하라.
#include <iostream>
#include <vector>
using namespace std;

class Rectangle {
public:
    int width, height;
    Rectangle(int w, int h) : width(w), height(h) {}
    int area() { return width * height; }
};

int main() {
    vector<Rectangle> rects;
    rects.push_back(Rectangle(3, 4));
    rects.push_back(Rectangle(5, 6));
    rects.push_back(Rectangle(2, 8));

    for (auto& r : rects) {
        cout << "Rectangle: " << r.width << "x" << r.height
            << ", area: " << r.area() << endl;
    }

    return 0;
}

5. 4번의 프로그램에서 3 저장되는 위치는?
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v1(5); // 크기 5, 기본 값 0
    v1.push_back(3);   // 뒤에 3 추가

    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
}
//size() = 5 (실제 요소 개수)
//capacity() >= 5 (내부적으로 할당된 공간, 구현마다 다름)
//6번째 요소를 추가
//size() = 6
//capacity()는 자동 확장됨.capacity의 1.5배로 증가할 수 있음.

6. 4의 프로그램에서 첫 번째 위치에 데이터 10을 저장하는 프로그램을 작성하라.
//v1.push_back(3)는 벡터 끝에 추가됩니다.
//즉, 0~4번 인덱스는 기존 초기값(0),
//5번 인덱스에 3 저장.
//v1: [0, 0, 0, 0, 0, 3]
//인덱스 : 0 1 2 3 4 5

7. 아래의 링크를 참조하여 vector 클래스의 다른 멤버 함수와 연산자를 활용한 프로그램을 작성하라.
https://learn.microsoft.com/ko-kr/cpp/standard-library/vector-operators?view=msvc-170

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v1(5); // 크기 5, 기본 값 0
    v1.push_back(3);   // 뒤에 3 추가

    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
    
    // 1번
	v1[0] = 10; // 인덱스 0에 10 저장
    cout << "v1[0] = " << v1[0] << endl;

	// 2번
	//v1.at(0) = 10; // 인덱스 0에 10 저장

8. SampleCodes/STL 디렉토리의 vector_sample.cc 파일을 기반으로 vector 클래스의 멤버 함수를 검증하는 함수를 작성하라.
#include <vector>
#include <iostream>
using namespace std;

void test_vector_functions() {
    vector<int> v;

    cout << "=== push_back 테스트 ===" << endl;
    for (int i = 1; i <= 5; ++i) {
        v.push_back(i);
        cout << "size: " << v.size() << ", capacity: " << v.capacity() << endl;
    }

    cout << "=== insert 테스트 ===" << endl;
    v.insert(v.begin() + 2, 10); // 3번째 위치에 10
    for (auto& x : v) cout << x << " ";
    cout << endl;

    cout << "=== erase 테스트 ===" << endl;
    v.erase(v.begin() + 1); // 2번째 위치 제거
    for (auto& x : v) cout << x << " ";
    cout << endl;

    cout << "=== clear 테스트 ===" << endl;
    v.clear();
    cout << "size after clear: " << v.size() << endl;
}

int main() {
    test_vector_functions();
    return 0;
}
//push_back, insert, erase, clear 등 주요 멤버 함수와 동작을 한 번에 확인 가능
//출력 결과로 size, capacity 변화를 관찰할 수 있음.
