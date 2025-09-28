#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "강의를 하고 있습니다." << endl;
    }
};

class Researcher {
public:
    void research() {
        cout << "연구를 하고 있습니다." << endl;
    }
};

// 다중 상속
class Professor : public Teacher, public Researcher {
public:
    void introduce() {
        cout << "저는 교수입니다." << endl;
    }
};

int main() {
    Professor p;
    p.Teacher::teach();
	p.Researcher::research();
    p.Professor::teach();
    p.Professor::research();
	p.Professor::introduce();
    return 0;
}
