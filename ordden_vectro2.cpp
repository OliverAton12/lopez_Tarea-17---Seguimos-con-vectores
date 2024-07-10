//fecha: 9/07/24
////Autor:Lopez Quiroz Wagner
//tema: Programa que ordena un vector de cadenas de caracteres. (realizado en clases).
#include<iostream>
 
using namespace std;
 
//Ordena el vector de string usando el algortimo de ordenación secuencial
void OrdenSecuencial(string x[], int total)
{
  for(int k=0; k < total; k++)
  {
    for(int j=k+1; j < total; j++)
    {
      if(x[k] > x[j])
      {
        //intercambiar los valores
        string aux = x[k];
        x[k] = x[j];
        x[j] = aux;
      }
    }
  }
}
 
//Imprime los elementos del vector
void ImprimeVector(string x[], int total)
{
  for(int k=0; k <total; k++)
  {
    cout<<endl<<x[k];
  }
}
 
int main()
{
    const int MAX=10;
    string nombres[] ={"Mateo", "Sofía", "Lucas", "Isabella", "Sebastián", "Valentina", "Martín", "Camila", "Julián", "Emilia"};
    cout<<endl<<"lista de estudiantes: ";
    ImprimeVector(nombres, MAX );
    
    cout<<endl<<"lista de ordenacion de estudiantes";
     OrdenSecuencial(nombres, MAX);
     ImprimeVector(nombres, MAX );

  return 0;
}