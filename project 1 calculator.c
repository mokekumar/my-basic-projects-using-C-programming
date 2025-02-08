// This is the 1st project
//this is mohith kumar now iam 1st year btech i mastered my c language
//after learning and practicing my c this is the 1st project 
//july 1st 2023
//using switch case calculator
#include<stdio.h>
int main()
{
    printf("welcome to our calculator\n");

while (1)  //using while loop to loop again 1 time upto quit option
{
    int temp;  // creating temp a user created variable
    printf("choose the option \n1)add\n2)mult\n3)sub\n4)div\n5)quit \nenter the option");
    scanf("%d",&temp);
    if(temp == 5)
    {
        printf("thanks for visiting our calculator");
        break;
    }
    //now begin the switch case
    int a,b;
    printf("enter the values of a and b ");
    scanf("%d %d",&a,&b);
    switch(temp)   //using switch statement 
    {
        case 1:
        printf("addition:%d",a+b);
        break;
        case 2:
        printf("multliplication:%d",a*b);
        break;
        case 3:
        printf("subtraction :%d",a-b);
        break;
        case 4:
        printf("division :%f",(float)a/b);
    }
}
    return 0;
}