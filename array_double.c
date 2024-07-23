#include <stdio.h> 

    int main(){
        int n_students=3, n_subjects=5;

        int marks[3][5];
        for (int c=0; c<3; c++)
        {
            for (int r=0; r<5; r++)
            {
                printf("Enter the marks of student %d in subject %d : ",(c+1), (r+1));
                scanf("%d", &marks[c][r]);
            }
        }

        for (int c=0; c<3; c++)
        {
            for (int r=0; r<5; r++)
            {
                printf("Marks of student %d in subject %d is %d \n ",(c+1), (r+1), marks[c][r]);
            }
        }
    
return 0;
}