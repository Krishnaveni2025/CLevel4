//Question: Create a sample link list with about 5 entries using the following structure.
//Insert a new entry before or after a given id.
//Menu Items
//1. Insert Entry
//2. Display List
//3. Exit
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

void insert_before(int id, int new_id, int Maths, int Science, struct student **head) {
 struct student *current = *head;
 struct student *previous = NULL;

 while (current != NULL && current->id != id) {
  previous = current;
  current = current->next;
 }

 if (current == NULL) {
  printf("ID not found\n");
  return;
 }

 struct student *new_student = (struct student *) malloc(sizeof(struct student));
 new_student->id = new_id;
 new_student->Maths = Maths;
 new_student->Science = Science;

 if (previous == NULL) {
  new_student->next = *head;
  *head = new_student;
 } else {
  new_student->next = current;
  previous->next = new_student;
 }
}

void insert_after(int id, int new_id, int Maths, int Science, struct student **head) {
 struct student *current = *head;

 while (current != NULL && current->id != id) {
  current = current->next;
 }

 if (current == NULL) {
  printf("ID not found\n");
  return;
 }

 struct student *new_student = (struct student *) malloc(sizeof(struct student));
 new_student->id = new_id;
 new_student->Maths = Maths;
 new_student->Science = Science;
 new_student->next = current->next;
 current->next = new_student;
}

void display_students(struct student *head) {
 while (head != NULL) {
  printf("ID: %d, Maths: %d, Science: %d\n", head->id, head->Maths, head->Science);
  head = head->next;
 }
}

int main() {
 struct student *head = NULL;

 add_student(&head, 1, 80, 70);
 add_student(&head, 2, 90, 80);
 add_student(&head, 3, 70, 60);
 add_student(&head, 4, 85, 75);
 add_student(&head, 5, 95, 90);

 int choice;
 while (1) {
  printf("Menu:\n");
  printf("1. Insert Entry\n");
  printf("2. Display List\n");
  printf("3. Exit\n");
  scanf("%d", &choice);

  switch (choice) {
   case 1: {
    int id, new_id, Maths, Science;
    printf("Enter ID to insert before/after: ");
    scanf("%d", &id);
    printf("Enter new ID, Maths mark, Science mark: ");
    scanf("%d %d %d", &new_id, &Maths, &Science);
    int position;
    printf("Enter 1 to insert before, 2 to insert after: ");
    scanf("%d", &position);
    if (position == 1) {
     insert_before(id, new_id, Maths, Science, &head);
    } else if (position == 2) {
     insert_after(id, new_id, Maths, Science, &head);
    }
    break;
   }
   case 2:
    display_students(head);
    break;
   case 3:
    exit(0);
  }
 }
 return 0;
}