#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 0; i < 3; i++) {
        if (fork() == 0) {
            printf("Child process, PID: %d\n", getpid());
            break;// ώστε τα child processes να μην συνεχίσουν να κάνουν fork
        }
    }
    return 0;
}
