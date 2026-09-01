/*// addition of three numbners
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main()
{
    int sockfd, len, k;
    int a, b, c, sum;
    char buf[100], result[100];

    struct sockaddr_in sa, ca;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = inet_addr("127.0.0.1");
    sa.sin_port = htons(6027);

    bind(sockfd, (struct sockaddr *)&sa, sizeof(sa));

    printf("Server waiting...\n");

    len = sizeof(ca);

    k = recvfrom(sockfd, buf, 100, 0,
                 (struct sockaddr *)&ca, &len);

    buf[k] = '\0';
*/