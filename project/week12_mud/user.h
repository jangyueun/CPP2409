#include <iostream>
#include <string>
using namespace std;

class User{
private:
    int hp; // 상태
    int itemCnt;    // 아이템 먹은 횟수
public:
    void DecreaseHP(int dec_hp);    // HP가 감소하는 멤버함수
    void IncreaseHP(int inc_hp);    // HP 증가하는 멤버함수
    int GetHP();    // HP를 반환하는 멤버함수
    User():hp(20),itemCnt(0){}; // hp=20으로 설정하며 생성하는 생성자
   
    // << 연산자 중복 정의
    friend ostream& operator<<(ostream& os, const User& user) {
        os << "현재 HP: " << user.hp << ", 먹은 아이템 총 " << user.itemCnt << "개";
        return os;
    }
    void IncreaseItemCnt() {
        itemCnt++;
    }

};