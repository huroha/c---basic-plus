#include <iostream>

using namespace std;

// chapter2 연습문제 2번

int main()
{  
    double distance;
    cout << "거리를 입력하시오. (mile to km)\n";
    cin >> distance;
    distance = distance * 1.60934;

    cout << distance << "km입니다."<<endl;

    return 0;
}

