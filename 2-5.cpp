#include <iostream>

using namespace std;

// chapter2 연습문제 5번
void CtoF(float C) {
    float F;
    F = 1.8*C+32.0;
    cout << "섭씨 " << C<<"도는 "<< "화씨로 " << F << "도입니다.";
}
int main()
{  
   float C;
   cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
   cin >> C;
   CtoF(C);
   return 0;
}