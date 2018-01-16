#pragma once
#include "math.h"
#include <iostream>
using namespace std;
void GetValue(int value)
{
	int  i = 0, x = 0;
	for (i = sqrt((2 * value)); i > 0; i--){

		x = value - i*(i - 1) / 2;
		if (x % i == 0){
			cout << x / i << ' ' << i;
			break;

		}
	}
}