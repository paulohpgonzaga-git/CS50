#include <cs50.h>
#include <stdio.h>

int main(void)
{
int tamanho = get_int("Digite o valor da pilha -> ");

for (int i=1;i<=tamanho;)
{

    for(int y=1;y<=i;){

        if (y==i){
        printf("#\n");
        }else
        {
          printf("#");
        }
    y++;
    }
i++;
}
}
