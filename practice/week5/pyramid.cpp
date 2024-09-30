#include <iostream>
using namespace std;

int main() {
    int floor;
    cout<<"몇 층을 쌓겠습니까? (5~100):";
    cin>>floor;
    for (int i=0;i<floor;i++){
        cout<<string(floor-1-i,'S');
        cout<<string(i*2+1,'*');
        cout<<endl;
        }
    return 0;
}