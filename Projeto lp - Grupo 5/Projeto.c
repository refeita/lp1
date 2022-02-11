#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
  int pessoas, menu,falha;
  float temperatura; 
  char Opcao,Mascara,instrucoes; 
  
  while(Opcao != 'X'){ // vai rodar, contanto que op não seja X
    system("cls");
 	setlocale(LC_ALL,"Portuguese");
    printf("Seja bem vindo ao programa 'Covid Control',\num programa feito por alunos de Linguaguem de programação 1.\nEsse programa tem como finalidade verificar os vesitante de um \ndeterminado estabelecimento, levando em conta se o mesmo segue a normas de segurança, para o não contagio do covid-19. \n\n");
    printf("\n          COVID CONTROL\n\n  (1) Iniciar a análise\n(Nessa opção será verificado se você está seguindo os protocolos de segurança)\n \n (2) Sair do sistema\n\n");
    scanf("%c", &Opcao);
    fflush(stdin);
    system("cls");

    if(Opcao=='1'){
        //Pergunta 1
      printf("\nResponda S se caso estiver de máscara e N para caso não esteja:\n");
      scanf("%c", &Mascara);

         if(Mascara =='S' || Mascara == 's') { 
           printf("\nProsseguir com verificação\n"); 
         //Pergunta 2
           printf("\nQual temperatura corporal indicado pelo Termômetro digital?\n(A temperatura é considerada elevada quando é \nsuperior aos 38°C)\n");
           scanf("%f",&temperatura);

            if( temperatura<38){
             printf("\nProsseguir com verificação\n");
         //Pergunta 3
             printf("\nQuantidade de pessoas a entrar no local por 100m2?:\n");//3
             scanf("%d",&pessoas);

              if(pessoas<=4){ 
               printf("\nPode entrar\n");
               printf("\n  Vale lembrar:\nÉ importante manter as medidas de proteção: \nlavar as mãos frequentemente com água e sabão ou álcool em gel,\ncobrir a boca com o antebraço quando tossir ou espirrar \n(ou utilize um lenço descartável e, após tossir/espirrar,\njogue-o no lixo e lave as mãos). É importante manter-se a pelo menos 1 metro de distância das outras pessoas.\nQuando o distanciamento físico não é possível,\no uso de uma mascara também é uma medida importante.\n\n");
               system("pause");
			   }
              else{
               printf("\nO governo estabeleceu que só pode ter 4 pessoas por 100m2,\n você não pode entrar no estabelecimento, espere alguem sair\n\n");
               system("pause");
               
               }
            }else if(temperatura>=38){
             printf("\nVocê não pode entrar no estabelecimento, procure uma unidade de saúde para descobrir a causa da sua febre\n\n");
            	system("pause");	
			}
          } else if(Mascara =='N' || Mascara == 'n') {
            printf("\nVocê não pode entrar no estabelecimento\n\n");
            system("pause");
        } 
 
      }

      else if(Opcao=='2'){
        printf("\n  Vale lembrar:\nÉ importante manter as medidas de proteção: \nlavar as mãos frequentemente com água e sabão ou álcool em gel,\ncobrir a boca com o antebraço quando tossir ou espirrar \n(ou utilize um lenço descartável e, após tossir/espirrar,\njogue-o no lixo e lave as mãos). É importante manter-se a pelo menos 1 metro de distância das outras pessoas.\nQuando o distanciamento físico não é possível,\no uso de uma mascara também é uma medida importante.\n\n");
       	system("pause");
      }

      else{
         printf("Opção não válida!");
         printf("\n  Mas Vale lembrar:\nÉ importante manter as medidas de proteção: \nlavar as mãos frequentemente com água e sabão ou álcool em gel,\ncobrir a boca com o antebraço quando tossir ou espirrar \n(ou utilize um lenço descartável e, após tossir/espirrar,\njogue-o no lixo e lave as mãos). É importante manter-se a pelo menos 1 metro de distância das outras pessoas.\nQuando o distanciamento físico não é possível,\no uso de uma mascara também é uma medida importante.\n");
         system("pause");
      }
      
      getchar(); 
   }
   
   return 0;
}
