#include <iostream>

using namespace std;

#define pi 3.141559

int main(){

    float volume,raio,altura;

    cout << "Digite o valor do raio: ";
    cin >> raio;
    cout <<"Digite o valor da altura: ";
    cin >> altura;

    volume=pi*(raio*raio)*altura;

    cout << "O valor do volume e " << volume;

    return 0;
}
