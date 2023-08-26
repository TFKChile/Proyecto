#include <iostream>
#include <ctime>

using namespace std;

void Laberinto(int Filas, int Columnas){
    int **Matriz;
    Matriz = new int *[Filas];

    for (int i = 0; i<Filas; i++){
        Matriz[i] = new int[Columnas];
    }
    //paredes
    for (int i = 0 ; i<Filas ; i++){
        for(int j = 0 ; j < Columnas; j++){
            if(i == 0 || j == 0 || i == Filas - 1 || j == Columnas - 1){
                Matriz[i][j] = 1; //usamos 1 para representar los cuadros pintados
            }
            else{
                Matriz[i][j] = 0; //usamos 0 para representar los espacios en blanco
            }
        }
        //iniciamos las entradas y salidas del laberinto
       Matriz[1][0] = 0;
       Matriz[Columnas - 2][Filas - 1] = 0;
    }

    //mostramos el laberinto
	for (int i = 0; i < Filas; i++) {
		for (int j = 0; j < Columnas; j++) {
			if (Matriz[i][j] == 1) {
				char Mostrar = 219; 
				cout << Mostrar; 
			}
			if(Matriz[i][j] == 0) {
				cout << " ";
			}
		}
		cout << endl; 
	}
}
int main(){
    Laberinto(10 , 10);
    system("pause"); 
}