#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main() {
    int client_fd;
    char send_buf[1024], recv_buf[1024];

    // Create socket
    client_fd = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);
    inet_pton(AF_INET, "192.168.68.131", &server_addr.sin_addr); // change IP

    connect(client_fd, (struct sockaddr*)&server_addr, sizeof(server_addr));
    printf("Connected to server!\n");

    while (1) {
        // Send message
        printf("Client: ");
        fgets(send_buf, sizeof(send_buf), stdin);
        send(client_fd, send_buf, strlen(send_buf), 0);

        if (strncmp(send_buf, "bye", 3) == 0)
            break;

        // Receive reply
        int n = recv(client_fd, recv_buf, sizeof(recv_buf), 0);
        recv_buf[n] = '\0';
        printf("Server: %s\n", recv_buf);

        if (strcmp(recv_buf, "bye") == 0)
            break;
    }

    close(client_fd);
    return 0;
}
