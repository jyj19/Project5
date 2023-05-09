#include<iostream> 

using namespace std;

class Time {
	int h, m, s; //private 변수

public:  //4가지 생성자 선언
	    Time() : h(0), m(0), s(0) {    //위임 생성자
	    }
		Time(int s) : Time() {   //위임 생성자
			this->s = s; //this 포인터 사용 (다음 생성자에게도 변수s 가 넘어감)
			cout << h << " : " << m << " : " << s << endl << endl; //process를 보기위한 print
		}
		Time(int m, int s) : Time(s) {   //위임 생성자
			this->m = m; // this 포인터 사용
			cout << h << " : " << m << " : " << s << endl << endl; //process를 보기위한 print
		}
		Time(int h, int m, int s) : Time(m, s) {   //위임 생성자
			this->h = h;  // this 포인터 사용
			cout << h << " : " << m << " : " << s << endl << endl; //process를 보기위한 print
		}
};

int main() {
	cout << "=========스타트==========" << endl;
	Time Timeprocess(1, 2, 3); // 클래스를 사용하기 위한 객체
	cout << "==========END===========";
}