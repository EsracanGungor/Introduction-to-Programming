#include <iostream>

using namespace std;

double faktoriyel(double n) {
	if (n == 1)
		return 1;
		return  n*faktoriyel(n - 1);
}

double kuvvet(double taban, int us)
{
	double sonuc = 1;
	for (int i = 1; i <= us; i++)
		{		
				sonuc *= taban;
		}
	return sonuc;
	
}

double taylorsinus(double n,double hassasiyet=19) {
	double sonuc = 0;
	for (int j = 0; j < hassasiyet; j++) {
		sonuc += kuvvet(-1.0, j) * kuvvet(n, 2 * j + 1) / faktoriyel(2 * j + 1);
	}
	return sonuc;
}

int main() {
		
	for (int i = 1; i <= 30; i++) {

		cout << taylorsinus((double)i) << endl;
	}
	system("pause");
	return 0;
}
