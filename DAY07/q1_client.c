/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#define PORT 6034
int main(){
    int sock;
    struct sockaddr_in server;
    char buffer[100];
    sock = socket(AF_INET, SOCK_STREAM, 0);
    server.sin_family = AF_INET;
    server.sin_port = htons(PORT);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    connect(sock, (struct sockaddr *)&server, sizeof(server));
    printf("Enter message: ");
    fgets(buffer, sizeof(buffer), stdin);
    write(sock, buffer, strlen(buffer));
    memset(buffer, 0, sizeof(buffer));
    read(sock, buffer, sizeof(buffer));
    printf("Server: %s\n", buffer);
    close(sock);
    return 0;
}
*/