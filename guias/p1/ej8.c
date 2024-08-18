#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


/*
Que esta pasando? 
El fork hace una clonacion exacta del proceso
pero son procesos distintos con memorias distintas
entonces no importa que el proceso hijo modifique
el valor 'dato' porque el proceso 'padre' no se
va a enterar jamas y viceversa.
*/

int main(int argc, char const *argv[]){
    int dato = 0;
    pid_t pid = fork();
    //si no hay error, pid vale 0 para el hijo
    //y el valor del process id del hijo para el padre
    if (pid == -1) exit(EXIT_FAILURE);
    //si es -1, hubo un error
    else if (pid == 0) {
        for (int i=0; i< 3; i++) {
            dato++;
            printf("Dato hijo: %d\n", dato);
        }
    }
    else {
        for (int i=0; i< 3; i++) {
            printf("Dato padre: %d\n", dato);
        }
    }
    exit(EXIT_SUCCESS); //cada uno finaliza su proceso
}