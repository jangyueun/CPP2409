#include <iostream>
#include <string>
using namespace std;

int main() {
    const int maxPeople = 5;
    string names[maxPeople];
    int ages[maxPeople];
    
    cout << maxPeople << "명의 회원 정보를 입력해주세요." << endl;

    for (int i = 0; i < maxPeople; i++) {
        cout << "사람 " << i + 1 << "의 이름: ";
        cin >> names[i];
        cout << "사람 " << i + 1 << "의 나이: ";
        cin >> ages[i];
    }

    int num;
    cout << "원하는 메뉴를 선택하세요 (1.가장 많은 사람 2.가장 적은 사람 3.종료): ";
    cin >> num;

    switch (num) {
        case 1: {
            // 가장 나이 많은 사람 찾기
            int maxAge = ages[0];
            int maxIndex = 0;
            for (int i = 1; i < maxPeople; i++) {
                if (ages[i] > maxAge) {
                    maxAge = ages[i];
                    maxIndex = i;
                }
            }
            cout << "가장 나이가 많은 사람은 " << names[maxIndex] << " (" << maxAge << "세)입니다." << endl;
            break;
        }
        case 2: {
            // 가장 나이 적은 사람 찾기
            int minAge = ages[0];
            int minIndex = 0;
            for (int i = 1; i < maxPeople; i++) {
                if (ages[i] < minAge) {
                    minAge = ages[i];
                    minIndex = i;
                }
            }
            cout << "가장 나이가 적은 사람은 " << names[minIndex] << " (" << minAge << "세)입니다." << endl;
            break;
        }
        case 3:
            cout << "프로그램을 종료합니다." << endl;
            break;
        default:
            cout << "잘못된 숫자를 입력했습니다." << endl;
    }

    return 0;
}
