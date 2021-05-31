#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{

    int arr[] = {12, 45, 69, 68, 63, 15};

    int *ptr = arr + 3;
    cout << ++(*(ptr++)) << endl;

    cout << *(--(--ptr)) << endl;

    //cout << --(*(arr++)) << endl;

    system("pause");
}
