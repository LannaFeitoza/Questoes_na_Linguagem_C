#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int codigo_usuario, senha;

    printf("Digite o c�digo de usu�rio: ");
    scanf("%d", &codigo_usuario);

    if(codigo_usuario == 1234){
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if(senha == 9999)
           printf("Acesso permitido");

        else
           printf("Senha incorreta");
    }

    else{
        printf("Usu�rio inv�lido!");
    }

    return 0;

}
