#include 
int main()
{
    char n[10];
    int c, e, ne, m, i, num;
    FILE *fptr;
    fptr = fopen("student.txt","w");
    printf("How many record?");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
    printf("Enter name class and 3 marks");
    scanf("%s %d %d %d %d",n, &c, &e, &ne, &m);
    fprintf(fptr,"%s %d %d %d %d \n",n, c, e, ne, m);
    }
    fclose(fptr);
    return 0;
}
