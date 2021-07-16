#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char elevador[2], turno[2];
    int A=0, B=0, C=0, M=0, V=0, N=0, total=0;
    int am=0, av=0, an=0, bm=0, bv=0, bn=0, cm=0, cv=0, cn=0;
    float pormedia, dif;

    printf("-> Código dos elevadores:\nA\nB\nC\n");
    printf("\n-> Código dos turnos:\nM = matutino\nV = vespertino\nN = noturno\n");
    printf("\nPara finalizar digite F no código do elevador. \n");

    do{
        printf("\nDigite o elevador que utiliza com mais frequência: ");
        scanf("%s", elevador);

        if(strcmp(elevador, "F") != 0){
            printf("Digite o turno em que mais utiliza o elevador: ");
            scanf("%s", turno);

            if(strcmp(elevador, "A") == 0) A++;
            if(strcmp(elevador, "B") == 0) B++;
            if(strcmp(elevador, "C") == 0) C++;

            if(strcmp(turno, "M") == 0) M++;
            if(strcmp(turno, "V") == 0) V++;
            if(strcmp(turno, "N") == 0) N++;

            if((strcmp(elevador, "A") == 0) && (strcmp(turno, "M") == 0)) am++;
            if((strcmp(elevador, "A") == 0) && (strcmp(turno, "V") == 0)) av++;
            if((strcmp(elevador, "A") == 0) && (strcmp(turno, "N") == 0)) an++;

            if((strcmp(elevador, "B") == 0) && (strcmp(turno, "M") == 0)) bm++;
            if((strcmp(elevador, "B") == 0) && (strcmp(turno, "V") == 0)) bv++;
            if((strcmp(elevador, "B") == 0) && (strcmp(turno, "N") == 0)) bn++;

            if((strcmp(elevador, "C") == 0) && (strcmp(turno, "M") == 0)) cm++;
            if((strcmp(elevador, "C") == 0) && (strcmp(turno, "V") == 0)) cv++;
            if((strcmp(elevador, "C") == 0) && (strcmp(turno, "N") == 0)) cn++;

            total++;
        }

    }while(strcmp(elevador, "F") != 0);

    if((M > V) && (M > N) && (V > N)) dif= M - N;
    if((M > V) && (M > N) && (V < N)) dif= M - V;
    if((V > M) && (V > N) && (M > N)) dif= V - N;
    if((V > M) && (V > N) && (M < N)) dif= V - M;
    if((N > M) && (N > V) && (M > V)) dif= N - V;
    if((N > M) && (N > V) && (M < V)) dif= N - M;

    dif= dif * 100 / total;

    if((A > B) && (A > C) && (B > C)) pormedia= B;
    if((A > B) && (A > C) && (B < C)) pormedia= C;
    if((B > A) && (B > C) && (A > C)) pormedia= A;
    if((B > A) && (B > C) && (A < C)) pormedia= C;
    if((C > A) && (C > B) && (A > B)) pormedia= A;
    if((C > A) && (C > B) && (A < B)) pormedia= B;

    pormedia = pormedia * 100 / total;

    printf("\n-> O elevador mais utilizado foi ");
    if((A > B) && (A > C)) {
        printf("A ");
        printf("com maior fluxo no turno ");
        if((am > av) && (am > an)) printf("Matutino.");
        else if((av > am) && (av > an)) printf("Vespertino.");
        else printf("Noturno.");
    }

    else if((B > A) && (B > C)){
        printf("B ");
        printf("com maior fluxo no turno ");
        if((bm > bv) && (bm > bn)) printf("Matutino.");
        else if((bv > bm) && (bv > bn)) printf("Vespertino.");
        else printf("Noturno.");
    }

    else{
        printf("C ");
        printf("com maior fluxo no turno ");
        if((cm > cv) && (cm > cn)) printf("Matutino.");
        else if((cv > cm) && (cv > cn)) printf("Vespertino.");
        else printf("Noturno.");
    }

    printf("\n-> Período mais usado foi do turno ");
    if((M > V) && (M > N)){
        printf("Matutino ");
        printf("com o elevador ");
        if((am > bm) && (am > cm)) printf("A.\n");
        else if((bm > am) && (bm > cm)) printf("B.\n");
        else printf("C.\n");
    }

    else if((V > M) && (V > N)){
        printf("Vespertino ");
        printf("com o elevador ");
        if((av > bv) && (av > cv)) printf("A.\n");
        else if((bv > av) && (bv > cv)) printf("B.\n");
        else printf("C.\n");
    }

    else{
        printf("Noturno ");
        printf("com o elevador ");
        if((an > bn) && (an > cn)) printf("A.\n");
        else if((bn > an) && (bn > cn)) printf("B.\n");
        else printf("C.\n");
    }

    printf("-> Diferença porcentual do período mais usado e o menos usado: %.f%%\n", dif);
    printf("-> Porcentagem do elevador de frequência média: %.f%%\n", pormedia);

}
