/*#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main()
{
    int sockfd, len, k;
    char buf[200];
    struct sockaddr_in sa, ca;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = inet_addr("127.0.0.1");
    sa.sin_port = htons(6027);

    bind(sockfd, (struct sockaddr *)&sa, sizeof(sa));

    len = sizeof(ca);

    k = recvfrom(sockfd, buf, 200, 0,
                 (struct sockaddr *)&ca, &len);

    buf[k] = '\0';

    printf("Biodata received:\n%s\n", buf);

    char ack[] = "Yes, received";

    sendto(sockfd, ack, strlen(ack), 0,
           (struct sockaddr *)&ca, len);

    close(sockfd);

    return 0;
}*/