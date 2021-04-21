#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
long long int Factor_primo;
long long int num = 600851475143;
for ( Factor_primo = 2; Factor_primo < num; Factor_primo++)
{
    if(num % Factor_primo == 0){
        num /= Factor_primo;
        Factor_primo=2;
    }
}
cout<<"El mayor valor es: "<<num<<endl;
 system("pause");
 return 0;
}
