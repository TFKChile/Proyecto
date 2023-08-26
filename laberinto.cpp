#include <iostream>
#include <cstdlib>
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
       Matriz[1][1] = 0;
       Matriz[Columnas - 2][Filas - 1] = 0;
    }

    //rellenamos el laberinto por dentro de manera aleatoria 

    srand(time(0));
    for (int i = 1; i < Filas - 1; i++) {
        for (int j = 1; j < Columnas - 1; j++) {
            // Generamos un número aleatorio entre 0 y 1
            Matriz[i][j] = rand() % 2;
        }
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
    Laberinto(50 , 50);
    system("pause"); 
}