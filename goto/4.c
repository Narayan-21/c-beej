// Multi-level cleanup

#include <stdio.h>

int init_system_1(void) {
    printf("Initializing system 1...\n");
    return 0;
}

int init_system_2(void) {
    printf("Initializing system 2...\n");
    return 0;
}

int init_system_3(void) {
    printf("Initializing system 3...\n");
    return -1;
}

int init_system_4(void) {
    printf("Initializing system 4...\n");
    return 0;
}

void shutdown_system1(void) { printf("Shutting down System 1\n"); }
void shutdown_system2(void) { printf("Shutting down System 2\n"); }
void shutdown_system3(void) { printf("Shutting down System 3\n"); }
void shutdown_system4(void) { printf("Shutting down System 4\n"); }

void do_main_thing(void) {
    printf("All systems initialized successfully! Running main program...\n");
}

int main(void) {
    if (init_system_1() == -1)
        goto shutdown;

    if (init_system_2() == -1)
        goto shutdown_1;

    if (init_system_3() == -1)
        goto shutdown_2;

    if (init_system_4() == -1)
        goto shutdown_3;

    do_main_thing();

    // Normal shutdown (if all succeeded)
    shutdown_system4();

shutdown_3:
    shutdown_system3();

shutdown_2:
    shutdown_system2();

shutdown_1:
    shutdown_system1();

shutdown:
    printf("All subsystems shut down.\n");
    return 0;
}