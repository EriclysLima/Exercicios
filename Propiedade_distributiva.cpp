#include <iostream>
#include <stdlib.h>

using namespace std;

void soma(int a, int b);
void mult(int a, int b);

    int main(){

    int valor[4],n[4]{1,0,0,0},i;
    int nx[4]{1,0,0,0},cont[4]{1,0,0,0};
       
    for (i=0; i<4; i++){
    	cout << "Digite o valor " << i <<" : ";
    	cin >> valor[i];
    	system("cls");
	}   
    cout << "\n";
    
    cout << " --SOMA-- \n";

    for (i=0; i<3; i++){
        soma(valor[0],valor[n[0]]);
        n[0]++;
    }
    cout << "\n";   
    
    for (i=0; i<3; i++){
        soma(valor[1], valor[n[1]]);
    	n[1]++;
        if (n[1] > 0 && n[1] < 2){
            n[1]++;
        }
    } 
    cout << "\n";
    
    for (i=0; i<3; i++){
        soma(valor[2], valor[n[2]]);
        n[2]++;
        if (n[2] > 1 && n[2] < 3){
            n[2]++;
        }  
    }
    cout << "\n";
    
    for (i=0; i<3; i++){
        soma(valor[3], valor[n[3]]);
        n[3]++;	
        if (n[3] > 2 && n[3] < 4){
            n[3]++;
        }
    }  
    cout << "\n";

    cout << " --MULT-- \n";

    while (cont[0] < 4){
        mult(valor[0], valor[nx[0]]);
        nx[0]++;
        cont[0]++;
    } 
    cout << "\n";

    while (cont[1] < 3){
        mult(valor[1], valor[nx[1]]);
        nx[1]++;
        cont[1]++;
        if (nx[1] > 0 && nx[1] < 2){
            nx[1]++;
        }  
    } 
    cout << "\n";

    while (cont[2] < 3){
        mult(valor[2], valor[nx[2]]);
        nx[2]++;
        cont[2]++;
        if (nx[2] > 1 && nx[2] > 3){
            nx[2]++;
        }   
    }
    cout << "\n";

    while (cont[3] < 3){
        mult(valor[3], valor[nx[3]]);
        nx[3]++;
        cont[3]++;
        if (nx[3] > 2 && nx[3] > 4){
            nx[3]++;
        }  
    }
    return 0;
}
void soma(int a, int b){
    cout << " " << a << " + " << b << " = " << a + b << "\n";
}
void mult(int a, int b){
    cout << " " << a << " * " << b << " = " << a * b << "\n";
}


