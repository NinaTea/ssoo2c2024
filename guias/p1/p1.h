

struct PCB {
int STAT; // valores posibles KE_RUNNING, KE_READY, KE_BLOCKED, KE_NEW
int P_ID; // process ID
int PC; // valor del PC del proceso al ser desalojado
int RO; // valor del registro R0 al ser desalojado
...
int R15; // valor del registro R15 al ser desalojado
int CPU_TIME // tiempo de ejecución del proceso
};