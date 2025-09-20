#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese la cantidad de productos que desea llevar: ";
    cin>>n;
    int lista[n];
    cout<<"Ingrese el precio de cada producto: "<<endl;
    for(int i=0; i<n; i++){
        cin>>lista[i];
        cout<<" ";
    }
    int subtotal=0;
    for(int i=0; i<n; i++){
        subtotal+=lista[i];
    }
    cout<<"El subtotal es: "<<subtotal<<endl;
    float total1=subtotal+subtotal*0.08;
    float total2;
    if (total1>100){
        total2=total1-total1*0.1;
        cout<<"El total a pagar con descuento aplicable es: "<<total2<<endl; 
    }
    else{
        cout<<"El total a pagar sin descuento aplicable es: "<<total1<<endl;
    }
    return 0;
}