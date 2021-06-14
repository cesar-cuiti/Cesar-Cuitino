#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

void CargarVector(int v[], int tam)
{
    int i, Num;
    for (i=0; i<tam; i++)
    {
        cout << "Ingrese numero: ";
        cin >> Num;
        v[i]=Num;
    }}
int sumarVector(int v[], int tam ){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;}

void MostrarVector(int v[], int tam){
    int i;
    for (i=0; i<tam; i++)
    {
        cout << v[i] << endl;
    }
    }


#endif // MENU_H_INCLUDED
