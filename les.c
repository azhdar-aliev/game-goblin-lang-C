#include <stdio.h> // перепроцессор

int main (void) {  

    int goblin_gold = 20;
    int goblin_hp;
    int pleyer_gold = 0;
    char hero = '@';
    char action;

    

    printf("Ты атаковал гоблина. (а)-атака или (r)-убежать \n");

    action = getchar();


    while (action != 'r')
    {

        if ( action == 'a' || action == 'A'){

            for (goblin_hp = 3; goblin_hp >= 0; goblin_hp--)
            {
                if(goblin_hp > 0 && goblin_hp < 3)
                {
                    printf("Мы пнули гоблина. Гоблин HP: %d\n", goblin_hp);
                }

                if(goblin_hp == 0 ) 
                {
                    printf("Мы победили гоблина\n");
                    pleyer_gold += goblin_gold;
                    printf("Мы нашли %d золотых. Всего %d золотых\n", goblin_gold, pleyer_gold);
                    break;
                }

            }
        }





        printf("Что делать дальше? (а)-атака или (r)-убежать\n");
        getchar();
        action = getchar();
        

    }
    if(action == 'r'){
        printf("Вы решили убежать!!! Пока! \n");

    };


    return 0;
}
