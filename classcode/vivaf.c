#include <stdio.h>
#include <stdlib.h>

struct student 
{
    char name[50];
    int *marks;
    int sub;
};

int main() {
    struct student s;
    int choice = 0;
    int again = 1;

    while (again == 1) {

        printf("\nenter student name: ");
        scanf("%s", s.name);

        printf("enter number of subjects: ");
        printf("enter number of subjects: ");
        while (scanf("%d", &s.sub) != 1) 
        {
         printf("invalid input. please enter a valid number of subjects: ");
         while (getchar() != '\n');
        }

       if (s.sub <= 0) 
       {
         printf("invalid number. student entry cancelled.\n");
         continue;
       }



        s.marks = (int*) malloc(s.sub * sizeof(int));
        if (s.marks == NULL) 
        {
            printf("memory does not allocated!\n");
            return 0;
        }

        printf("enter marks for %d subjects:\n", s.sub);
        for (int i = 0; i < s.sub; i++) {
            scanf("%d", &s.marks[i]);
        }

        float sum = 0, highest = s.marks[0];
        for (int i = 0; i < s.sub; i++) {
            sum += s.marks[i];
            if (s.marks[i] > highest)
                highest = s.marks[i];
        }
        float percentage = sum / s.sub;

        do {
            printf("\nMenu :\n");
            printf("1. show total marks\n");
            printf("2. show highest marks\n");
            printf("3. show percentage\n");
            printf("4. enter another student\n");
            printf("5. exit program\n");
            printf("enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {

                case 1:
                    printf("total marks: %.2f\n", sum);
                    break;

                case 2:
                    printf("highest marks: %.2f\n", highest);
                    break;

                case 3:
                    printf("percentage: %.2f%%\n", percentage);
                    break;

                case 4:
                    again = 1;   
                    break;

                case 5:
                    again = 0;   
                    break;

                default:
                    printf("invalid choice... Try again\n");
            }

            if (choice == 4 || choice == 5)
                break;

        } while (choice != 5);

        free(s.marks);
        printf("\n----------------------------------------\n");
    }

    printf("tankyouyou, bye.\n");
    return 0;
}
