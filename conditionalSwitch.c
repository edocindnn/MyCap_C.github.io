#include <stdio.h>
int main()
{
    printf("Hello, You are order please...\n");
    printf("Here is the MENU:\n1.)Pizza, Rs 239\n2.)Burger, Rs 129\n3.)Pasta, Rs 179\n4.)French Fries, Rs 99\n5.)Sandwich, Rs 149\n");
    int n;
    printf("Enter the number to choose your dish from the menu by the given order in that: ");
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        printf("Food item - Pizza \nPrice - Rs.239\n");
        break;
    case 2:
        printf("Food item - Burger \nPrice - Rs.129\n");
        break;
    case 3:
        printf("Food item - Pasta \nPrice - Rs.179\n");
        break;
    case 4:
        printf("Food item - French Fries \nPrice - Rs.99\n");
        break;
    case 5:
        printf("Food item - Sandwich \nPrice - Rs.149\n");
        break;
    default:
        printf("\t***Food item not found***\n");
        break;
    }
    return 0;
}
