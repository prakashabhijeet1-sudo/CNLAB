/*calculator client 
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main()
{
    int sockfd, len, k;
    float a, b;
    char op;
    char buf[100], ans[100];

    struct sockaddr_in sa;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = inet_addr("127.0.0.1");
    sa.sin_port = htons(6027);

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\nYou entered: %.2f %c %.2f\n", a, op, b);
    
    sprintf(buf, "%.2f %c %.2f", a, op, b);

    sendto(sockfd, buf, strlen(buf), 0,
           (struct sockaddr *)&sa, sizeof(sa));

    len = sizeof(sa);

    k = recvfrom(sockfd, ans, 100, 0,
                 (struct sockaddr *)&sa, &len);

    ans[k] = '\0';

    printf("Server: %s\n", ans);

    close(sockfd);

    return 0;
}
 */