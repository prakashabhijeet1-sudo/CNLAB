/*server
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
int main() {
    int serverSocket, clientSocket;
    struct sockaddr_in server, client;
    socklen_t clientLen = sizeof(client);
    int day;
    char result[100];
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(6034);
    bind(serverSocket, (struct sockaddr *)&server, sizeof(server));
    listen(serverSocket, 5);
    printf("Server is waiting for client...\n");
    clientSocket = accept(serverSocket,(struct sockaddr *)&client,&clientLen);
    recv(clientSocket, &day, sizeof(day), 0);
    switch (day) {
        case 1:
            strcpy(result, "Monday");
            break;
        case 2:
            strcpy(result, "Tuesday");
            break;
        case 3:
            strcpy(result, "Wednesday");
            break;
        case 4:
            strcpy(result, "Thursday");
              strcpy(result, "Thursday");
            break;
        case 5:
            strcpy(result, "Friday");
            break;
        case 6:
            strcpy(result, "Saturday");
            break;
        case 7:
            strcpy(result, "Sunday");
            break;
        default:
            strcpy(result, "Invalid day number");
    }
    send(clientSocket, result, strlen(result) + 1, 0);
    printf("Day number received: %d\n", day);
    printf("Day: %s\n", result);
    close(clientSocket);
    close(serverSocket);
    return 0;
}


client 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
int main() {
    int clientSocket , day;
    struct sockaddr_in server;
    char result[100];
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    server.sin_family = AF_INET;
    server.sin_port = htons(6034);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    connect(clientSocket,(struct sockaddr *)&server,sizeof(server));
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    send(clientSocket, &day, sizeof(day), 0);
    recv(clientSocket, result, sizeof(result), 0);
    printf("Day: %s\n", result);
    close(clientSocket);
    return 0;
}

*/