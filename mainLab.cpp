#include <iostream>

using namespace std;

void inicioDomingo();

int main(){

    int opcion = 0;
    do{
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        if(opcion == 1){
        	cout << "hola";
        	inicioDomingo();
        }
        if(opcion == 2){
        	cout << "Entro 2" << endl;
        }

        if(opcion == 3){
        	cout << "Entro 3" << endl;
        }
        cout << "Desea seguir? 1-Si, 0-No"<< endl;
    }//fin de do-while
    while(opcion != 0 && opcion > 4);
    return 0;
}//fin main

void inicioDomingo(){
    int anioBisiesto = 3;
    int diasDelMes = 0;
    int cantidadDomingos = -1;
    int diasDeSemana = 2;
    for (int indexAnios = 1900; indexAnios <=2000; ++indexAnios)
    {
        if(indexAnios % 4 == 0){
            anioBisiesto = 4;
        }else{
            anioBisiesto = 0;
        }

        //verificar meses
        for (int meses = 1; meses <= 12 ; ++meses)
        {
            if(meses == 1 || meses == 3 || meses == 5 || meses == 7 || meses == 8 || meses == 10 || meses == 12){
                diasDelMes == 31;
            }
            if(meses = 4 || meses == 6 || meses == 9 || meses == 11){
                diasDelMes = 30;
            }
            if(meses == 2){
                diasDelMes == 28;
                if(meses == 2 && anioBisiesto == 4){
                    diasDelMes == 29;
                }
            }
        }//fin for de meses

        //verifica los dias de la semana
        for (int cantidadDias = 1; cantidadDias < diasDeSemana; ++cantidadDias)
        {
            if(cantidadDias == 1 && diasDeSemana == 1){
                    cantidadDomingos++;
            }

            if(cantidadDomingos == 7){
                diasDeSemana == 1;
            }else{
                diasDeSemana++;
            }
        }
    }
    cout << "La cantidad de meses que inician con Domingo son: " << cantidadDomingos << endl;
}
