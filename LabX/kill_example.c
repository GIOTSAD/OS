#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_signal(int sig) {
    printf("Child process received signal %d\n", sig);
}

int main() {
    if (fork() == 0) {
        // Child process
        signal(SIGUSR1, handle_signal);
        pause(); // Περιμένει το σήμα
    } else {
        // Parent process
        sleep(1);
        printf("Parent sending signal to child\n");
        kill(0, SIGUSR1);
    }
    return 0;
}
