#include <iostream>
#include "DynamicArray.h"

using namespace std;

int main() {
    DynamicArray p;    
    cout << p.getSize() << endl;

    Point arr[4];
    int tam = sizeof(arr) / sizeof(arr[0]);

    DynamicArray q(arr, tam);
    cout << q.getSize() << endl;
    // estoy llamando al constructor copia
    
    Point a(5,4);
    q.push_back(a);
    cout << q.getSize() << endl;
    Point j(5,4);
    q.insert(j,2);
    cout << q.getSize() << endl;
    q.remove(2);
    cout << q.getSize() << endl;
    return 0;
}