#include <vector>
#include <iostream>
using namespace std;

int main(void){
    vector<int> student;
    int grade;
    int num=0;
    while(grade!=-1){
        cout<<"성적을 입력하시오(종료는 -1) : ";
        cin>>grade;
        student.push_back(grade);
        num++;
    }
    student.pop_back();
    int sum=0;
    for(auto s:student){
        sum+=s;
    }
    int avg=0;
    avg=sum/(num-1);
    cout<<"성적 평균="<<avg;
}