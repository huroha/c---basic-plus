#include <iostream>

using namespace std;

// chapter2 연습문제 6번
double distance(double a) {
    double result;
    result = a*63240;

    return result;
}
int main()
{  
   double a;
   cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
   cin >> a;
   
   cout << a <<" 광년은 " << distance(a) <<" 천문 단위입니다.";
   return 0;
}