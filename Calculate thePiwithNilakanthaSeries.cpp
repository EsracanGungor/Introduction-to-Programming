#include <iostream>

using namespace std;

int main() {
	double iterasyon =1000000;
	double isaret = 1;
	double pi = 3.0000;
	for (double i =0; i <= iterasyon; i++)
	{
	pi +=isaret* (4.0 / ((2.0*i+2.0)*( 2.0*i + 3.0)*( 2.0*i +4.0)));
	
		isaret = -isaret;
	
	}
	cout << iterasyon << ".iterasyonda bulunan deger:" << pi << endl;

	system("pause");
	return 0;
}
