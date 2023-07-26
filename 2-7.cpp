#include <iostream>

using namespace std;

// chapter2 연습문제 7번
void clock(int hour, int min) {
    cout << "시각:    " <<hour<<":"<<min;
}
int main()
{  
   int hour,min;
   cout << "시간 값을 입력하시오: ";
   cin >> hour;
   cout << "분 값을 입력하시오: ";
   cin >> min;

   clock(hour,min);
   
   return 0;
}