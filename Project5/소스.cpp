#include<iostream> 

using namespace std;

class Time {
	int h, m, s; //private ����

public:  //4���� ������ ����
	    Time() : h(0), m(0), s(0) {    //���� ������
	    }
		Time(int s) : Time() {   //���� ������
			this->s = s; //this ������ ��� (���� �����ڿ��Ե� ����s �� �Ѿ)
			cout << h << " : " << m << " : " << s << endl << endl; //process�� �������� print
		}
		Time(int m, int s) : Time(s) {   //���� ������
			this->m = m; // this ������ ���
			cout << h << " : " << m << " : " << s << endl << endl; //process�� �������� print
		}
		Time(int h, int m, int s) : Time(m, s) {   //���� ������
			this->h = h;  // this ������ ���
			cout << h << " : " << m << " : " << s << endl << endl; //process�� �������� print
		}
};

int main() {
	cout << "=========��ŸƮ==========" << endl;
	Time Timeprocess(1, 2, 3); // Ŭ������ ����ϱ� ���� ��ü
	cout << "==========END===========";
}