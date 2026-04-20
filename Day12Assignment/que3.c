#include <stdio.h>
#include <unistd.h>

int main() {
    int count = 0;

    while(1) {
        pid_t pid = fork();

        if(pid < 0) {
            printf("Max processes reached: %d\n", count);
            break;
        } else if(pid == 0) {
            
            return 0;
        } else {
            count++;
        }
    }

    return 0;
}
