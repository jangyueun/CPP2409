#include <iostream>

using namespace std;

int main()
{
    float f_tem;
    float c_tem;
    
    cout << "화씨온도:";
    cin >> f_tem;
    c_tem=(5.0/9.0)*(f_tem-32);
    cout << "섭씨온도=" << c_tem;

    return 0;
}
