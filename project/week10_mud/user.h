#include <iostream>
#include <string>
using namespace std;

class User{
private:
    int hp; // 상태
public:
    void DecreaseHP(int dec_hp);    // HP가 감소하는 멤버함수
    void IncreaseHP(int inc_hp);    // HP 증가하는 멤버함수
    int GetHP();    // HP를 반환하는 멤버함수
    User(); // hp=20으로 설정하며 생성하는 생성자
};