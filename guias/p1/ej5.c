#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


/*
Arbol de procesos

Abraham -- Homero -- Bart
                 |-- Lisa
                 |-- Maggie
*/

int sub_proc_bart(){
    printf("Soy Bart!\n");
    exit(EXIT_SUCCESS);
}

int sub_proc_lisa(){
    printf("Soy Lisa!\n");
    exit(EXIT_SUCCESS);
}

int sub_proc_maggie(){
    printf("Soy Maggie!\n");
    exit(EXIT_SUCCESS);
}

int subrutina_proceso_homero(){
    // homero tiene a Bart
    pid_t pid = fork();

    //si es -1, hubo un error
    if (pid == -1) exit(EXIT_FAILURE);  
    
    else if (pid == 0) {
        // si soy el hijo, llamo a bart
        sub_proc_bart();
    }
    else {

        // si no soy el hijo,
        // espero a que el proceos hijo termine
        waitpid(pid);

        // defino un nuedo pid2 y hago un fork()
        // para tener a lisa
        pid_t pid2 = fork();
        if (pid2 == -1) exit(EXIT_FAILURE);  
        else if (pid2 == 0) {

            // si soy el proc hijo, llamo a lisar
            sub_proc_lisa();

        } else {

            // si soy el proc padre, espero a que el proc hijo termine
            waitpid(pid2);

            // declaro un pid3 nuevo y llamo a maggie
            pid_t pid3 = fork();
            if (pid3 == -1) exit(EXIT_FAILURE);
            else if (pid3 == 0){
                sub_proc_maggie();
            } else {
                // si no era maggie, entonces ya termine
                // con todos los hijos y llamo a homero
                waitpid(pid3);

                printf("Soy Homero\n");
                exit(EXIT_SUCCESS); //avisa al so que termino
            }
        }
    }
}


int subrutina_proceso_abraham(){
    printf("Soy Abraham!\n");
    exit(EXIT_SUCCESS); //avisa al so que termino
}

int main(int argc, char const *argv[]){
  pid_t pid = fork();
  //si no hay error, pid vale 0 para el hijo
  //y el valor del process id del hijo para el padre
  if (pid == -1) exit(EXIT_FAILURE);  
  //si es -1, hubo un error
  else if (pid == 0) {
        subrutina_proceso_homero();
  }
  else {
    waitpid(pid); //espero a que termine el hijo
    subrutina_proceso_abraham();
  }
  exit(EXIT_SUCCESS); //cada uno finaliza su proceso
}
