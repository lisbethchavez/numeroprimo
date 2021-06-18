#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
//Se ingresa un entero por teclado. Se desea determinar si el numero ingresado es primo o no
using namespace std;

int main() {
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    bool band = true;
    int i =2;
    while(band==true && i<num ){
        if(num%i==0){
            band=false;
        }else{
            i++;
        }
    }
    if(band==true){
        cout<<"El numero ingresado es primo"<<endl;
    }else{
        cout<<"El numero ingresado no es primo"<<endl;
    }
    cout<<band<<endl;

    return 0;
}
