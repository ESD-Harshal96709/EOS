#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if(pid == 0) {
        
        execlp("xdg-open", "xdg-open", "https://www.youtube.com/watch?v=B_6d3RBiEN0&list=RDWpBn9w-Js_c&index=4", NULL);
        printf("execlp failed");
    } else {
        printf("Parent process continues...\n");
    }

    return 0;
}
