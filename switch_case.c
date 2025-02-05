#include<stdio.h>
void main()
{
    int i;
    printf("Enter your lucky number and know your FUTURE!!!\n");
    printf("What is your lucky number from 1 to 3?\n");
    printf("Your Answer: ");
    scanf("%d",&i);
    switch(i)
    {
        case 1 : printf("You are smart and very good looking.\n You have a bright future.\n Though you are a bit lazy at present but when there will be a need to show your talent, you will be step ahead of everyone is showcasing your talent.\n You will get placed in a good company with a good package.\n You will live your life very happily!"); break;
        case 2 : printf("You are a kind, intelligent and harworking person.\n You have a bright future.\n Your hardwork and intelligence will help you achieve whatever you want.\n You are a very kind person and you like to help people without being selfish.\n You are a virtuous person.\n You always stay positive even in bad times.\n You will be an inspiration for many people.\n You will live a very happy life!"); break;
        case 3 : printf("You are a very active and sportive person.\n You are a fitness freak and like to do anything for being healthy.\n You like eating healthy food and avoid eating junk.\n You are a bit weak in studies because you spend most of your time in exercise.\n You have chances to become a sportsperson but the future is in your hands, you can choose your future according you your talent"); break;
        default: printf("(error) The number you entered is more than 3 or less than 1");
    }
}