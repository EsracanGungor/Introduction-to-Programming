#include <iostream>
#include <vector>

using namespace std;

void findsum(string a, string b) {

vector<int>sonuc; 

	int elde = 0;  
	int i = a.size() - 1, j = b.size() - 1;

	while ((i >= 0) and (j >= 0)) {    
		int x = (a[i] - '0') + (b[j] - '0') + elde; 
		sonuc.push_back(x % 10);  
		elde= x / 10;               
		i--;                   
		j--;
	}
	

	while (i >= 0) {         
		int x = (a[i] - '0') + elde;  
		sonuc.push_back(x % 10);
		elde = x / 10;         
		i--;
	}
	
	while (j >= 0) {      
		int x = (b[j] - '0') + elde; 
		sonuc.push_back(x % 10);
		elde = x / 10;   
		j--;
	}

	while (elde) {   
		sonuc.push_back(elde % 10); 
		elde = elde / 10;
	}
	for (int k = sonuc.size() - 1; k >= 0; k--) {  
	cout << sonuc[k];
	}
    cout <<endl;
}
int main() {

	findsum("123456789098765325235252352352352352323235464645656786786744344534242346688", "324232523523346574745745645645555555555555555555555456456455457455555555555");

	system("pause");
	return 0;
}
