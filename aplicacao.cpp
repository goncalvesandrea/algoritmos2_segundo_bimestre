#include "funcoes.cpp"


int main () {
	char opcao = ' ';
	int addaluno = 1;
	char continua = ' ';
	Aluno aluno[100];
	do {
	   opcao = menu();	
	   switch (opcao) {
	   		case '1':
	   			for(int i = 0; i <= addaluno; i++){
	   					cadastro(aluno[i]);
				    std:: cout << "Deseja cadastrar mais alunos? S - sim ou N - nao.\n";
					std:: cin >> continua;
					if(continua == 'S'){
						addaluno++;
					}else if(continua == 'N'){
						break;
					}else{
						std:: cout << "Opcao invalida\n Tente Novamente!\n";
					}	
				   }
	   		break;
	   		case '2':
				realizaLeituraArquivo ();
      		break;
/*	   		case '3':
	   			criaArquivoAP();
	   		break;
	   		case '4':
	   			criaArquivoDP();
	   		break;
	   		case '5':
	   			criaArquivoSUB1();
	   		break;
	   		case '6':
	   			criaArquivoSUB2();
	   		break;
*/	   		case '7':
	   			std::cout << "Finalizando aplicacao...\n";
	   		break;
	   		default:
	   			std::cout << "Opcao invalida\n Tente novamente!\n";
	   }
	} while(opcao != '7');	
}
