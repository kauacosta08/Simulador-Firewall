#include <stdio.h>

void realizarVarredura(int pacotes[6], int *total_bloqueados) {
    // 1. O laço para o usuário digitar os tamanhos
    for(int i = 0; i < 6; i++){
        printf("Digite o tamanho dos pacotes em Bytes [%d de 6]: \n", i + 1);
        scanf("%d", &pacotes[i]);
    }

    // 2. O laço que exibe o resultado do Firewall
    printf("\n ---RESULTADO DA VARREDURA---\n\n");
    for(int i = 0; i < 6; i++){
        if(pacotes[i] > 120){
            printf("O arquivo %d de tamanho [%d Bytes] excedeu o tamanho limite permitido de 120 Bytes! ---PACOTE BLOQUEADO---\n", i, pacotes[i]);
            (*total_bloqueados)++;
        } else {
            printf("Pacote %d [Tamanho: %d Bytes]: ---ACESSO LIBERADO---!\n", i, pacotes[i]);
        }
    }
    printf("\n---FIM DA VARREDURA---\n");
}


int main() {
    int pacotes[6] = {0};
    int opcoes;
    int rodando = 1; // 1 significa VERDADEIRO. O menu continuará rodando.
    int total_bloqueados = 0;

    
    while (rodando == 1) {
        
        printf("\n---SIMULADOR DE FIREWALL---\n\n");
        printf("MENU DE OPERACOES \n");
        printf("1. Iniciar varredura \n");
        printf("2. Consultar regras \n");
        printf("3. Fechar Firewall \n");
        printf("4. Contador de ameaças \n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcoes);

        switch (opcoes)
        {
            case 1: realizarVarredura(pacotes, &total_bloqueados);
                break; // Termina o case 1 e volta para o topo do while!

            case 2: 
                printf("\n[REGRA] Regra de Firewall: O tamanho do pacote nao pode superar 120 Bytes!\n");
                break; // Termina o case 2 e volta para o topo do while!

            case 3:
                printf("\nVoce saiu do Firewall!\n");
                rodando = 0; 
                break;

            case 4:
                printf("\n=========================================\n");
                printf("      PAINEL DE METRICAS DO FIREWALL     \n");
                printf("=========================================\n");
                printf(" Total de ameacas barradas ate agora: [%d]\n", total_bloqueados);
                printf("=========================================\n");
                break;    

            default:
                printf("\nOpcao Invalida!\n");
                break;
        }
    }

    return 0; 
}