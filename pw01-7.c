#include <stdio.h>
int load_mem(){
    printf("MEM_OK");
}
int load_cpu(){
    printf("CPU_OK");
}
int main(void){
    printf("BOOT:");
    load_mem();
    printf("|");
    load_cpu();
    printf(":END");
    return 0;
}
