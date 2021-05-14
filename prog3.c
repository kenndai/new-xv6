#include "types.h"
#include "stat.h"
#include "user.h"

//burst time should be similar throughout all three processes

int main(int argc, char* argv[]) {
    set_priority(3);
    int i, k;
    for (i = 0; i < 43000; i++) {
        asm("nop");
        for (k = 0; k < 43000; k++) {
            asm("nop");
        }
    }
    printf(1, "prog3: ");
    exit(); //will print out turnaroundTime, burstTime, and waiting time
}