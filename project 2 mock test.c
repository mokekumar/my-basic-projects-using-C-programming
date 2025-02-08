#include<stdio.h>
int main()
{
    {
     int p,a,s;
     
        printf("enter the candidate name:  \n");
        scanf("%d",&p);
     
     
        printf("enter the candiate age: \n");
        scanf("%d",&a);
     
        printf("enter sex: \n");
        scanf("%d",&s);
    }

    
    {
    //here now using seitch case to answer the multiple choice questions

    {
    int n;    //declaring integer
    printf("who is the pm of india\n");
    printf("1)narendra modi\n2)ysr jagan mohan reddy\n3)sardar vllabai patel\n4)mohith kumar\nenter option");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        printf("right answer");
        break;
        case 2:
        printf("wrong answer");
        break;
        case 3:
        printf("wrong answer");
        break;
        case 4:
        printf("wrong answer");
        break;
    }
    }

    {
        int n;
        printf("\nwho is the present ceo of spaceX\n");
        printf("1)ravindar singh\n2)urjith patel\n3)elon musk\n4)joe biden\n enter the option");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
            printf("wrong answer");
            break;
            case 2:
            printf("wrong answer");
            break;
            case 3:
            printf("right answer");
            break;
            case 4:
            printf("wrong answer");
            break;
        }
    }

    {
        int n;
        printf("\nwho is the founder of apple co.ltd\n");
        printf("1)billgates\n2)mark zuckenberg\n3)elon musk\n4)steve jobs\n enter the option");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
            printf("wrong answer");
            break;
            case 2:
            printf("wrong answer");
            break;
            case 3:
            printf("wrong answer");
            break;
            case 4:
            printf("right answer");
            break;            
        }
    }

    {
        int n;
        printf("\nwho invented facebook\n");
        printf("1)bill gates\n2)mark zucken berg\n3)narendra modi\n4)crisiano ronaldo\n enter the option");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
            printf("wrong answer");
            break;
            case 2:
            printf("right answer");
            break;
            case 3:
            printf("wrong answer");
            break;
            case 4:
            printf("wrong answer");
            break;            
        }        
    }

    {
        int n;
        printf("\nwho is the captain of argentina in fifa foot ball\n");
        printf("1)crisiano ronaldo\n2)leonal messi\n3)chris gale\n4)robert pattison\n enter the option");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
            printf("wrong answer");
            break;
            case 2:
            printf("right answer");
            break;
            case 3:
            printf("wrong answer");
            break;
            case 4:
            printf("wrong answer");
            break;            
        }                
    }
    }
    return 0;
}