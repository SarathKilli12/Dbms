#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct  detials

{
  int id;
  char name[20];
  char dept[20];
};

int main()
{
    int x,a;
    

    char b[20];

   FILE *student;
   struct  detials d1[3];
   student=fopen("file1.txt","w");
   printf("Enter The 3 Students Detials");
   for(int i=0;i<3;i++)
   {
    printf("Enter The %d Student Id:",i+1);
    scanf("%d",&d1[i].id);
    printf("Enter The %d Student Name:",i+1);
    scanf("%s",d1[i].name);
    printf("Enter The %d Student Dept:",i+1);
    scanf("%s",d1[i].dept);

   }
   fwrite(&d1,sizeof(struct detials),3,student);
   fclose(student);

   //Here again We Opened In Read Mode
    student=fopen("file1.txt","r");
     
     do
     {
        printf("Enter The Option\n");
        printf("\n 1.Search By Id\n");
         printf("\n 2.Search By name\n");
          printf("\n 3.Search By Dept\n");
          scanf("%d",&x);
          switch (x)
          {
            
            case 1:
          +  printf("Enter The Id:");
            scanf("%d",&a);
             for(int i=0;i<3;i++)
                      {
                      if(a==d1[i].id)
                      {
                       printf("%s",d1[i].name);
                        printf("%s",d1[i].dept);
                      }

                      }
                       break;
            case 2:
            printf("Enter The name:");
            scanf("%s",b);
             for(int i=0;i<3;i++)
                      {
                      int value= strcmp(b,d1[i].name);
                      if(value==0)
                      {
                       printf("%d",d1[i].id);
                        printf("%s",d1[i].dept); 
                      }
                      }
                       break;
            case 3:
            printf("Enter The Dept:");
            scanf("%s",b);
             for(int i=0;i<3;i++)
                      {
                      int value= strcmp(b,d1[i].dept);
                      if(value==0)
                      {
                       printf("%s",d1[i].name);
                        printf("%d",d1[i].id); 
                      }
                      }
                       break;
            default:
            printf("Enter The Valid Option");
            exit(0);
          }
     }
          while (x!=3);
          fclose(student);
}

          
          





         
         
     
     
          