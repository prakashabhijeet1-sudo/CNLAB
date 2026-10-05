/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#define PORT 6034
int main(){
    int server_fd,c1, c2, c3;
    struct sockaddr_in server, client;
    socklen_t len = sizeof(client);
    char buffer[100];
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(PORT);
    bind(server_fd, (struct sockaddr *)&server, sizeof(server));
    listen(server_fd, 3);
    printf("Server waiting for Client 1...\n");
    c1 = accept(server_fd, (struct sockaddr *)&client, &len);
    printf("Client 1 connected.\n");
    printf("Server waiting for Client 2...\n");
    c2 = accept(server_fd, (struct sockaddr *)&client, &len);
    printf("Client 2 connected.\n");
    printf("Server waiting for Client 3...\n");
    c3 = accept(server_fd, (struct sockaddr *)&client, &len);
    printf("Client 3 connected.\n");
    while (1){
        printf("\nWaiting for messages...\n");
        int n;
        n = recv(c1, buffer, sizeof(buffer), MSG_DONTWAIT);
        if (n > 0){
            printf("Client 1: %s\n", buffer);
            send(c1, "Response from Server", 21, 0);
        }
        n = recv(c2, buffer, sizeof(buffer), MSG_DONTWAIT);
        if (n > 0){
            printf("Client 2: %s\n", buffer);
            send(c2, "Response from Server", 21, 0);
        }
        n = recv(c3, buffer, sizeof(buffer), MSG_DONTWAIT);
        if (n > 0){
            printf("Client 3: %s\n", buffer);
            send(c3, "Response from Server", 21, 0);
        }
        sleep(1);
    }
    close(c1);
    close(c2);
    close(c3);
    close(server_fd);
    return 0;
}
*/