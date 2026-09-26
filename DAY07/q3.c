  /*                                                 q3.c *
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#define PORT 6034
int main()
{
    int server_fd, client_fd;
    struct sockaddr_in server, client;
    socklen_t len;
    int a, b, c, largest;
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(PORT);
    bind(server_fd, (struct sockaddr *)&server, sizeof(server));
    listen(server_fd, 5);
    printf("Server waiting for client...\n");
    len = sizeof(client);
    client_fd = accept(server_fd, (struct sockaddr *)&client, &len);
    printf("Client connected\n");
    read(client_fd, &a, sizeof(a));
    read(client_fd, &b, sizeof(b));
    read(client_fd, &c, sizeof(c));
    if(a >= b && a >= c)
        largest = a;
    else if(b >= a && b >= c)
        largest = b;
    else
        largest = c;
    write(client_fd, &largest, sizeof(largest));
    printf("Largest number: %d\n", largest);
    close(client_fd);

  close(server_fd);
    return 0;
}
*/