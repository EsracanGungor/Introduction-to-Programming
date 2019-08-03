#include <iostream>

using namespace std;

class stringtopla {
	
private:
	char stringdizisi[50];
	
	public:
		stringtopla() 
		{
		stringdizisi[0] = '\0';
		}
	
	stringtopla(const char dizi[50])
	{
		strcpy(stringdizisi,dizi);
	}

	char* strcpy(char * ptr1, const char * ptr2)
 {
		 	   char* cpysonuc = ptr1;
		 	   if ((NULL != ptr1) && (NULL !=ptr2))
			 	   {
				 	     while (NULL != *ptr2)
				 	     {
				 *ptr1++ = *ptr2++;
				 	     }
				 * ptr1 = NULL;
			 	   }
		 	   return cpysonuc;
 }

	char* strcat(char* ptr1, const char * ptr2)
		 {
		char* catsonuc = ptr1;
		  if ((NULL != ptr1) && (NULL != ptr2))
		 {
			  while (NULL != *ptr1){
			ptr1++;
			  }
			  while (NULL != *ptr2)
			 {
			* ptr1++ = *ptr2++;
			}
			* ptr1 = NULL;
	}
	return catsonuc;
	}

	stringtopla operator+(stringtopla string) {
		stringtopla s;
		strcat(stringdizisi, string.stringdizisi);
		strcpy(s.stringdizisi, stringdizisi);
		return s;
	}

	void getValue() {
		cout << stringdizisi << endl;
	}
};

int main()
{
	stringtopla s2("Esracan");
	stringtopla s3("Güngör");
	stringtopla s1;

	s1 = s2 + " " + s3;
	s1.getValue();

	system("pause");
	return 0;
}
