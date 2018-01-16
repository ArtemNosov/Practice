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
	cout << "Введите любое число для вычисления факториала:";
	cin >> N;
	cout << "Факториал для числа" << N << "равен:"<< endl << fact(N) << endl;
	return 0;

}