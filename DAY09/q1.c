/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/select.h>
#include <time.h>
#define PORT 6034
int main(){
    int server_fd, c1, c2;
    struct sockaddr_in server, client;
    socklen_t len = sizeof(client);
    char buffer[100];
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(PORT);
    bind(server_fd, (struct sockaddr *)&server, sizeof(server));
    listen(server_fd, 2);
    printf("Server waiting for Client 1...\n");
    c1 = accept(server_fd, (struct sockaddr *)&client, &len);
    printf("Client 1 connected.\n");
    printf("Server waiting for Client 2...\n");
    c2 = accept(server_fd, (struct sockaddr *)&client, &len);
    printf("Client 2 connected.\n");
    int count1 = 0;
    int count2 = 0;
    int active1 = 1;
    int active2 = 1;
    srand(time(NULL));
    while (active1 || active2){
        fd_set readfds;
        FD_ZERO(&readfds);
        if (active1)
            FD_SET(c1, &readfds);
        if (active2)
            FD_SET(c2, &readfds);
        int maxfd = c1 > c2 ? c1 : c2;
        select(maxfd + 1, &readfds, NULL, NULL, NULL);
        int ready1 = active1 && FD_ISSET(c1, &readfds);
        int ready2 = active2 && FD_ISSET(c2, &readfds);
        int chosen = 0;
        if (ready1 && ready2){
            chosen = rand() % 2 + 1;
            if (chosen == 1){
                recv(c1, buffer, sizeof(buffer), 0);
                printf("Server randomly selected Client 1\n");
                printf("Message: %s\n", buffer);
                send(c1, "Server responded to Client 1", 30, 0);
                count1 = 0;
                count2++;
                printf("Client 2 counter = %d\n", count2);
            }
            else{
                recv(c2, buffer, sizeof(buffer), 0);
                printf("Server randomly selected Client 2\n");
                printf("Message: %s\n", buffer);
                send(c2, "Server responded to Client 2", 30, 0);
                count2 = 0;
                count1++;
                printf("Client 1 counter = %d\n", count1);
            }
        }
        else if (ready1){
            recv(c1, buffer, sizeof(buffer), 0);
            printf("Only Client 1 sent a message\n");
            printf("Message: %s\n", buffer);
            send(c1, "Server responded to Client 1", 30, 0);
            count1 = 0;
        }
        else if (ready2){
            recv(c2, buffer, sizeof(buffer), 0);
            printf("Only Client 2 sent a message\n");
            printf("Message: %s\n", buffer);
            send(c2, "Server responded to Client 2", 30, 0);
            count2 = 0;
        }
        if (count1 >= 2 && active1){
            printf("Client 1 ignored twice. Terminating Client 1.\n");
            send(c1, "TERMINATE", 10, 0);
            close(c1);
            active1 = 0;
        }
        if (count2 >= 2 && active2){
            printf("Client 2 ignored twice. Terminating Client 2.\n");
            send(c2, "TERMINATE", 10, 0);
            close(c2);
            active2 = 0;
        }
    }
    close(server_fd);
    return 0;
}
*/