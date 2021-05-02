#include<bits/stdc++.h>

using namespace std;
int cantidad(char *cadena){
    int i;
    for(i = 0;cadena[i]!='\0';i++);
    return i;
}
char * concatenar(char * a, char *b,int tama,int tamb){
	int j =0;
    for(int i = 0;i!=tama+tamb;i++){
    	cout<<b[i];
    	 if(i>=tamb){
    	 	b[i]=a[i-tamb];
		 }
        }
    
    
    return b;
}

int main (){

    char *a = new char[1000000000];
    char *b = new char[1000000000];

    cin>>a;
    cin>>b;
    int tama = cantidad(a);
    int tamb = cantidad(b);
    
    
    cout<<a<<" cant de a "<<tama;
    cout<<"\n"<<b<<" cant de b "<<tamb<<endl;
    cout<<concatenar(a,b,tama,tamb);
    return 0;
}