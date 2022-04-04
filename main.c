#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    //EJERCICIO 1
    int ejercicio1() {

  Pila DADA;
  Pila AUX1;
  Pila AUX2;

  inicpila(&DADA);
  inicpila(&AUX1);
  inicpila(&AUX2);

  int i;
  for (i=0; i<5; i++){
        leer(&DADA);
  }

  apilar(&AUX1, desapilar(&DADA));
  apilar(&AUX1, desapilar(&DADA));
  apilar(&AUX1, desapilar(&DADA));

  apilar(&AUX2, desapilar(&DADA));
  apilar(&AUX2, desapilar(&DADA));

  printf("\n");
  printf("PILA AUX 1 \n");
  mostrar(&AUX1);

  printf("PILA AUX 2 \n");
  mostrar(&AUX2);

  printf(("PILA DADA \n"));
  mostrar(&DADA);


    }
    //EJERCICIO 2
    int ejercicio2(){

  Pila ORIGEN;
  Pila DESTINO;

  inicpila(&ORIGEN);
  inicpila(&DESTINO);


  char control;

  do{


  leer (&ORIGEN);
  printf("desea seguir ingresando variables a la pila ingrese s \n");
  fflush (stdin);
  scanf("%c", &control);
  }
  while (control=='s');

  while (!pilavacia(&ORIGEN)){

    apilar(&DESTINO, desapilar(&ORIGEN));
  }


    mostrar (&ORIGEN);
    mostrar(&DESTINO);

  }
    //EJERCICIO 3
    int ejercicio3 (){

  Pila DADA;
  Pila DISTINTOS;
  Pila ESPERA;

  inicpila (&DADA);
  inicpila (&DISTINTOS);
  inicpila (&ESPERA);


  char control;

  do{
  leer (&DADA);
  printf("si desea seguir ingresando valores apreta s ");
  fflush(stdin);
  scanf("%c",&control);

  }
  while(control=='s');

  while(!pilavacia(&DADA)){

    if (tope(&DADA)==8){

        apilar(&DISTINTOS, desapilar(&DADA));

    }

    else{

      apilar(&ESPERA, desapilar(&DADA));

    }

    }

    while(!pilavacia(&ESPERA)){

        apilar (&DADA, desapilar(&ESPERA));
    }


    mostrar(&DADA);

    mostrar(&DISTINTOS);

}
    //EJERCICIO 4
    int ejercicio4(){

    Pila ORIGEN;
    Pila DESTINO;
    Pila ESPERA;

    inicpila(&ORIGEN);
    inicpila(&DESTINO);
    inicpila(&ESPERA);

    char control;

    do{
        leer (&ORIGEN);
        printf("si desea seguir ingresando valores apreta s \n");
        fflush(stdin);
        scanf("%c",&control);

    }
    while(control=='s');

    while(!pilavacia(&ORIGEN)){
        apilar (&ESPERA, desapilar(&ORIGEN));


    }
    while(!pilavacia(&ESPERA)){

        apilar (&DESTINO, desapilar(&ESPERA));
    }
        printf("ORIGEN\n");
        mostrar(&ORIGEN);

        printf("DESTINO\n");
        mostrar(&DESTINO);
    }
    //EJERCICIO 5
    int ejercicio5 (){

    Pila ORIGEN;
    Pila AUX1;
    Pila AUX2;

    inicpila(&ORIGEN);
    inicpila(&AUX1);
    inicpila(&AUX2);

    char control;

    do{
        leer (&ORIGEN);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control);

    }
    while(control=='s');

    while(!pilavacia(&ORIGEN)){
        apilar (&AUX2, desapilar(&ORIGEN));
    }
    while(!pilavacia(&AUX2)){
        apilar (&AUX1, desapilar(&AUX2));
    }

    while(!pilavacia(&AUX1)){
        apilar (&ORIGEN, desapilar(&AUX1));
    }
        printf("\n");
        printf("ORIGEN");
        mostrar(&ORIGEN);
  }
    //EJERCICIO 6
    int ejercicio6 (){

        Pila DADA;
        Pila AUX1;
        Pila AUX2;

        inicpila (&DADA);
        inicpila (&AUX1);
        inicpila (&AUX2);

         char control;

    do{
        leer (&DADA);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control);

        }
    while(control=='s');

    apilar(&AUX1, desapilar(&DADA));

    while(!pilavacia(&DADA)){
        apilar(&AUX2, desapilar(&DADA));
        }
    apilar(&DADA, desapilar(&AUX1));

    while(!pilavacia(&AUX2)){
        apilar(&DADA, desapilar(&AUX2));
    }
    mostrar(&DADA);

}
    //EJERCICIO 7
    int ejercicio7 (){

        Pila DADA;
        Pila AUX1;
        Pila AUX2;

        inicpila(&DADA);
        inicpila(&AUX1);
        inicpila(&AUX2);

    char control;

    do{
        leer (&DADA);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control);

    }
    while(control=='s');

        printf("Esta es la pila que iniciaste\n");
        mostrar (&DADA);

    while(!pilavacia(&DADA)){
        apilar(&AUX1, desapilar(&DADA));

    }
    apilar(&AUX2, desapilar(&AUX1));

    while(!pilavacia(&AUX1)){
        apilar(&DADA,desapilar(&AUX1));
    }

    apilar(&DADA, desapilar(&AUX2));

    printf("Esta es la pila DADA\n");
    mostrar(&DADA);

    }
    //EJERCICIO 8
    int ejercicio8 (){

        Pila mazo,jugador1,jugador2;
        inicpila(&mazo);
        inicpila(&jugador1);
        inicpila(&jugador2);

     char control;

     do{
        leer (&mazo);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control);

    }
    while(control=='s');

    while(!pilavacia(&mazo)){
        apilar(&jugador1,desapilar(&mazo));
        if (!pilavacia(&mazo)){
            apilar(&jugador2,desapilar(&mazo));
        }
    }
    printf("Jugador 1\n");
    mostrar(&jugador1);

    printf("Jugador 2\n");
    mostrar(&jugador2);
  }
    //EJERCICIO 9
    int ejercicio9 (){

        Pila pila1;
        Pila pila2;
        inicpila(&pila1);
        inicpila(&pila2);
        Pila AUX1;
        Pila AUX2;
        inicpila(&AUX1);
        inicpila(&AUX2);

         char control;

    do{
        printf("ingresa los datos a la pila A\n");
        leer (&pila1);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control);

    }
    while(control=='s');

     char control2;

    do{
        printf("ingresa los datos a la pila B\n");
        leer (&pila2);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control2);

    }
    while(control2=='s');

    while ((!pilavacia(&pila1))&& (!pilavacia(&pila2))){
        apilar(&AUX1,desapilar(&pila1));
        apilar(&AUX2,desapilar(&pila2));

    }
     if (pilavacia(&pila1) && pilavacia(&pila2)){
            printf("Las pilas son iguales");
            }
        else if (pilavacia (&pila1)&& !pilavacia(&pila2)){
            printf("La pila 2 tiene mas datos");
            }

        else {
            printf("la pila 1 tiene mas datos");
        }

    }
    //EJERCICIO 10
    int ejercicio10 (){

        Pila pila1,pila2,aux1,aux2;
        inicpila(&pila1);
        inicpila(&pila2);
        inicpila(&aux1);
        inicpila(&aux2);

        char control;
    do{
        printf("ingresa los datos a la pila A\n");
        leer (&pila1);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control);

    }
    while(control=='s');

     char control2;
    do{
        printf("ingresa los datos a la pila B\n");
        leer (&pila2);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control2);
    }
    while(control2=='s');

    while (!pilavacia(&pila1)&& !pilavacia(&pila2)&& tope(&pila1)==tope(&pila2)){
        apilar(&aux1,desapilar (&pila1));
        apilar(&aux2,desapilar(&pila2));
    }

    if(!pilavacia(&pila1)|| !pilavacia(&pila2)){
                printf("Las pilas son diferentes");
            }
            else{
                printf ("Las pilas son iguales");
            }

    }
    //EJERCICIO 11
    int ejercicio11(){
        Pila pila1,pila2,aux1,aux2;
        inicpila(&pila1);
        inicpila(&pila2);
        inicpila(&aux1);
        inicpila(&aux2);

        printf ("indicar el numero del tope de la Pila 1\n");
        leer (&pila1);
    char control;
         do{
        printf("ingresa los datos a la Pila 2 \n");
        leer (&pila2);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control);

    }
    while(control=='s');

    while (!pilavacia(&pila1) && !pilavacia(&pila2) )
        {
        if (tope (&pila1)==tope(&pila2)){
            apilar(&aux1,desapilar(&pila2));
        }
        else
        {
            apilar(&aux2,desapilar(&pila2));
        }
        }
        while(!pilavacia(&aux2))
        {
            apilar(&pila2, desapilar(&aux2));
        }
        printf("esta es la pila numero 2\n");
        mostrar(&pila2);

    }
    //EJERCICIO 12
    int ejercicio12(){

        Pila dada,modelo,aux1,aux2,eliminados;
        inicpila(&dada);
        inicpila(&modelo);
        inicpila(&aux1);
        inicpila(&aux2);
        inicpila(&eliminados);

    char control1;
         do{
        printf("ingresa los datos a la dada \n");
        leer (&dada);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control1);

    }
    while(control1=='s');

    char control2;
         do{
        printf("ingresa los datos a la modelo \n");
        leer (&modelo);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control2);

    }
    while(control2=='s');


        while(!pilavacia(&modelo))
        {
            while(!pilavacia(&dada))
            {
                if(tope(&dada)==tope(&modelo))
                {
                    apilar(&eliminados,desapilar(&dada));
                }
                else
                {
                    apilar(&aux1,desapilar(&dada));
                }
            }
            apilar(&aux2,desapilar(&modelo));
            while(!pilavacia(&aux1))
            {
                apilar(&dada,desapilar(&aux1));
            }
        }
        printf("Todos los elementos que compartian dada y modelo fueron eliminados de dada");
        mostrar(&dada);

    }
    //EJERCICIO 13
    int ejercicio13(){
        Pila dada,limite,mayores,menores;

        inicpila(&dada);
        inicpila(&limite);
        inicpila(&mayores);
        inicpila(&menores);



        printf("ingresa el tope de la pila limite \n");
        leer (&limite);

         char control1;
         do{
        printf("ingresa los datos a la pila dada \n");
        leer (&dada);
        printf("si desea seguir ingresando valores apreta s\n");
        fflush(stdin);
        scanf("%c",&control1);

        }
        while(control1=='s');


        while(!pilavacia(&dada))
        {
            if(tope(&limite)<=tope(&dada))
            {
                apilar(&mayores,desapilar(&dada));
            }
        else
        {
            apilar(&menores,desapilar(&dada));
        }


        }
        printf("los valores fueron llevados a sus respectivas pilas\n\n");
        printf("Pila Mayores\n");
        mostrar(&mayores);
        printf("Pila Menores\n");
        mostrar(&menores);
    }
    int ejercicio14(){
        Pila dada,aux,par,impar;
        inicpila(&dada);
        inicpila(&aux);
        inicpila(&par);
        inicpila(&impar);

        int contador=0;
        char control1;
         do{
            printf("ingresa los datos a la pila dada \n");
            leer (&dada);
            contador=contador+1;
            printf("si desea seguir ingresando valores apreta s\n");
            fflush(stdin);
            scanf("%c",&control1);
           }
        while(control1=='s');

        char control2;
        do{
            printf("ingresa los datos a la pila aux\n");
            leer (&aux);
            printf("si desea seguir ingresando valores apreta s\n");
            fflush(stdin);
            scanf("%c",&control2);
        }
        while(control2=='s');

        int modulo= contador%2;
        while(!pilavacia(&aux))
        {
            if (modulo==0)
            {
                apilar(&par,desapilar(&aux));
            }
            else
            {
                apilar(&impar,desapilar(&aux));
            }
        }
        printf("Pila dada\n\n");
        mostrar(&dada);
        printf("Pila aux\n\n");
        mostrar(&aux);
        printf("Pila par\n\n");
        mostrar(&par);
        printf("Pila impar\n\n");
        mostrar(&impar);

    }
    int ejercicio15(){
    printf("¿Cuál es la condición del siguiente ciclo? ¿Cuándo finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas): \n");

    printf("Respuesta: La condicion del ciclo es apilar en pila2 y desapilar en descarte mientras haya algun elemento en pila1, el ciclo finaliza cuando pila1 este vacia");

    printf("¿Que realiza el siguiente código escrito en lenguaje C (Pila1, Aux y Result son pilas:")

    printf("el siguiente codigo apila en &result, y desapila el elemento de &aux, si el tope de la pila 1 es cinco.Mientras que haya algun elemento en la pila 1");
    }
}















