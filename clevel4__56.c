//Question: Create a link list for the following structure and
//get user inputs of id, Maths mark, Science Mark. 
//Once the user inputs id as -1 exit the 
//input mode and display all the entries.
//********** Hint ***************
//struct student {
//int id;
//int Maths;
//int Science;
//struct student *next;}
#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

void add_student(struct student **head, int id, int Maths, int Science) {
    struct student *new_student = (struct student *) malloc(sizeof(struct student));
    new_student->id = id;
    new_student->Maths = Maths;
    new_student->Science = Science;
    new_student->next = *head;
    *head = new_student;
}

void display_students(struct student *head) {
    while (head != NULL) {
        printf("ID: %d, Maths: %d, Science: %d\n", head->id, head->Maths, head->Science);
        head = head->next;
    }
}

int main() {
    struct student *head = NULL;

    while (1) {
        int id;
        printf("Enter ID (-1 to exit): ");
        scanf("%d", &id);
        if (id == -1) {
            break;
        }
        int Maths, Science;
        printf("\nEnter Maths mark: ");
        scanf("%d", &Maths);
        printf("\nEnter Science mark: ");
        scanf("%d", &Science);
        add_student(&head, id, Maths, Science);
        printf("ID: %d added successfully!\n", id);  // Print ID only when added
    }

    printf("All entries:\n");
    display_students(head);

    return 0;
}