#include <stdio.h> // перепроцессор

int main (void) {  

    int gold = 15;
    int hp_goblin = 3;
    char hero = '@';
    char action;

    

    printf("Ты атаковал гоблина. (а)-атака или (r)-убежать \n");

    action = getchar();


    while (hp_goblin < 0 || action != 'r')
    {
        if ( action == 'a' || action == 'A'){
        hp_goblin = hp_goblin - 1;  // 1
        printf("Мы пнули гоблина. Гоблин HP: %d\n", hp_goblin);
        }

        printf("Вы нажали: %c\n", action);

        if(hp_goblin < 1) {
        printf("Мы убили гоблина\n");

        printf("Мы нашли %d золотых\n", gold);
        }
        else
        {
        printf("Гоблин убежал!!!\n");

        }
        if(hp_goblin <= 0) {
            break;
        }

        printf("Что делать дальше?\n");
        getchar();
        action = getchar();
        

    }
    
    printf("Вы решили убежать!!! Пока! \n");

    


    return 0;
}