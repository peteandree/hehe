#include <stdio.h>
int main()
{
    int num;
    printf("Input number: ");
    scanf("%d",&num);

    switch(num)
    {
        case 0:printf("Terminated by a hero");break;
        case 1:printf("Terminate a hero or opponent");break;
        case 2:printf("Exit Program");break;
        case 3:printf("Terminating Spree (3 Terminate in one life)");break;
        case 4:printf("Dominating (4 Terminate in one life)");break;
        case 5:printf("Mega Kill (5 Terminate in one life)");break;
        case 6:printf("Unstoppable (6 Terminate in one life)");break;
        case 7:printf("Wicked Sick (7 Terminate in one life)");break;
        case 8:printf("Monster Kill (8 Terminate in one life)");break;
        case 9:printf("Godlike! (9 Terminate in one life)");break;
        case 10:printf("Beyond Godlike!!!! (10 Terminate in one life)");break;
        default:printf("error");
    }

}
