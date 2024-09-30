#include <iostream>
using namespace std;

int main() {
    int floor;
    cout << "몇 층을 쌓겠습니까? (5~100): ";
    cin >> floor;
    
    for (int i = 0; i < floor; i++) {
        cout << string(i, 'S'); // i만큼 'S' 출력
        cout << string((floor - i) * 2 - 1, '*'); // (floor - i) * 2 - 1만큼 '*' 출력
        cout << endl;
    }
    
    return 0;
}
