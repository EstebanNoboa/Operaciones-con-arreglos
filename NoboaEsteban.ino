/*
 * ^^^^^^^^^^^^Deber usando matriz o array de 10x4^^^^^^^^^^^^^^^
 * Nombre: Esteban Noboa
 * Fecha: 5/11/2018
 */

  const int filas=10;
  const int columnas=4;
int matrizDato[filas][columnas]= { // define la distribucion de la matriz
{3,5,-6,7}, 
{3,8,6,17}, 
{2,-4,4,27}, 
{2,4,8,10}, 
{2,4,-2,5}, 
{4,5,6,7}, 
{5,-8,6,-7}, 
{1,5,16,8}, 
{0,5,12,7}, 
{4,5,16,7}
};

double sumafilas, sumacolumnas;
int mayor=0;
int sumatotal;
int menor;

void setup() {
  Serial.begin(9600);
}

void loop() {
 visualizar(); //llamado a la accion visualizar
 mayorfilas(); //llamado  a la accion de verificar el mayor numero en cada fila
 menorcolumnas();
 promediofilas();
 promediocolumnas();
 masalto();
 masbajo();
 
}


void visualizar(){
  Serial.println("***********MATRIZ**************");
  for (int i=0; i <filas; i++) { //ciclo for para graficar filas
      for (int n=0;n<columnas;n++) { //ciclo for para graficar columnas
          Serial.print(matrizDato [i][n]); //imprimir las filas y columnas
          Serial.print(" / "); //separacion entre numeros de la matriz
        }
    Serial.println();   
    }
  Serial.println ("-----------------------------------------------------");  
  delay(1000);
 }


 void mayorfilas(){
 Serial.println("***********NUMERO MAYOR EN CADA FILA**************");
   for(int i=0;i<columnas;i++){ //for para leer la primera fila
     if(matrizDato[0][i] > mayor){ //compracion con la variable mayor
        mayor=matrizDato[0][i]; //se asigna la variable mayor al numero que especifica la primera fila del array
      }
     }
     Serial.print("Mayor numero primera fila: ");
     Serial.println(mayor); //imprime variable mayor, gracias al if de compraciones y al for que la contiene compara cada numero de la primera fila y determina el mas grande
      delay(1000);
    mayor=0;
        //*******DEMAS FUNCIONAN DE UNA MANERA SIMILAR*******
  
   for(int i=0;i<columnas;i++){
     if(matrizDato[1][i] > mayor){
        mayor=matrizDato[1][i];
      }
     }
     Serial.print("Mayor numero segunda fila: ");
     Serial.println(mayor);
      delay(1000);
mayor=0;
   for(int i=0;i<columnas;i++){
     if(matrizDato[2][i] > mayor){
        mayor=matrizDato[2][i];
      }
     }
     Serial.print("Mayor numero tercera fila: ");
     Serial.println(mayor);
      delay(1000);
mayor=0;
   for(int i=0;i<columnas;i++){
     if(matrizDato[3][i] > mayor){
        mayor=matrizDato[3][i];
      }
     }
     Serial.print("Mayor numero cuarta fila: ");
     Serial.println(mayor);
      delay(1000);
mayor=0;
    for(int i=0;i<columnas;i++){
     if(matrizDato[4][i] > mayor){
        mayor=matrizDato[4][i];
      }
     }
     Serial.print("Mayor numero quinta fila: ");
     Serial.println(mayor);
      delay(1000);
mayor=0;
   for(int i=0;i<columnas;i++){
     if(matrizDato[5][i] > mayor){
        mayor=matrizDato[5][i];
      }
     }
     Serial.print("Mayor numero sexta fila: ");
     Serial.println(mayor);
      delay(1000);
mayor=0;
   for(int i=0;i<columnas;i++){
     if(matrizDato[6][i] > mayor){
        mayor=matrizDato[6][i];
      }
     }
     Serial.print("Mayor numero septima fila: ");
     Serial.println(mayor);
      delay(1000);
mayor=0;
   for(int i=0;i<columnas;i++){
     if(matrizDato[7][i] > mayor){
        mayor=matrizDato[7][i];
      }
     }
     Serial.print("Mayor numero octava fila: ");
     Serial.println(mayor);
      delay(1000);
mayor=0;
   for(int i=0;i<columnas;i++){
     if(matrizDato[8][i] > mayor){
        mayor=matrizDato[8][i];
      }
     }
     Serial.print("Mayor numero novena fila: ");
     Serial.println(mayor);
      delay(1000);
mayor=0;
    for(int i=0;i<columnas;i++){
     if(matrizDato[9][i] > mayor){
        mayor=matrizDato[9][i];
      }
     }
     Serial.print("Mayor numero decima fila: ");
     Serial.println(mayor);
      delay(1000);
mayor=0;
   Serial.println("---------------------------------------");
  }
   

void promediofilas(){ //PROMEDIO para los numeros de cada fila
 Serial.println("*******PROMEDIO FILAS********");
  for(int i=0;i<filas;i++){ //se registro cada fila
    sumafilas=0; //para que el numero sumado no se sume de nuevo a si mismo
      for(int j=0;j<columnas;j++){ //se registra los numeros en las columnas
        sumafilas += matrizDato[i][j];//sumafilas + nuevo numero en la fila de la matriz
          delay(250);
        }
      Serial.print("Promedio de filas ");
      Serial.print(i+1);
      Serial.print(":    ");
      Serial.println(sumafilas/columnas); //la suma se saca promedio
    }
    Serial.println("---------------------------------------");
}

void promediocolumnas(){ //proceso simular solo cambio en los ciclos for y en la condicional if
  Serial.println("*******PROMEDIO COLUMNAS********");
  for(int i=0;i<columnas;i++){
    sumafilas=0;
      for(int j=0;j<filas;j++){
        sumafilas += matrizDato[j][i];
          delay(200);
        }
      Serial.print("Promedio de filas ");
      Serial.print(i+1);
      Serial.print(":    ");
      Serial.println(sumafilas/filas);
    }
    Serial.println("---------------------------------------");
       delay(1000);
  }


void masalto(){ //numero de mayor valor en toda la amtriz
 Serial.println("****NUMERO MAS ALTO EN LA MATRIZ*****");
   for(int i=0;i<filas;i++){ //revisa las filas
    for(int j=0;j<columnas;j++){ //columnas
     if(matrizDato[i][j] > mayor){ //tenemos un mayor=0 por lo que abra cambio con la primera entrada de la amtriz, asi habra cambio en la variable mayor cada vez que aparesca un numero por ensima del anterior
        mayor=matrizDato[i][j];
      }}
     }
     Serial.print("Mayor numero del array: ");
     Serial.println(mayor);
    Serial.println("---------------------------------------");
      delay(1000);
  }

void masbajo(){ //numero mas bajo de la amtriz
 Serial.println("****NUMERO MAS BAJO EN LA MATRIZ*****");
  menor=mayor; //se igual mayor con la variable menor, mayor conserva como valor al mayor numero de la matriz aun
   for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        if(menor>=matrizDato[i][j]){ //al tener de valor el numero mas alto de la variable la condicion se cumplira hasta encontraar al menor
          menor=matrizDato[i][j]; //compara y si el numero en la matriz es menor o igual al del numero mas alto se cambia el valor
          }
      }
    }
     Serial.print("menor numero del array: ");
     Serial.println(menor);
    Serial.println("---------------------------------------");
      delay(10000);
  }

void menorcolumnas(){ 
 Serial.println("***********MENOR NUMERO EN CADA COLUMNA**************");
  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
     if(matrizDato[i][j] > mayor){
        mayor=matrizDato[i][j];
      }}
     }//se trajo de nuevo al codigo para obtener al mayor numero de la matriz en la variable mayor
     
 menor=mayor; //iguala menor con mayor
    for(int i=0;i<columnas;i++){ //comparacion igual que el anterior caso
  menor=0;
      for(int j=0;j<filas;j++){
        if(menor>matrizDato[j][i]){
        menor = matrizDato[j][i];
          }
        }
      Serial.print("Numero menor en filas: ");
      Serial.print(i+1);
      Serial.print(":    ");
      Serial.println(menor);
       delay(500);
    }
    Serial.println("---------------------------------------");
    delay(1000);
  }

