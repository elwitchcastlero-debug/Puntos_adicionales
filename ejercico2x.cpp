#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int lista[10];
    int suma=0;
    cout<<"Tenemos 10 conductores"<<endl;
    cout<<"Ingrese la distancia recorrida por cada conductor en un dia: "<<endl;
    for(int i=0; i<10; i++){
        cin>>lista[i];
        suma+=lista[i];
    }
    float promedio;
    promedio=suma/10.00;
    cout<<"El promedio de distancia recorrida por los conductores es: "<<promedio<<endl;
    for(int i=0; i<9; i++)
        for(int j=i+1; j<10; j++)
            if(lista[i]>lista[j]){
                int aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;
            }
    for(int i=0; i<10; i++){
        cout<<lista[i]<<" ";
    }
    cout<<endl;
    cout<<"El conductor que recorrio mas distancia es: "<<lista[9]<<endl;
    return 0;
}