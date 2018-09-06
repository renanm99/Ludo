#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int jogadores[] = {1,2,3,4};
    int ponteiro1 = 0;
    int ponteiro2 = 13;
    int ponteiro3 = 26;
    int ponteiro4 = 39;

    int volta2 = 0;
    int volta3 = 0;
    int volta4 = 0;


/*
    int vet_Caminho_1 [59] = {1,0};
    int vet_Caminho_2 [59] = {2,0};
    int vet_Caminho_3 [59] = {3,0};
    int vet_Caminho_4 [59] = {4,0};
*/
    int vet_Caminho[60] = {0};
    int i;

    /*
    59 pontos
    jogador 1 começa em 1 e vai até 59
    jogador 2 começa em 14 e vai até 13
    jogador 3 começa em 27 e vai até 26
    jogador 4 começa em 40 e vai até 39
    */

    srand(time(NULL));
    printf("\n");
    for(i=0;i<4;i++){

        int dados = 1+rand()%6;
        printf("Jogador %d rolou %d nos dados!\n",i+1,dados);

        if(i==0){
            if(vet_Caminho[ponteiro1] == 1){
                vet_Caminho[ponteiro1] = 0;
            }

            ponteiro1 = ponteiro1 + dados;

            if(ponteiro1<=59){
                if(ponteiro1==59){
                    printf("Jogador %d esta na posicao %d\n", i+1,ponteiro1);
                    printf("Jogador 1 Ganhou!!\n");
                    vet_Caminho[ponteiro1] = 1;
                    int a;
                    printf("\n");
                    for(a = 0;a<60;a++){
                        printf("%d",vet_Caminho[a]);
                    }
                    printf("\n");
                    return 0;
                }
            }else if(ponteiro1>59){
                ponteiro1 = 59 - (dados - (59-(ponteiro1-dados)));
            }

            if(vet_Caminho[ponteiro1]!=0){
                if(vet_Caminho[ponteiro1]==2){
                    ponteiro2 = 13;
                    printf("Jogador %d foi chutado!\n",2);
                    //
                }else if(vet_Caminho[ponteiro1]==3){
                    ponteiro3 = 26;
                    printf("Jogador %d foi chutado!\n",3);
                    //
                }else if(vet_Caminho[ponteiro1]==4){
                    ponteiro4 = 39;
                    printf("Jogador %d foi chutado!\n",4);
                    //
                }
            }

            vet_Caminho[ponteiro1] = jogadores[i];
            printf("Jogador %d esta na posicao %d\n\n", i+1,ponteiro1);

        }
        else if(i==1){
            if(vet_Caminho[ponteiro2]==2){
                vet_Caminho[ponteiro2] = 0;
            }

            if(ponteiro2+dados > 59){
                ponteiro2 = dados-(59-ponteiro2);
                volta2 = 1;
            }else{
                ponteiro2 = ponteiro2 + dados;
            }

            if(ponteiro2>13 && ponteiro2<=59 || ponteiro2>0 && ponteiro2<=13){
                if(ponteiro2==13){
                    printf("Jogador %d esta na posicao %d\n", i+1,ponteiro2);
                    printf("Jogador 2 Ganhou!!\n");
                    vet_Caminho[ponteiro2] = 2;
                    int a;
                    printf("\n");
                    for(a = 0;a<60;a++){
                        printf("%d",vet_Caminho[a]);
                    }
                    printf("\n");
                    return 0;
                }
            }else if(ponteiro2>13 && volta2 == 1){
                ponteiro2 = 13 - (dados - (13-(ponteiro2-dados)));
            }

            if(vet_Caminho[ponteiro2]!=0){
                if(vet_Caminho[ponteiro2]==1){
                    ponteiro1 = 0;
                    printf("Jogador %d foi chutado!\n",1);
                    //
                }else if(vet_Caminho[ponteiro1]==3){
                    ponteiro3 = 26;
                    printf("Jogador %d foi chutado!\n",3);
                    //
                }else if(vet_Caminho[ponteiro1]==4){
                    ponteiro4 = 39;
                    printf("Jogador %d foi chutado!\n",4);
                    //
                }
            }

            vet_Caminho[ponteiro2] = jogadores[i];
            printf("Jogador %d esta na posicao %d\n\n", i+1,ponteiro2);

        }else if(i==2){

            if(vet_Caminho[ponteiro3]==3){
                vet_Caminho[ponteiro3] = 0;
            }

            if(ponteiro3+dados > 59){
                ponteiro3 = dados-(59-ponteiro3);
                volta3 = 1;
            }else{
                ponteiro3 = ponteiro3 + dados;
            }

            if(ponteiro3>26 && ponteiro3<=59 || ponteiro3>0 && ponteiro3<=26){
                if(ponteiro3==26){
                    printf("Jogador %d esta na posicao %d\n", i+1,ponteiro3);
                    printf("Jogador 3 Ganhou!!\n");
                    vet_Caminho[ponteiro3] = 3;
                    int a;
                    printf("\n");
                    for(a = 0;a<60;a++){
                        printf("%d",vet_Caminho[a]);
                    }
                    printf("\n");
                    return 0;
                }
            }else if(ponteiro3>26 && volta3 == 1){
                ponteiro3 = 26 - (dados - (26-(ponteiro3-dados)));
            }

            if(vet_Caminho[ponteiro3]!=0){
                if(vet_Caminho[ponteiro3]==1){
                    ponteiro1 = 0;
                    printf("Jogador %d foi chutado!\n",1);
                    //
                }else if(vet_Caminho[ponteiro1]==2){
                    ponteiro2 = 13;
                    printf("Jogador %d foi chutado!\n",2);
                    //
                }else if(vet_Caminho[ponteiro1]==4){
                    ponteiro4 = 39;
                    printf("Jogador %d foi chutado!\n",4);
                    //
                }
            }

            vet_Caminho[ponteiro3] = jogadores[i];
            printf("Jogador %d esta na posicao %d\n\n", i+1,ponteiro3);

        }else if(i==3){

            if(vet_Caminho[ponteiro4]==4){
                vet_Caminho[ponteiro4] = 0;
            }

            if(ponteiro4+dados > 59){
                ponteiro4 = dados-(59-ponteiro4);
                volta4 = 1;
            }else{
                ponteiro4 = ponteiro4 + dados;
            }

            if(ponteiro4>39 && ponteiro4<=49 || ponteiro4>0 && ponteiro4<=39){
                if(ponteiro4==39){
                    printf("Jogador %d esta na posicao %d\n", i+1,ponteiro4);
                    printf("Jogador 4 Ganhou!!\n");
                    vet_Caminho[ponteiro4] = 4;
                    int a;
                    printf("\n");
                    for(a = 0;a<60;a++){
                        printf("%d",vet_Caminho[a]);
                    }
                    printf("\n");
                    return 0;
                }
            }else if(ponteiro4>39 && volta4 == 1){
                ponteiro4 = 39 - (dados - (39-(ponteiro4-dados)));
            }

            if(vet_Caminho[ponteiro4]!=0){
                if(vet_Caminho[ponteiro4]==1){
                    ponteiro1 = 0;
                    printf("Jogador %d foi chutado!\n",1);
                    //
                }else if(vet_Caminho[ponteiro4]==2){
                    ponteiro2 = 13;
                    printf("Jogador %d foi chutado!\n",2);
                    //
                }else if(vet_Caminho[ponteiro1]==3){
                    ponteiro3 = 26;
                    printf("Jogador %d foi chutado!\n",3);
                    //
                }
            }

            vet_Caminho[ponteiro4] = jogadores[i];
            printf("Jogador %d esta na posicao %d\n\n", i+1,ponteiro4);

            i=-1;
        }
    }
    printf("\nJogo finalizado\n");
    return 0;
}
