#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int N, M, d[1000];

	cin >> N >> M;

	for (int i = 0; i < N; ++i)
		cin >>  d[i];

	for (int i = 0; i < 10; ++i)
		cout << d[(M + i) % N];

	

	return 0;
}