#include <iostream>

using namespace std;

int fact(int N){
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N*fact(N - 1);
}
int main() {
	setlocale(LC_ALL, "rus");
	int N;
	cout << "������� ����� ��� ���������� ����������:";
	cin >> N;
	cout << "��������� ��� �����" << N << "=" << fact(N) << endl;
	return 0;

}