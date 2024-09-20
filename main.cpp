#include <iostream>
using namespace std;
//Funciones
double analizarRango(double valor){
    if (valor<1 || valor>10){
        cout<<"Rango no permitido.";
    }else{
        cout<<"Esta en el rango permitido.";
    }
    return valor;
}

double analizarPromedio(double nota){
    if (nota>=7){
        cout<<"Aprobado.";
    }else if (nota>=5 && nota<7){
        cout<<"Suspendido.";
    }else if(nota>=1 && nota<5){
        cout<<"Reprobado.";
    }
    return nota;
}

//MAIN
int main (){
    double nota;
    double deberes,trabajos,pruebas,examenes;

    cout<<"Ingresar la nota de deberes: ";
    cin>>deberes;
    cout<<"Ingresar la nota de trabajos: ";
    cin>>trabajos;
    cout<<"Ingresar la nota de pruebas: ";
    cin>>pruebas;
    cout<<"Ingresar la nota de examenes: ";
    cin>>examenes;

    double promedio =(deberes+trabajos+pruebas+examenes)/4;

    analizarRango(promedio);

    cout<<endl;

    cout<<"El estado academico es ";
    nota = analizarPromedio(promedio);

    cout<<"\nEl promedio del estudiante es "<<nota<<"."<<endl;


    return 0;
}
