#include <iostream>
#include <time.h>
using namespace std;

int main() {
    int i;
    int ans;
    cout<<"산수 문제를 자동으로 출제합니다."<<endl;

    while(true){
        int firstNum=rand()%100;
        int secondNum=rand()%100;

        cout<<firstNum<<"+"<<secondNum<<"=";
        cin>>ans;

        if(ans!=firstNum+secondNum){
            cout<<"틀렸습니다."<<endl;
        }
        else{
            cout<<"맞았습니다."<<endl;
            break;
        }
    }

    return 0;
}