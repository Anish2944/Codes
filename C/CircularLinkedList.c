#include <malloc.h>
#include <stdio.h>
void insertAtStart();
void insertAtend();
void insertAtSpec();
void deleteAtStart();
void deleteAtEnd();
void deleteAtSpec();
void display();
///////////////////////
struct node {
  int info;
  struct node *next;
};
typedef struct node NODE;
NODE *START = NULL;
NODE *LAST = NULL;
///////////////////////
void main() {
  printf("1. Insert the element at FIRST.\n");
  printf("2. Insert the element at END.\n");
  printf("3. Insert the element at SPECIFIC LOCATION.\n");
  printf("4. Delete FIRST ELEMENT.\n");
  printf("5. Delete LAST ELEMENT.\n");
  printf("6. Delete the element at SPECIFIC LOCATION.\n");
  printf("7. TRAVERSE the LIST.\n");
  int choice, item;
  char ch;
  do {
    printf("Enter the CHOICE:\n");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      insertAtStart();
      break;
    case 2:
      insertAtend();
      break;
    case 3:
      insertAtSpec();
      break;
    case 4:
      deleteAtStart();
      break;
    case 5:
      deleteAtEnd();
      break;
    case 6:
      deleteAtSpec();
      break;
    case 7:
      display();
      break;
    default:
      printf("Enter the CORRECT CHOICE.\n");
    }
    fflush(stdin);
    printf("\nDo you wish to continue(y/n)?\n");
    scanf("%c", &ch);
  } while (ch == 'Y' || ch == 'y');
}
///////////////////////////
void insertAtStart() {
  NODE *P;
  P = (NODE *)malloc(sizeof(NODE));
  int item;
  printf("Enter the ELEMENT to be inserted:\n");
  scanf("%d", &item);
  P->info = item;
  if (START == NULL) {
    START = P;
    LAST = P;
    P->next = START;
  } else {
    P->next = START;
    START = P;
    LAST->next = START;
  }
}
///////////////////////////
void insertAtend() {
  NODE *P;
  P = (NODE *)malloc(sizeof(NODE));
  int item;
  printf("Enter the ELEMENT to be inserted:\n");
  scanf("%d", &item);
  P->info = item;
  if (START == NULL) {
    P->next = P;
    START = LAST = P;
  } else {
    LAST->next = P;
    LAST = P;
    LAST->next = START;
  }
}
/////////////////////////////////
void insertAtSpec() {
  NODE *P, *LOC;
  P = (NODE *)malloc(sizeof(NODE));
  int item, loc, k;
  printf("Enter the ELEMENT to be inserted:\n");
  scanf("%d", &item);
  printf("Enter the LOCATION:\n");
  scanf("%d", &loc);
  P->info = item;
  LOC = START;
  for (k = 1; k < loc - 1; k++) {
    LOC = LOC->next;
  }
  P->next = LOC->next;
  LOC->next = P;
}
///////////////////////////////////
void deleteAtStart() {
  NODE *P;
  if (START == NULL) {
    printf("LIST IS EMPTY.\n");
  } else {
    P = START;
    START = START->next;
    LAST->next = START;
    printf("Deleted ITEM:%d", P->info);
    free(P);
  }
}
///////////////////////////////////
void deleteAtEnd() {
  NODE *P, *Q;
  P = START;
  if (START == NULL) {
    printf("LIST is EMPTY.\n");
  } else {
    while (P->next != START) {
      Q = P;
      P = P->next;
    }
    Q->next = P->next;
    LAST = Q;
    printf("Deleted ITEM:%d", P->info);
    free(P);
  }
}
//////////////////////////////////
void deleteAtSpec() {
  NODE *P, *TEMP;
  int loc;
  printf("Enter the LOCATION:\n");
  scanf("%d", &loc);
  if (START == NULL) {
    printf("LIST is EMPTY.\n");
  } else {
    P = START;
    for (int i = 0; i < loc - 1; i++) {
      TEMP = P;
      P = P->next;
    }
    printf("Deleted ITEM:%d", P->info);
    TEMP->next = P->next;
    free(P);
  }
}
//////////////////////////////////
void display() {
  NODE *P;
  P = START;
  if (START == NULL) {
    printf("LIST is EMPTY\n");
  } else
    while (P->next != START) {
      printf("%d\t", P->info);
      P = P->next;
    }
  printf("%d\t", P->info);
}