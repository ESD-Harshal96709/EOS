#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int i;

    for(i = 0; i < 5; i++) {
        pid_t pid = fork();

        if(pid == 0) {
         
            for(int j = 1; j <= 5; j++) {
                printf("Child PID: %d, Count: %d\n", getpid(), j);
                sleep(1);
            }
            return 0;
        }
    }

  
    for(i = 0; i < 5; i++) {
        wait(NULL);
    }

    printf("All child processes completed.\n");
    return 0;
}
