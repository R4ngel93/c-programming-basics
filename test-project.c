/**
Programa: test-project.c
Elaborado por: Oscar Rangel.
**/

/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Variables globales*/

/*Prototipos de funciones*/
char myFirstFunction();
void mySecondFunction();
void repeatFunction();

/*Función principal*/
int main(){
    /*Variables locales*/
    int a = 0;
    char input[10] = "test";
    /*Instrucciones*/
    if(strcmp(input,"test") == 0){
        printf("True\n");
    }else{
        printf("False\n");
    }
    a = strcmp(input,"test");
    printf(">> %d",a);

    /*Llamando funciones*/
    printf("El caracter que ud. ingresó fue: %c",myFirstFunction());
    mySecondFunction();
    repeatFunction();
    return 0;
}/*Fin main*/

/*Definición de funciones*/
/*Lee un caracter*/
char myFirstFunction(){
    char myChar;
    printf("\n\nIngrese un caracter: ");
    scanf(" %c",&myChar);
    return myChar;
}
/*Lee un string*/
void mySecondFunction(){
    char myString[10];
    printf("\n\nIngrese un string de máximo 10 caracteres: ");
    scanf(" %s",myString);
    printf("El string que ud. ingresó fue: %s",myString);
}
void repeatFunction(){
    char myChar;
    printf("\n\n¿Desea reiniciar el programa?(Y/N): ");
    scanf(" %c",&myChar);
    if(myChar == 'Y' || myChar == 'y'){
        main();
    }else if(myChar == 'N'||myChar == 'n'){
        exit(0);
    }else{
        printf("\nOpción no válida");
        exit(0);
    }
}
/*Fin definición de funciones*/
/*Fin*/
