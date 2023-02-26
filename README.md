This program allows the user to enter tasks and record the amount of time spent on each task. The program uses a simple text-based interface and stores task information in an array of struct objects.

The while loop runs continuously until the user enters "q" to quit. Within the loop, the program prompts the user to enter a task name using fgets(). The program then records the start time of the task using time(NULL) and prints a message to indicate that the task has started.

After the user is finished with the task, the program prompts the user to press enter to record the end time of the task using time(NULL) and prints a message to indicate that the task has ended.

If there is still space in the tasks array, the program stores the task name, start time, and end time in a new struct object and increments the num_tasks counter. If the maximum number of tasks has been reached, the program prints a message to indicate that the maximum number of tasks has been reached.

After the user has quit the program, the program prints a summary of all the tasks that were recorded, including the task name and the amount of time spent on each task.
