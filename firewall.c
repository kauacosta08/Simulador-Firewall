#include <stdio.h>

int main() {
    //Inicializando variáveis
    int pacotes[6] = {0};

    printf("---SIMULADOR DE FIREWALL--- \n\n");

    //Digitando tamanho do pacote
    for(int i = 0; i < 6; i++){
    printf("Digite o tamanho dos pacotes [%d de 6]: \n", i + 1);
    scanf("%d", &pacotes[i]);
}

    printf("\n ---RESULTADO DA VARREDURA---\n\n");

   for(int i = 0; i < 6; i++){
        if(pacotes[i] > 120){
            printf("O arquivo %d de tamanho [%d] excedeu o tamanho limite permitido de 120! ---PACOTE BLOQUEADO---! \n", i, pacotes[i]);
        } else {
            printf("Pacote %d [Tamanho: %d]: ---ACESSO LIBERADO---! \n", i, pacotes[i]);
        }
    }
    printf("\n---FIM DA VARREDURA--- \n");


    return 0;
}