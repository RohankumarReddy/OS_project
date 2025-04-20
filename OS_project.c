#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>  // for sleep()

void clear_screen() {
    system("clear");
}

void get_system_info() {
    system("uname -a");
}

void check_disk_usage() {
    system("df -h");
}

void show_processes() {
    system("ps aux");
}

void create_file() {
    char filename[100];
    printf("Enter filename to create: ");
    scanf("%s", filename);
    char command[120];
    sprintf(command, "touch %s", filename);
    system(command);
    printf("File '%s' created.\n", filename);
}

void delete_file() {
    char filename[100];
    printf("Enter filename to delete: ");
    scanf("%s", filename);
    char command[120];
    sprintf(command, "rm -i %s", filename);
    system(command);
}

void monitor_cpu_memory() {
    system("top -n 1 -b | head -20");
}

void check_network_status() {
    system("ip a | grep -A 5 -E 'eth|wlan'");
}

void show_credits() {
    printf("Created by:\n");
    printf("Tejaswini - 1/23/SET/BCS/345\n");
    printf("Nagaruru Rohankumar Reddy - 1/23/SET/BCS/345\n");
    printf("Zaid Bin Mansoor - 1/23/SET/BCS/573\n");
}

int main() {
    int option;
    clear_screen();

    printf("\033[1;32mSYSTEM CALL INTERFACE\033[0m\n\n");
    printf("\033[1;32mAccess Granted.\033[0m\n");

    while (1) {
        printf("\033[1;32m");
        printf("1. Get system info\n");
        printf("2. Check disk usage\n");
        printf("3. Show running processes\n");
        printf("4. Create a file\n");
        printf("5. Delete a file\n");
        printf("6. Monitor CPU & Memory Usage\n");
        printf("7. Check Network Status\n");
        printf("8. Created by\n");
        printf("9. Exit\n");
        printf("\033[0m");

        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: get_system_info(); break;
            case 2: check_disk_usage(); break;
            case 3: show_processes(); break;
            case 4: create_file(); break;
            case 5: delete_file(); break;
            case 6: monitor_cpu_memory(); break;
            case 7: check_network_status(); break;
            case 8: show_credits(); break;
            case 9:
                printf("\033[1;32mExiting...\033[0m\n");
                exit(0);
            default:
                printf("\033[1;32mInvalid option\033[0m\n");
        }
        sleep(1);
    }

    return 0;
}
