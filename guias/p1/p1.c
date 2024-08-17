
/*

Implementar la rutina Ke_context_switch(PCB* pcb_0, PCB* pcb_1), encargada de realizar el
cambio de contexto entre dos procesos (cuyos programas ya han sido cargados en memoria) 
debido
a que el primero ha consumido su quantum.


int ke_current_user_time(); // devuelve el valor del cronómetro
void ke_reset_current_user_time(); // resetea el cronómetro
void ret(); // desapila el tope de la pila y reemplaza el PC
void set_current_process(int pid) // asigna al proceso con el pid como el siguiente
a ejecutarse

*/


void ke_context_switch_(PCB* pcb_0, PCB* pcb1){

    /* Para hacer un cambio de contexto, tenemos que reemplazar
    todos los registros y el ip, como ya estan cargados en memoria
    no nos preocupamos por ese paso
    */

   // guardamos todos los registros actuales
   // idem la pila
   pcb_0.R0 = R0
   ...
   pcb_0.R15 = R15
   pcb_0.PC = PC

   // cargamos los nuevos registros
   // idem la pila
    R0 = pcb_1.R0
    ...
    R15 = pcb_1.R15 

    set_current_process(pcb_1.P_ID)
    push(pcb1.PC) //pushea a la pila el PC nuevo a desapilar
    ke_reset_current_user_time() //arranca un nuevo quantum para el proceso nuevo
    ret()
}