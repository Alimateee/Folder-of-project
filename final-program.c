#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void menu(void);
void cal(void);
void area(void);
void circle(void);
void rectangle(void);
void square(void);
void triangle(void);
void character(void);
void tem(void);
void age(void);
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}
void cel(void)
{   
    int c,exit_cel;
    printf("\nEnter Tempreture in Celsius :");
    scanf("%i",&c);
    printf("\n Tempreture in Farenheit is : %i",(9/5)*c+32);
    printf("\n Press 1 to try again and 0 to Exit...");
    scanf("%i",&exit_cel);
    if (exit_cel==1)
    {
        system("cls");
        cel();
    }
    else if (exit_cel==0)
    {
        system("cls");
        tem();
    }   
}
void far(void)
{
    int f,exit_far;
    printf("\nEnter Tempreture in farenheit :");
    scanf("%i",&f);
    printf("\nTempreture in Celsius : %i",(9/5)*(f-32));
    printf("\nPress 1 to try again and 0 to Exit...");
    scanf("%i",&exit_far);
    if (exit_far==1)
    {
        system("cls");
        far();
    }
    else if (exit_far==0)
    {
        system("cls");
        tem();
    }
}
int main()
{
    long int password=0;
    char ch;
    int i,main_exit;
    printf("*Created by Ali Mottaghi at 18 June 2022*\n-----------------------------------------");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To The Alimate's Program \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\n\nPlease Enter Your Password :");   
    scanf("%li",&password);
    if(password==13661370)
    {  
        printf("\n\nYour Password is Correct\n\nLoading");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        system("cls");
        menu();
    }
    else
    {
        printf("\n\nYour Password is not correct!\nPlease try again later");
        printf("\n\nEnter 1 to try again and 0 to Exit...");
        scanf("%i",&main_exit);
        if (main_exit==1)
        {   
            printf("\nLoading");
            for(i=0;i<=6;i++)
            {
                fordelay(100000000);
                printf(".");
            }
            system("cls");
            main();
        }
        else if(main_exit==0)
            exit(0);
    }        
}
void menu(void)
{
    int number=0;
    printf("*Created by Ali Mottaghi at 18 June 2022*\n-----------------------------------------");
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To The Main menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n[1] calculator\n\n[2] area program\n\n[3] character counting\n\n[4] Tempreture conversion\n\n[5] Convert Age to Seconds\n\n[6] previous page\n\n[7] Exit\n\nEnter your number here :");
    scanf("%i",&number);   
    if(number==1)
    {
        system("cls");
        cal();
    }
    else if(number==2)
    {
        system("cls");   
        area();
    } 
    else if(number==3)
    {
        system("cls");
        character();
    }
    else if(number==4)
    {
        system("cls");
        tem();  
    } 
    else if(number==5)
    {
        system("cls");
        age();
    }
    else if(number==6)
    {
        system("cls");
        main();
    }
    else if(number==7)
    {
        system("cls");
        exit(0);
    }           
}
void cal(void)
{
    
    printf("\\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 welcome to calculator \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    int i,exit_cal;
    float x,y;
    printf("\n\nPlease Enter Two Number :");
    scanf("%f%f",&x,&y);
    printf("\n\nsum is : %.1f\n\nminus is : %.1f\n\nmultiplication is : %.1f\n\ndevide is : %.2f",x+y,x-y,x*y,x/y);
    printf("\n\nEnter 1 to Reset the calculator and 0 to Return to the Menu:)))");
    scanf("%i",&exit_cal);
    if(exit_cal==1)
    {
        system("cls");
        cal();
    }
    else if(exit_cal==0)
    {   printf("\nLoading");
        for(i=0;i<=6;i++)
            {
                fordelay(100000000);
                printf(".");
            }
        system("cls");
        menu();
    }        
}
void area(void)
{
    int i,select=0;
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to the area program \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\nWhich of the shapes do you want to calculate the area of?");
    printf("\n\n[1] circle\n\n[2] triangle\n\n[3] square\n\n[4] rectangle\n\nDo you want to Return to the Main menu??\n[5] Main menu\n...");
    scanf("%i",&select);
    if (select==1)
    {
        system("cls");
        circle();
    }
    else if(select==2)
    {
        system("cls");
        triangle();
    }
    else if(select==3)
    {
        system("cls");
        square();
    }
    else if(select==4)
    {
        system("cls");
        rectangle();
    }
    else if(select==5)
    {   
        printf("\n\nLoading");
        for(i=0;i<=6;i++)
            {
                fordelay(100000000);
                printf(".");
            }
        system("cls");
        menu();
    }
}
void circle(void)
{   
    const float p=3.14;
    int r,exit_circle;
    printf("\n\nPlease Enter r :");
    scanf("%i",&r);
    printf("\n\nArea of circle is : %.2f",p*r*r);
    printf("\n\nPress 1 to Reset this program and 0 to Return to area program...");
    scanf("%i",&exit_circle);
    if(exit_circle==0)
    {
        system("cls");
        area();
    }
    else if(exit_circle==1)
    {
        system("cls");
        circle();
    }
}
void triangle(void)
{
    int h,b,exit_triangle;
    printf("\n\nPlease Enter h(height) and b(base) :");
    scanf("%i%i",&h,&b);
    printf("\n\narea of triangle : %i",(h*b)/2);
    printf("\n\nPress 1 to Reset this program and 0 to Return to area program...");
    scanf("%i",&exit_triangle);
    if (exit_triangle==1)
    {
        system("cls");
        triangle();
    }
    else if(exit_triangle==0)
    {
        system("cls");
        area();
    }
}
void square(void)
{
    int a,exit_square;
    printf("\n\nPlease Enter a :");
    scanf("%i",&a);
    printf("\n\narea of square is : %i",a*a);
    printf("\n\nPress 1 to Reset this program and 0 to Return to area program...");
    scanf("%i",&exit_square);
    if (exit_square==1)
    {
        system("cls");
        square();
    }
    else if(exit_square==0)
    {
        system("cls");
        area();
    }
}
void rectangle(void)
{
    int a,b,exit_rectangle;
    printf("\n\nPlease Enter a(length) and b(width)");
    scanf("%i%i",&a,&b);
    printf("\n\narea of rectangle is : %i",a*b);
    printf("\n\nPress 1 to Reset this program and 0 to Return to area program...");
    scanf("%i",&exit_rectangle);
    if (exit_rectangle==1)
    {
        system("cls");
        rectangle();
    }
    else if(exit_rectangle==0)
    {
        system("cls");
        area();
    }
}
void character(void)
{
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to character counting program \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    char i,ch;
    int count,exit_char;
    printf("\n\n\nPlease Enter a statement and at the end Press ENTER : ");
    for(count = 0;(ch=getche())!='\r'; count++);
        printf("\nlength of your statement : %i",count);
    printf("\n\nPress 1 to reset the character counting program and 0 to Return to the main menu...");
    scanf("%i",&exit_char);
    if (exit_char==1)
    {
        system("cls");
        character();
    }
    else if(exit_char==0)
    {   
        printf("\nLoading");
        for(i=0;i<=6;i++)
            {
                fordelay(100000000);
                printf(".");
            }
        system("cls");
        menu();
    }
}
void tem(void)
{   
    int i,choise;
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 welcome to Tempreture conversion program \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n[1] Celsius to Farenheit\n\n[2] Farenheit to Celsius\n\n\n\nDo you want to return to the Main menu?\n\n[3] Main menu");
    printf("\n\nEnter your choise here :");
    scanf("%i",&choise);
    if (choise==1)
    {
        system("cls");
        cel();
    }
    else if (choise==2)
    {
        system("cls");
        far();
    }
    else if (choise==3)
    {   
        printf("\n\nLoading");
         for(i=0;i<=6;i++)
            {
                fordelay(100000000);
                printf(".");
            }
        system("cls");
        menu();
    }   
}
void age(void)
{   
    int g,exit_age;
    printf("\n\n\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 welcome to the Age converter program \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\nPlease Enter your Age :");
    scanf("%i",&g);
    printf("\n\nThe Seconds of Your Age is : %li seconds\n\npress 1 to reset the Age converter and 0 to Exit :",g*12*30*24*60*60);
    scanf("%i",&exit_age);
    if (exit_age==1)
    {
        system("cls");
        age();
    }
    else if (exit_age==0)
    {
        system("cls");
        menu();
    }
}