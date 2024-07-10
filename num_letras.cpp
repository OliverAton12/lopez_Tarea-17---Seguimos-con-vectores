//fecha: 9/07/24
////Autor:Lopez Quiroz Wagner
//tema:  Programa que transforma un número entero en su equivalente en letras - primera parte (realizado en clases)
#include<iostream>
 
using namespace std;
const string unidades[]={"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve", "diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
const string decenas[]={"diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"}
string Getunidades(int num)
{

    return unidades[num];
}
int mai()
{
    int num = 8;
    string resultado = Getunidades(num);
    cout<<endl<<num << "en letras es "<<resultado;




    return 0;
}