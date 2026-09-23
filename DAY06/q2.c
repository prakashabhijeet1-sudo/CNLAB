/*#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main()
{
    int sockfd, len, k;
    char name[50], age[10], dob[20], state[50];
    char biodata[200], ack[100];
    struct sockaddr_in sa;
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = inet_addr("127.0.0.1");
    sa.sin_port = htons(6027);
    printf("Enter Name: ");
    fgets(name, 50, stdin);
    printf("Enter Age: ");
    fgets(age, 10, stdin);
    printf("Enter DOB: ");
    fgets(dob, 20, stdin);
    printf("Enter State: ");
    fgets(state, 50, stdin);
    
    sprintf(biodata,
            "Name: %sAge: %sDOB: %sState: %s",
            name, age, dob, state);

    sendto(sockfd, biodata, strlen(biodata), 0,
           (struct sockaddr *)&sa, sizeof(sa));

    len = sizeof(sa);

    k = recvfrom(sockfd, ack, 100, 0,
                 (struct sockaddr *)&sa, &len);

    ack[k] = '\0';

    printf("\nServer: %s\n", ack);

    close(sockfd);

    return 0;
}

*/