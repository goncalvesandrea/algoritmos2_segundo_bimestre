#include "funcoes.h"


char menu () {	
	char escolha = ' ';
		std::cout << "\nDIGITE O NUMERO DA OPCAO DESEJADA:\n";
		std::cout << "1 - Cadastro de novo aluno\n";
		std::cout << "2 - Lista geral de alunos\n";
		std::cout << "3 - Lista de alunos aprovados\n";
		std::cout << "4 - Lista de alunos reprovados\n";
		std::cout << "5 - Lista de alunos que devem fazer substitutiva do primeiro bimestre\n";
		std::cout << "6 - Lista de alunos que devem fazer substitutiva do segundo bimestre\n";
		std::cout << "7 - FINALIZAR\n";
		std::cin >> escolha;
		system("cls");
	return escolha;
}
bool cadastraAluno (Aluno aluno) {
		std::ofstream arquivo;
		arquivo.open("database.csv", std::fstream::app);
	
		if (!arquivo.is_open()) {
			std::cout << "Houve um erro ao abrir o arquivo!\n";
			return false;	
		}
	
	arquivo << aluno.nome << ";" 
			<< aluno.matricula << ";"
			<< aluno.aep1 << ";"
			<< aluno.prova1 << ";"
			<< aluno.aep2 << ";"
			<< aluno.prova2 << ";"
			<< aluno.sub << ";"
			<< aluno.media << ";"
			<< aluno.status << "\n";
	
		arquivo.close();
		return true;
	}
void cadastro (Aluno aluno) {
		std::cout << "Nome do aluno:\n";
		std::cin >> aluno.nome;
		std::cout << "Matricula do aluno:\n";
		std::cin >> aluno.matricula;
		std::cout << "Nota prova 1:\n";
		std::cin >> aluno.prova1;
		std::cout << "Nota AEP 1:\n";
		std::cin >> aluno.aep1;
		std::cout << "Nota prova 2:\n";
		std::cin >> aluno.prova2;
		std::cout << "Nota AEP 2:\n";
		std::cin >> aluno.aep2;
	
		float media1 = (aluno.prova1 + aluno.aep1);
		float media2 = (aluno.prova2 + aluno.aep2);
		aluno.media = (media1/2) + (media2/2);
		
		if(aluno.media >= 6){
			aluno.status = "Aprovado\n";
		}else if (aluno.media > 6){
			std::cout << "Nota substitutiva:\n";
			std::cin >> aluno.sub;
			}
		if (aluno.media >= 6){
			std::cout << "Aprovado\n";
		}else{
			std::cout << "Reprovado\n";
		}
	aluno.media = 0;
	aluno.sub = 0;
	aluno.status = "nao calculado\n";
		if (cadastraAluno (aluno)) {
			std::cout << "Aluno cadastrado\n";
		}else{
			std::cout << "Erro ao cadastrar aluno\n";
		}	
}
bool realizaLeituraArquivo () {
		std::fstream arquivo;
		arquivo.open("database.csv");
		if (!arquivo.is_open()) {
			std::cout << "Houve um erro ao abrir o arquivo!\n";
			return false;	
		}
		std::string linha;
		int indexAluno = 0;
		while (std::getline(arquivo, linha)) {
		int coluna = 0;
		int controleColuna = 0;
		std::string conteudo = "";
		for (int i = 0; i < linha.size(); i++) {
			if (coluna == 1 && controleColuna == 0)  {
				alunos[indexAluno].nome = conteudo;	
				conteudo = "";
				controleColuna = 1;
			} else if (coluna == 2 && controleColuna == 1) {
				alunos[indexAluno].matricula = conteudo;	
				conteudo = "";
				controleColuna = 2;
			}
			if (linha[i] == ';') {
				coluna++;				
				continue;
			}
			conteudo.push_back(linha[i]);					
			}
		indexAluno++;
	}
	arquivo.close();
	
	// teste
	for (int i = 0; i < 100; i++) {
		std::cout << "Aluno: " << i+1 << "\n";
		std::cout << "Nome: " << alunos[i].nome << "\n";
		std::cout << "Matricula: " << alunos[i].matricula << "\n";
		}
		return true;
}