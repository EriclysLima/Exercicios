#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	
	float f,c;
	
	cout << "DIGITE A TEMPERATURA EM CENTIGRADOS: ";
	cin >> c;
	
	f=(9*c+160)/5;
	
	system("cls");
	
	cout << "A TEMPERATURA EM FAHRENHEIT E: "<< f;

	return 0;

}
