#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stdDetailes
{
int Id,Age;
char name[25],course[25];
} ;
void write()
{
int n;
struct stdDetailes std;
FILE *fptr;
if((fptr=fopen("student3.txt","w"))==NULL){
printf("Error! opening file");
exit(1);
}
printf("Enter a student detailes:\n");
// fprintf(fptr,"%s %d %s %s\n",&std.name,&std.Id,&std.course,&std.Age);
printf("\nStudentName:");
scanf("%s",&std.name);
printf("\nStudentId:");
scanf("%d",&std.Id);
printf("\nStudentCourse:");
scanf("%s",&std.course);
printf("\nStudentAge:");
scanf("%d",&std.Age);
{
fwrite(&std, sizeof(struct stdDetailes),1,fptr);
fclose(fptr);
return 0;
}
}
void read()
{
printf("\nDetailes are:\n");
{
struct stdDetailes std;
FILE *fptr;
if((fptr=fopen("student3.txt","r"))==NULL){
printf("Error! opening file");
exit(1);
}
fread(&std,sizeof(struct stdDetailes),1,fptr);
printf("name: %s\nId: %d\nAge: %d\ncourse:%s\n",std.name,std.Id,std.Age,std.course);
fclose(fptr);
}
}
int main(){
struct stdDetailes std;
write();
read();
return 0;
}

