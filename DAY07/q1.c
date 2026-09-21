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
    char buffer[100];

    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(PORT);

    bind(server_fd, (struct sockaddr *)&server, sizeof(server));

    listen(server_fd, 5);

    printf("Server waiting for clients...\n");

    for(int i = 0; i < 5; i++)
    {
        len = sizeof(client);

        client_fd = accept(server_fd,
                           (struct sockaddr *)&client,
                         &len);

        printf("\nClient %d connected\n", i + 1);

        memset(buffer, 0, sizeof(buffer));

        read(client_fd, buffer, sizeof(buffer));

        printf("Client %d says: %s", i + 1, buffer);

        sprintf(buffer, "Hello Client %d, message received by server", i + 1);

        write(client_fd, buffer, strlen(buffer));

        printf("Response sent to Client %d\n", i + 1);

        close(client_fd);
    }

    printf("\n5 clients completed. Server closing...\n");

    close(server_fd);

    return 0;
}
*/