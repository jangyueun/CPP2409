#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// 3자리 숫자의 자릿수가 모두 다른지 확인하는 함수
bool checkNumber(int num) {
	int first = num / 100;
	int second = (num / 10) % 10;
	int third = num % 10;
	return (first != second && first != third && second != third);
}

// 힌트를 계산하는 함수
void giveHint(int answer, int guess, int &strike, int &ball) {
	int answerFirst = answer / 100;
	int answerSecond = (answer / 10) % 10;
	int answerThird = answer % 10;

	int guessFirst = guess / 100;
	int guessSecond = (guess / 10) % 10;
	int guessThird = guess % 10;

	strike = 0;
	ball = 0;

	if (guessFirst == answerFirst) strike++;
	else if (guessFirst == answerSecond || guessFirst == answerThird) ball++;

	if (guessSecond == answerSecond) strike++;
	else if (guessSecond == answerFirst || guessSecond == answerThird) ball++;

	if (guessThird == answerThird) strike++;
	else if (guessThird == answerFirst || guessThird == answerSecond) ball++;
}

int main() {
	srand(time(0)); // 랜덤 시드 초기화
	int randomNum; // 맞춰야 하는 3자리수의 숫자 저장 변수
	int firstNum; // 정답의 첫번째 자리수
	int secondNum; // 정답의 두번째 자리수
	int thirdNum; // 정답의 세번째 자리수

	while (1) {		
		randomNum = rand() % 900 + 100; // 랜덤한 3자리수 생성

		// 3자리 숫자의 자릿수를 추출하고, 모든 수가 다른지 체크
		firstNum = randomNum / 100;
		secondNum = (randomNum / 10) % 10;
		thirdNum = randomNum % 10;

		bool same = checkNumber(randomNum); // 모든 수가 다른지 체크하는 함수 호출

		if (same) {
			break;
		}
	}

	int turn = 0;
	while (1) {
		cout << turn + 1 << "번째 시도입니다. " << endl;

		int userNumber; // 사용자가 입력한 세자리수 저장 변수
		int guessFirst; // 추측한 숫자의 첫번째 자리수
		int guessSecond; // 추측한 숫자의 두번째 자리수
		int guessThird; // 추측한 숫자의 세번째 자리수

		// 사용자에게 세자리 수를 입력받는 코드 블록
		while (1) {
			cout << "세자리 수를 입력해주세요: ";
			cin >> userNumber;

			// 입력된 숫자가 3자리 수인지 확인
			if (to_string(userNumber).length() != 3) {
				cout << "입력된 숫자가 3자리 수가 아닙니다. 다시 입력하세요." << endl;
				continue;
			}

			// 각 자리수가 다른지 확인
			if (checkNumber(userNumber)) {
				break;
			} else {
				cout << "모든 자리의 숫자가 달라야 합니다. 다시 입력하세요." << endl;
			}
		}

		int strike = 0; // 스트라이크 갯수를 저장하는 변수
		int ball = 0; // 볼 갯수를 저장하는 변수

		// 정답과 추측한 숫자의 자릿수와 숫자를 비교하며 힌트를 주기 위한 함수 호출
		giveHint(randomNum, userNumber, strike, ball);

		// 힌트 출력
		cout << userNumber << "의 결과 : " << strike << " 스트라이크, " << ball << "볼 입니다." << endl;
		
		if (strike == 3) {
			cout << "정답을 맞췄습니다. 축하합니다!" << endl;
			break;
		}

		turn += 1;
	}

	return 0;
}
