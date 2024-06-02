#include<iostream>

using namespace std;

int main()

{
    //Use un bucle for
    //Imprima 10 veces un mensaje de bienvenida
    int k;
    for (k=1; k<=10; k++) //k++ es k=k+1
    {
        cout<<"hola, el valor de es: "<< k <<endl;
    }
    cout<<endl<<"El valor final de la variable k es"<<k;

    //Imprimir los 12 primeros multiplos de 2
    //Primera forma
    cout<<"Primera forma"<<endl;
    for (k=1; k<=10; k++) //k++ es k=k+1
    {
        cout<<endl<<"El valor final de la variable k es: "<<k*2;
    }
    
    //Imprimir los 12 primeros multiplos de 2
    //Segunda forma
    cout<<"Segunda forma"<<endl;
    for (k=1; k<=10; k+=2) //k++ es k=k+1
    {
        cout<<"hola, el valor de es: "<< k <<endl;
    }

    return 0;
    
}