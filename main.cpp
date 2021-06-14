#include <iostream>
#include <cstdlib>
#include <cstdio>


using namespace std;
#include"Menu.h"
int main(){
    int opc, i;
    bool Cargo=false;
    int v[5];
    while(true){
        system("cls");
        for(i=1;i<40;i++)cout<<(char)205;
        cout<<endl;
        cout << "1. CARGAR VECTOR" << endl;
        cout << "2. MOSTRAR VECTOR" << endl;
        cout<<  "3. SUMAR COMPONENTES DEL VECTOR"<<endl;
        cout<<  "0. TERMINAR EL PROGRAMA"<<endl;
        for(i=1;i<40;i++)cout<<(char)205;
        cout <<endl<<endl<< "INGRESE UNA OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cout<<"INGRESE 5 NUMEROS: "<<endl;
                    CargarVector(v,5);
                    Cargo=true;
                    break;
            case 2: if (Cargo==true){
                    cout<<"LOS NUMEROS INGRESADOS SON: "<<endl;
                    MostrarVector(v,5);}
                    else {cout << "NO SE HAN INGRESADO NUMEROS"<< endl;}
                    break;
            case 3: cout<<"LA SUMA DE LOS NUMEROS INGRESADOS ES: "<< sumarVector(v,5)<<endl;

                    break;
            case 0: cout<<"GRACIAS POR USAR NUESTRO PROGRAMA!"<<endl;
                    return 0;
                    break;
        }
        cout<<endl;
        system("pause");
    }
    return 0;
}
