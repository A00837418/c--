#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

float mult(float x, float y) {
    return x * y; // Usar x e y en lugar de a y b
}

string concat(string a, string b) {
    return a + b;
}

template <class T>
T sum(T a, T b) { // Corregir la palabra "return"
    return a + b;
}

int main() { // Corregir el tipo de retorno de la función main
    int a = 5;
    int b = 10;
    float x = 5.5;
    float y = 10.5;
    string s1 = "a";
    string s2 = "b";
    int c = sum(a, b);
    float z = mult(x, y); // Usar la función mult para la multiplicación
    string s3 = concat(s1, s2); // Usar la función concat para la concatenación

    cout << "La suma de a + b = " << c << endl;
    cout << "La multiplicacion es = " << z << endl;
    cout << "Las letras son = " << s3 << endl;

    return 0;
}
