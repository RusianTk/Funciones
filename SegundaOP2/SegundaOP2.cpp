// 2._Ingresar por consola números reales que se vayan almacenando en un vector y finalmente obtener como resultado la suma total del 
// cuadrado de los números que contiene dicho vector.

#include <iostream>
#include <vector>

using namespace std;

int cuad(int x);

int main()
{
    int n;
    int num;

    cout << "Digite el tamano del vector: " << endl;
    cin >> n;

    num = cuad(n);
    cout << "La suma del cuadrado es: " << num << endl;
}

int cuad(int x) {
    vector<int> vect;
    int sum = 0;
    int b;

    for (int i = 0; i < x; i++) {
        cout << "Digite el valor " << i + 1 << " del vector: " << endl;
        cin >> b;

        vect.push_back(b);

        sum += vect[i] * vect[i];
    }
    return sum;
}