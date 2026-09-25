/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 6034

int main()
{
    int server_fd, client_fd;
    struct sockaddr_in server, client;
    socklen_t len;
    int num;
    char result[100];

    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(PORT);

    bind(server_fd, (struct sockaddr *)&server, sizeof(server));

    listen(server_fd, 5);
    printf("Server waiting for client...\n");

    len = sizeof(client);

    client_fd = accept(server_fd,
                       (struct sockaddr *)&client,
                       &len);

    printf("Client connected\n");

    read(client_fd, &num, sizeof(num));

    printf("Number received: %d\n", num);

    if(num % 2 == 0)
        strcpy(result, "Even");
    else
        strcpy(result, "Odd");

    write(client_fd, result, strlen(result) + 1);

    printf("Result sent to client: %s\n", result);

    close(client_fd);
    close(server_fd);

    return 0
}

*/