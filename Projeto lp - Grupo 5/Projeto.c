#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
  int pessoas, menu,falha;
  float temperatura; 
  char Opcao,Mascara,instrucoes; 
  
  while(Opcao != 'X'){ // vai rodar, contanto que op n�o seja X
    system("cls");
 	setlocale(LC_ALL,"Portuguese");
    printf("Seja bem vindo ao programa 'Covid Control',\num programa feito por alunos de Linguaguem de programa��o 1.\nEsse programa tem como finalidade verificar os vesitante de um \ndeterminado estabelecimento, levando em conta se o mesmo segue a normas de seguran�a, para o n�o contagio do covid-19. \n\n");
    printf("\n          COVID CONTROL\n\n  (1) Iniciar a an�lise\n(Nessa op��o ser� verificado se voc� est� seguindo os protocolos de seguran�a)\n \n (2) Sair do sistema\n\n");
    scanf("%c", &Opcao);
    fflush(stdin);
    system("cls");

    if(Opcao=='1'){
        //Pergunta 1
      printf("\nResponda S se caso estiver de m�scara e N para caso n�o esteja:\n");
      scanf("%c", &Mascara);

         if(Mascara =='S' || Mascara == 's') { 
           printf("\nProsseguir com verifica��o\n"); 
         //Pergunta 2
           printf("\nQual temperatura corporal indicado pelo Term�metro digital?\n(A temperatura � considerada elevada quando � \nsuperior aos 38�C)\n");
           scanf("%f",&temperatura);

            if( temperatura<38){
             printf("\nProsseguir com verifica��o\n");
         //Pergunta 3
             printf("\nQuantidade de pessoas a entrar no local por 100m2?:\n");//3
             scanf("%d",&pessoas);

              if(pessoas<=4){ 
               printf("\nPode entrar\n");
               printf("\n  Vale lembrar:\n� importante manter as medidas de prote��o: \nlavar as m�os frequentemente com �gua e sab�o ou �lcool em gel,\ncobrir a boca com o antebra�o quando tossir ou espirrar \n(ou utilize um len�o descart�vel e, ap�s tossir/espirrar,\njogue-o no lixo e lave as m�os). � importante manter-se a pelo menos 1 metro de dist�ncia das outras pessoas.\nQuando o distanciamento f�sico n�o � poss�vel,\no uso de uma mascara tamb�m � uma medida importante.\n\n");
               system("pause");
			   }
              else{
               printf("\nO governo estabeleceu que s� pode ter 4 pessoas por 100m2,\n voc� n�o pode entrar no estabelecimento, espere alguem sair\n\n");
               system("pause");
               
               }
            }else if(temperatura>=38){
             printf("\nVoc� n�o pode entrar no estabelecimento, procure uma unidade de sa�de para descobrir a causa da sua febre\n\n");
            	system("pause");	
			}
          } else if(Mascara =='N' || Mascara == 'n') {
            printf("\nVoc� n�o pode entrar no estabelecimento\n\n");
            system("pause");
        } 
 
      }

      else if(Opcao=='2'){
        printf("\n  Vale lembrar:\n� importante manter as medidas de prote��o: \nlavar as m�os frequentemente com �gua e sab�o ou �lcool em gel,\ncobrir a boca com o antebra�o quando tossir ou espirrar \n(ou utilize um len�o descart�vel e, ap�s tossir/espirrar,\njogue-o no lixo e lave as m�os). � importante manter-se a pelo menos 1 metro de dist�ncia das outras pessoas.\nQuando o distanciamento f�sico n�o � poss�vel,\no uso de uma mascara tamb�m � uma medida importante.\n\n");
       	system("pause");
      }

      else{
         printf("Op��o n�o v�lida!");
         printf("\n  Mas Vale lembrar:\n� importante manter as medidas de prote��o: \nlavar as m�os frequentemente com �gua e sab�o ou �lcool em gel,\ncobrir a boca com o antebra�o quando tossir ou espirrar \n(ou utilize um len�o descart�vel e, ap�s tossir/espirrar,\njogue-o no lixo e lave as m�os). � importante manter-se a pelo menos 1 metro de dist�ncia das outras pessoas.\nQuando o distanciamento f�sico n�o � poss�vel,\no uso de uma mascara tamb�m � uma medida importante.\n");
         system("pause");
      }
      
      getchar(); 
   }
   
   return 0;
}
