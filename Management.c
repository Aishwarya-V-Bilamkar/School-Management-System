#include<stdio.h>
struct student{
	char Name[100];
	int roll_no;
	char sec;
	int marks;
	char address[50];
};
void main(){
	int n,i,j,count=0;
	printf("Enter number of student: ");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++){
		printf("Insert %d student data\n",i+1);
		printf("Enter Name of the student: ");
		scanf("%s",s[i].Name);
		printf("Enter Roll number of the student: ");
		scanf("%d",&s[i].roll_no);
		printf("Enter Section of the student: ");
		scanf(" %c",&s[i].sec);
		printf("Total marks of the student: ");
		scanf("%d",&s[i].marks);
		printf("Enter address of the student: ");
		scanf("%s",s[i].address);
		count++;
	}
	for(i=0;i<n;i++){
		printf("%d student data\n",i+1);
		printf("Name : %s\n",s[i].Name);
		printf("roll number : %d\n",s[i].roll_no);
		printf("section : %c\n",s[i].sec);
		printf("marks : %d\n",s[i].marks);
		printf("address : %s\n",s[i].address);
	}
	printf("Enter the student roll no\n");
	int roll;
	scanf("%d",&roll);
	printf("find student date\n");
	for(i=0;i<n;i++){
		if(roll == s[i].roll_no){
			printf("Name : %s\n",s[i].Name);
			printf("Roll number : %d\n",s[i].roll_no);
			printf("Section : %c\n",s[i].sec);
			printf("Marks : %d\n",s[i].marks);
			printf("Address : %s\n",s[i].address);
		}
	}
	printf("No of student entered %d\n",count);
	int roll_no;
	printf("Students to be delete is with a roll number : ");
	scanf("%d",&roll_no);
	for(i=0;i<count;i++){
		if(s[i].roll_no == roll_no){
			for(j=i;j<count-1;j++){
				s[j] = s[j+1];
			}
			count--;
			printf("Student with roll number %d has been deleted\n",s[i].roll_no);
		}
	}
	printf("To update the student detail\n");
	int update;
	int rollno;
	printf("Enter the roll number ");
	scanf("%d",&rollno);
	for(i=0;i<count;i++){
		if(s[i].roll_no == rollno){
			printf("%d student data\n",i+1);
			printf("Name : %s\n",s[i].Name);
			printf("roll number : %d\n",s[i].roll_no);
			printf("section : %c\n",s[i].sec);
			printf("marks : %d\n",s[i].marks);
			printf("address : %s\n",s[i].address);
			printf("Which are the detail to be updated : ");
			scanf("%d",&update);
			switch(update){
				case 1 : {
					printf("Enter Name : ");
					scanf("%s",s[i].Name);
					printf("updated Name : %s\n",s[i].Name);
				}
					break;
					case 2 : {
						printf("Enter roll number : ");
						scanf("%d",&s[i].roll_no);
						printf("updated roll number : %d\n",s[i].roll_no);
					}
						break;
						case 3 : {
							printf("Enter section : ");
							scanf(" %c",&s[i].sec);
							printf("updated section : %c\n",s[i].sec);
						}
							break;
							case 4 : {
								printf("Enter Marks : ");
								scanf("%d",&s[i].marks);
								printf("updated Marks : %d\n",s[i].marks);
							}
								break;
								case 5 : {
									printf("Enter address : ");
									scanf("%s",s[i].address);
									printf("updated address : %s\n",s[i].address);
								}
									break;
			}
		}
		printf("Name : %s\n",s[i].Name);
		printf("Roll no : %d\n",s[i].roll_no);
		printf("Section : %c\n",s[i].sec);
		printf("marks : %d\n",s[i].marks);
		printf("Address : %s\n",s[i].address);
	}
}
