#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_TASKS 100
#define MAX_TASK_NAME_LEN 100

struct task {
    char name[MAX_TASK_NAME_LEN];
    time_t start_time;
    time_t end_time;
};

int main() {
    struct task tasks[MAX_TASKS];
    int num_tasks = 0;
    time_t start_time, end_time;
    char task_name[MAX_TASK_NAME_LEN];
    int i;

    while (1) {
        printf("Enter a task name (or 'q' to quit): ");
        fgets(task_name, MAX_TASK_NAME_LEN, stdin);
        if (strcmp(task_name, "q\n") == 0) {
            break;
        }
        task_name[strcspn(task_name, "\n")] = 0;

        start_time = time(NULL);
        printf("Starting task '%s' at %s", task_name, ctime(&start_time));

        printf("Press enter when you're done with the task.");
        getchar();

        end_time = time(NULL);
        printf("Ending task '%s' at %s", task_name, ctime(&end_time));

        if (num_tasks < MAX_TASKS) {
            strcpy(tasks[num_tasks].name, task_name);
            tasks[num_tasks].start_time = start_time;
            tasks[num_tasks].end_time = end_time;
            num_tasks++;
        } else {
            printf("Maximum number of tasks reached.\n");
        }
    }

    printf("Task summary:\n");
    for (i = 0; i < num_tasks; i++) {
        printf("%s: %ld seconds\n", tasks[i].name, tasks[i].end_time - tasks[i].start_time);
    }

    return 0;
}

