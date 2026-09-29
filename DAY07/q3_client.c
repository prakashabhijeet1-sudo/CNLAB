/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#define PORT 6034
int main()
{
    int sock;
    struct sockaddr_in server;
    int a, b, c, largest;
    sock = socket(AF_INET, SOCK_STREAM, 0);
    server.sin_family = AF_INET;
    server.sin_port = htons(PORT);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    connect(sock, (struct sockaddr *)&server, sizeof(server));
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    write(sock, &a, sizeof(a));
    write(sock, &b, sizeof(b));
    write(sock, &c, sizeof(c));
    read(sock, &largest, sizeof(largest));
    printf("Largest number: %d\n", largest);
    close(sock);
    return 0;
}

*/