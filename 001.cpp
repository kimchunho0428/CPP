#include <iostream>
using namespace std;

class Vehicle
{
private:
    int person = 0;   // 탑승인원
    int baggage = 0;  // 화물 무게
public:
    void ride() {
        person++;
        cout << "탑승했습니다. 현재 탑승인원: " << person << endl;
    }

    void getOff() {
        if (person > 0) person--;
        cout << "하차했습니다. 현재 탑승인원: " << person << endl;
    }

    void load(int weight) {
        baggage += weight;
        cout << weight << "kg 짐을 싣습니다. 현재 화물: " << baggage << "kg" << endl;
    }

    int getPerson() { return person; } // 탑승인원 확인

    void countPerson() { // 탑승인원 출력
        cout << "현재 탑승인원: " << person << endl;
    }
};

class Cruise : public Vehicle
{
private:
    int room = 0;
public:
    void setRoom(int r) {
        room = r;
        cout << "크루즈 방 수를 " << room << "개로 설정했습니다." << endl;
    }
};

class AirPlane : public Vehicle
{
private:
    int seat = 0;
public:
    void setSeat(int s) {
        seat = s;
        cout << "비행기 좌석 수를 " << seat << "개로 설정했습니다." << endl;
    }
};

int main()
{
    cout << "--- Cruise 테스트 ---" << endl;
    Cruise dolphin;
    dolphin.setRoom(20);
    dolphin.ride();
    dolphin.ride();
    dolphin.load(100);
    dolphin.countPerson();
    dolphin.getOff();
    dolphin.countPerson();

    cout << "\n--- AirPlane 테스트 ---" << endl;
    AirPlane cppAir;
    cppAir.setSeat(150);
    cppAir.ride();
    cppAir.load(50);
    cppAir.countPerson();
    cppAir.getOff();
    cppAir.countPerson();

    return 0;
}

