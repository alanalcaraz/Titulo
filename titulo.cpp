//Programa que da formato tipo titulo (primera letra mayuscula y el resto minuscula) a una frase;
#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h> 
using namespace std;
int main() 
{ 
char frase[100];
cout<<"Ingrese una frase: "; 
cin.getline(frase,100); //se reciben los caracteres de la frase;
frase[0]=toupper(frase[0]); //la funcion toupper convierte el caracter de la primera posicion (0) del vector cadena a mayuscula;
cout<<frase;
return 0; 
}
