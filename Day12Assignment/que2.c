#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t b, c, d;

    b = fork();

    if(b == 0) {
        
        c = fork();

        if(c == 0) {
           
            d = fork();

            if(d == 0) {
              
                printf("Process D PID: %d\n", getpid());
                sleep(5);
            } else {
                wait(NULL);
                printf("Process C PID: %d\n", getpid());
                sleep(5);
            }
        } else {
            wait(NULL);
            printf("Process B PID: %d\n", getpid());
            sleep(5);
        }
    } else {
        wait(NULL);
        printf("Process A PID: %d\n", getpid());
        sleep(5);
    }

    return 0;
}
