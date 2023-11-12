#include<iostream>
#include <color.h>
#include <conio.h>
#include <cmath>
#include <iomanip> 
using namespace std;
//declaracion de funciones
void menu_c();
void ingresar_m();
void suma_ma(int , int);
void resta_ma(int, int);
void multi_ma(int, int, int, int);
void matriz_transpuesta(int, int);
int deter_ma();
void ma_adj();
void selec_ma(int, int);
int adjunto_ma();
void matriz_inver();

void reser_1(int , int);
void reser_2(int , int);
void imprimir_m(int**, int, int);
void ingresar_m1(int, int );
void ingresar_m2(int, int );
int **dir_matriz1;
int **dir_matriz2;
int **dir_matriz_t;
bool derivado=false;
void liberar_memoria_reser_1(int**, int );

void escalar_ma(int, int);
void escalador(int, int, int);

int main(){
	setlocale(LC_ALL,"");
	menu_c();
}

//funcion del menu principal
void menu_c(){
	int opcion;
    bool repetir = true;
        
	do{
        system("cls");

   
        color(5,"\n\n\t\t\tMenu de Opciones");
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Suma de matrices" << endl;
        cout << "\t2. Resta de matrices" << endl;
        cout << "\t3. Multiplicacion de matrices" << endl;
        cout << "\t4. Matriz transpuesta" << endl;
        cout << "\t5. Determinante de una Matriz 3x3" << endl;
        cout << "\t6. Matriz adjunta" << endl;
        cout << "\t7. Matriz inversa" << endl;
        cout << "\t8. Escalar de una matriz" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion)
        {
        case 1:
        	//logica de la suma de matrices
        	int filas,columnas;
        	system("cls");
        	color(3,"***Las matrices deben tener el mismo numero de filas y columnas*** ");
        	cout<<"ingrese numero de filas: "; cin>>filas;
			cout<<"ingrese numero de columnas: "; cin>>columnas;
			
			//reserva la memoria para las matrices
			 reser_1(filas, columnas);
			 reser_2(filas, columnas);
			 
			 //funcion que realizara la multiplicacion
            suma_ma(filas, columnas);}
            
            //libera la memoria reservada 
            liberar_memoria_reser_1(dir_matriz1, filas);
            liberar_memoria_reser_1(dir_matriz2, filas);
            system("pause>nul");
            break;

        case 2:
        	//logica de la resta de matrices
        	system("cls");
        	color(3,"***Las matrices deben tener el mismo numero de filas y columnas*** ");
        	cout<<"ingrese numero de filas: "; cin>>filas;
			cout<<"ingrese numero de columnas: "; cin>>columnas;
			
			//reserva la memoria para las matrices
			 reser_1(filas, columnas);
			 reser_2(filas, columnas);
			 
			 //funcion que realizara la resta
    		resta_ma(filas, columnas);
    		
    		//libera la memoria reservada 
            liberar_memoria_reser_1(dir_matriz1, filas);
            liberar_memoria_reser_1(dir_matriz2, filas);
            system("pause>nul");
               break;
               
        case 3:
        	//logica de la multiplicacion de matrices
        	int filas2,columnas2;
        	system("cls");
        	
			cout<<"***La primera matriz debe tener el mismo número de columnas que filas la segunda*** \n"<<endl;
			cout<<"***ingrese tamaño de la primera matriz***\n"<<endl;
			cout<<"ingrese numero de filas: "; cin>>filas;
			cout<<"ingrese numero de columnas: "; cin>>columnas; 
		
			system("cls");
			
			cout<<"***La segunda matriz debe tener el mismo número de filas que columnas la primera*** \n"<<endl;
			cout<<"***ingrese tamaño de la segunda matriz\n***"<<endl;
			cout<<"ingrese numero de filas: "; cin>>filas2;
			cout<<"ingrese numero de columnas: "; cin>>columnas2; 
			//validacion de la condiciones para la multiplicacion de matrices
			if(filas2!=columnas){
				color(4,"las matrices no se pueden multiplicar.");
				system("pause>nul"); 
				break;
			}
			//reserva la memoria para las matrices
			reser_1(filas, columnas);
			reser_2(filas2, columnas2);
			//funcion que realizara la multiplicacion
         	multi_ma(filas, columnas,filas2, columnas2);
         	//libera la memoria reservada 
         	liberar_memoria_reser_1(dir_matriz1, filas);
            liberar_memoria_reser_1(dir_matriz2, filas2);
            system("pause>nul");         
            break;
            
        case 4:
        	system("cls");
        	//logica de para realizar la transpuesta de la matriz
        	color(3,"\t\t\t*** Tranpuesta de matrices cuadradas***");
        	cout << "Ingrese el número de filas: "; cin >> filas;
			cout << "Ingrese el número de columnas: "; cin >> columnas;
			
			//reserva la memoria para las matrices
			reser_1(filas, columnas);
			reser_2(columnas, filas);
			
			//funcion que solicita el numero de filas y columnas
			ingresar_m1(filas, columnas);
			
			// funcion que realizara la transpuesta de la matriz
         	matriz_transpuesta(filas, columnas);
         	
         	//libera la memoria reservada
         	liberar_memoria_reser_1(dir_matriz1, filas);
            liberar_memoria_reser_1(dir_matriz2, filas2);
            system("pause>nul");         
            break;
            
         case 5:
         	//logica de para calcular el determinante de la matriz
		    system("cls");
		    cout << "***Determinante de una matriz 3x3***" << endl;
		    //reserva la memoria para la matriz
			reser_1(3, 3);
			
			//funcion que solicita el numero de filas y columnas
			ingresar_m1(3, 3);
			
			//funcion que calculara el determinante de la matriz
         	deter_ma();
         	
         	//libera la memoria reservada
         	liberar_memoria_reser_1(dir_matriz1, filas);
            system("pause>nul");         
            break;
        case 6:
        	 system("cls");
        	 //logica de para calcular la adjunta de la matriz
		    cout << "***Adjunta de una Matriz 3x3***" << endl;
   			
   			//reserva la memoria para la matriz
         	reser_1(3, 3);
			reser_2(2, 2);
			
			//funcion que calculara la adjunta de una matriz
        	ma_adj();
        	
        	
        	//libera la memoria reservada
        	liberar_memoria_reser_1(dir_matriz1, 3);
            liberar_memoria_reser_1(dir_matriz2, 2);
            liberar_memoria_reser_1(dir_matriz_t,3);
			 system("pause>nul");	       
            break;
        case 7:
        	//logica que calculara la inversa de una mtriz
        	system("cls");
        	color(3,"\t\t\t*** Inversa de matriz 3x3 ***");
        	
        	//reserva la memoria para la matriz
        	reser_1(3, 3);
			reser_2(2, 2);
			
			//solicita los valores de la matriz
			ingresar_m1(3, 3);
        	
        	//funcion que calculara la matriz inversa
         	matriz_inver();
         	derivado=false;
         	
         	//libera la memoria reservada
        	liberar_memoria_reser_1(dir_matriz1, 3);
            liberar_memoria_reser_1(dir_matriz2, 2);
			liberar_memoria_reser_1(dir_matriz_t,3);         	
			  system("pause>nul");	       
            break;
			
		case 8:
			system("cls");
			//logica para calcular el producto escalar
			color(3,"\t\t\t*** producto de un escalar ***");
			cout<<"ingrese numero de filas: "; cin>>filas;
			cout<<"ingrese numero de columnas: "; cin>>columnas;
			
			//reserva la memoria para la matriz
			reser_1(filas, columnas);
			
			//funcion que calculara el producto escalar de la matriz
			escalar_ma(filas,columnas);	
			
			//libera la memoria reservada
			liberar_memoria_reser_1(dir_matriz1, filas);
			  system("pause>nul");
			break;
        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

//funcion principal para realizar la suma de matrices
void suma_ma(int filas, int columnas){
	system("cls");
	
	int matriz_suma[filas][columnas];
	int **dir_matriz_suma;
	
	dir_matriz_suma = new int*[filas];
	for (int i = 0; i < filas; i++) {
	    dir_matriz_suma[i] = new int[columnas];
	}
	
	system("cls");
	cout<<"***Ingrese valores de la primera matriz***"<<endl;
	ingresar_m1( filas, columnas);
	
	cout<<"***Ingrese valores de la segunda matriz***"<<endl;
	system("cls");
	ingresar_m2(filas, columnas);
	
	system("cls");
	for(int i=0; i<filas;i++){
		for(int j=0; j<columnas;j++){
			dir_matriz_suma[i][j]=dir_matriz1[i][j] + dir_matriz2[i][j];
		}
	}
	
	
	cout<<"la suma de las matrices es: "<<endl;
	imprimir_m(dir_matriz_suma,filas,columnas);
	
	liberar_memoria_reser_1(dir_matriz_suma, filas);
getch();
}

//funcion principal para realizar la resta de matrices
void resta_ma(int filas, int columnas){
system("cls");
	
	int matriz_suma[filas][columnas];
	int **dir_matriz_suma;
	
	dir_matriz_suma = new int*[filas];
	for (int i = 0; i < filas; i++) {
	    dir_matriz_suma[i] = new int[columnas];
	}
	
	system("cls");
	cout<<"***Ingrese valores de la primera matriz***"<<endl;
	ingresar_m1( filas, columnas);
	
	cout<<"***Ingrese valores de la segunda matriz***"<<endl;
	system("cls");
	ingresar_m2(filas, columnas);
	
	system("cls");
	for(int i=0; i<filas;i++){
		for(int j=0; j<columnas;j++){
			dir_matriz_suma[i][j]=dir_matriz1[i][j] - dir_matriz2[i][j];
		}
	}
	
	
	cout<<"la suma de las matrices es: "<<endl;
	imprimir_m(dir_matriz_suma,filas,columnas);
	
	liberar_memoria_reser_1(dir_matriz_suma, filas);
getch();
}

//funcion principal para realizar la multiplicacion de matrices
void multi_ma(int filas, int columnas,int filas2, int columnas2){
	
	int **dir_matriz_produc;
	 system("cls");
	 
	color(3,"\t\t\t***Ingrese valores de la primera matriz***");
	ingresar_m1(filas, columnas);
	
	color(3,"\n\t\t\t***Ingrese valores de la segunda matriz***");
	ingresar_m2(filas2, columnas2);
	
	
	
	dir_matriz_produc = new int*[filas];
	for (int i = 0; i < filas; i++) {
	    dir_matriz_produc[i] = new int[columnas2];
	}

	for(int i=0; i<filas;i++){
		for(int j=0; j<columnas2; j++){
			for(int k=0; k<columnas; k++){
				dir_matriz_produc[i][j] += dir_matriz1[i][k] * dir_matriz2[k][j];
			}
		}
	}
	
	color(3,"el producto es: ");
	imprimir_m(dir_matriz_produc, filas, columnas2);
	liberar_memoria_reser_1(dir_matriz_produc, filas2);
	getch();
}

//funcion principal para realizar la transpuesta  de la matriz
void matriz_transpuesta(int filas, int columnas) {
	
	for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            dir_matriz2[j][i] = dir_matriz1[i][j];
        }
    }
    color(3,"la matriz transpuesta es: ");
    imprimir_m(dir_matriz2, filas, columnas);	
}

//funcion  para calcular el determinante de la matriz
int deter_ma(){
	system("cls");
	int acu_N;
	int acu_P;
	int deter=0;
	
	acu_P = ((dir_matriz1[0][0]*dir_matriz1[1][1]*dir_matriz1[2][2]) + (dir_matriz1[0][1]*dir_matriz1[1][2]*dir_matriz1[2][0]) + (dir_matriz1[0][2]*dir_matriz1[1][0]*dir_matriz1[2][1])); 
	acu_N = ((dir_matriz1[2][0]*dir_matriz1[1][1]*dir_matriz1[0][2]) + (dir_matriz1[2][1]*dir_matriz1[1][2]*dir_matriz1[0][0]) + (dir_matriz1[2][2]*dir_matriz1[1][0]*dir_matriz1[0][1]));
	deter = acu_P - acu_N;
	
	color(3,"el determinante de la matris es:");
	cout<<deter<<"\n\n";
	return deter;
}

void ma_adj(){
	if((!derivado)){
		ingresar_m1(3,3);
	}
	
	dir_matriz_t = new int *[3];
    for (int i = 0; i < 3; i++) {
        dir_matriz_t[i] = new int[3];
    }
	
	int k=0;
    for (int m = 0; m < 3; m++){
        for (int n = 0; n < 3; n++) {
        	//seleciona la matriz 2x2
            selec_ma(m, n);
            //calcula la adjunta de la matriz 2x2
            int adjunta = adjunto_ma();
            //aplica el signo segun la posicion en la matriz 3x3
            if(k%2 != 0){
            	adjunta *= -1;
			}
			dir_matriz_t[m][n] = adjunta;
            k++;
        }
    }
	color(3,"la matriz adjunta es:");   
    imprimir_m(dir_matriz_t, 3, 3);
}

void selec_ma(int m, int n){
    int k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == m || j == n) {
                continue;
            } else {
                dir_matriz2[k / 2][k % 2] = dir_matriz1[i][j];
                k++;
            }
            if (k == 4) {
                break;
            }
        }
    }
}

int adjunto_ma() {
    int adjunto;
    adjunto = ((dir_matriz2[0][0] * dir_matriz2[1][1]) - (dir_matriz2[1][0] * dir_matriz2[0][1]));
    return adjunto;
}

void matriz_inver(){

    int determinante = deter_ma();	
	if(determinante == 0){
		color(4,"\nla matriz no tiene inversa.");
		exit(0);
	}
	derivado=true;
	
	ma_adj();
	
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			dir_matriz1[j][i] = dir_matriz_t[i][j];
		}
	}
	color(3,"\nla matris adjunta transpuesta es: \n");
		imprimir_m(dir_matriz1, 3,3);
	
	
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			dir_matriz_t[i][j] = determinante;
		}
	}
		//simplifica la fraccion
		int k=0;
		for(int i=0; i<3;i++){
			for(int j=0; j<3;j++){
				for(int k=2; k<10; k++){
					
					if(dir_matriz1[i][j] != 0){
						if(dir_matriz1[i][j] % k == 0 && determinante % k == 0){
							dir_matriz1[i][j] /= k;
							dir_matriz_t[i][j] /=k;
							k--;
						}	
					}
					
				}
			}
		}
		//asigna el signo a la fraccion
		
		for(int i=0; i<3;i++){
			for(int j=0; j<3;j++){
				if(dir_matriz1[i][j] < 0 && dir_matriz_t[i][j] < 0 || dir_matriz1[i][j] > 0 && dir_matriz_t[i][j] < 0 ){
					dir_matriz1[i][j] *= -1;
					dir_matriz_t[i][j] *= -1;
				}
			}
		}
		//muestra la matriz inversa
	color(3,"\nla matriz inversa es:\n");
	
		for(int i=0; i<3;i++){
			for(int j=0; j<3;j++){
				if(abs(dir_matriz1[i][j]) == abs(dir_matriz_t[i][j]) || dir_matriz1[i][j] == 0){
					cout<<setw(4)<< dir_matriz1[i][j]<<"  ";
				}else{
					cout<<setw(4)<< dir_matriz1[i][j]<<"/"<<dir_matriz_t[i][j]<<"  ";
				}
			}		
			cout<<endl;
		}	
}

//implementacion de funcion para introducir valores en la matriz1
void ingresar_m1(int filas, int columnas){
	for(int i=0; i<filas;i++){
		for(int j=0; j<columnas;j++){
			cout<<"ingresar valor de de la posicion: ["<<i+1<<"]["<<j+1<<"] = ";
			cin>>dir_matriz1[i][j];
		}
	}
}

//implementacion de funcion para introducir valores en la matriz2
void ingresar_m2(int filas, int columnas){
	for(int i=0; i<filas;i++){
		for(int j=0; j<columnas;j++){
			cout<<"ingresar valor de de la posicion: ["<<i+1<<"]["<<j+1<<"] = ";
			cin>>dir_matriz2[i][j];
		}
	}
}

//funcion que reservara la memoria para las matrices
void reser_1(int filas, int columnas){

	dir_matriz1 = new int *[filas];
    for (int i = 0; i < filas; i++) {
        dir_matriz1[i] = new int[columnas];
    }

}

void reser_2(int filas, int columnas){
	dir_matriz2 = new int *[filas];
    for (int i = 0; i < filas; i++) {
        dir_matriz2[i] = new int[columnas];
    }
}

//funcion que eliminara la memoria reservada
void liberar_memoria_reser_1(int** matriz, int filas) {
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

//funcion que imprimira en pantalla la matriz
void imprimir_m(int **matriz, int filas, int columnas ){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<setw(4)<< matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}

//funcion principal para calcular el producto escalar de la matriz
void escalar_ma(int filas, int columnas){
	int escalar;
	ingresar_m1(filas,columnas);
	color(3,"ingrese valor para escalar la matriz"); cin >> escalar;	
	escalador(filas, columnas, escalar);
	system("cls");
	color(3,"el producto escalar es: ");
	imprimir_m(dir_matriz1,filas,columnas);
	getch();
}

//funcion que calculara el producto escalar de la matriz 
void escalador(int filas, int columnas, int escalar){
	for(int i = 0 ; i < filas; i++){
		for(int j = 0 ; j < columnas; j++){
			dir_matriz1[i][j] = dir_matriz1[i][j] * escalar;
		}
	}

}
