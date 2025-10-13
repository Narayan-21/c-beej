// A signal is raised on variety of external events.
// These events on C specs are as follows :
// SIGABRT: Abnormal termination—what happens when abort() is called.
// SIGFPE: Floating point exception.    SIGILL: Illegal instruction.    
// SIGINT: Interrupt—usually the result of CTRL-C being hit.
// SIGSEGV: "Segmentation violation": invalid memory access
// SIGTERM : termination requested.

// signal() takes 2 args: the signal in question & action to take when the signal is raised.
// action can be one of the three -- a pointer to the handler function, SIG_IGN to ignore the signal, SIG_DFL to restore the default handler for the signal

#include <stdio.h>
#include <signal.h>

int main(void) {
    char s[1024];

    signal(SIGINT, SIG_IGN);
    printf("Try hitting ^C... (hit RETURN to exit)\n");
    fgets(s, sizeof s, stdin);
}