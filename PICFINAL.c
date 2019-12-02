//bibliotecas declaradas
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <conio.c>
#define MASCARA '*'

//Variáveis globais
int a = 186;
int b = 185;
int c = 187;
int d = 188;
int e = 200;
int f = 201;
int g = 205;
int h = 204;

//Funcao Logo
logo(){
	printf("\n                                                    ___    _\n");
	printf("          00                             0000    __|   |__| |_\n");
	printf("         0000        00000000 000    000 0000   |             |_____\n");
	printf("        000000       00000000 000    000 0000  _|                   |__\n");
	printf("       000 0000          000  000    000 0000 |___                    _| \n");
	printf("      000   0000        000   000    000 0000     |__             ___|\n");
	printf("     000     0000      000    000    000 0000        |_         _|\n");
	printf("    00000000000000    000     000    000 0000          |__    _|\n");
	printf("   0000        0000  00000000  000  0000 0000            _| _|\n");
	printf("  0000          0000 00000000    0000 00 0000           |__|\n");
	printf("\n  LINHAS AEREAS BRASILEIRAS\n");
}

//Função ver colaboradores OK
void vercolaborador(){
	system("cls");
	int c=0,control=0;
	char pesq[15];
	char nome[50];
	char re[6];
	char funcao[50];
	char codigo[2];
	char nomecurso[50];
	char inicio[10];
	char duracao[2];
	char conclusao[10];
	char validade[10];
	char situacao[20]; 
	FILE *colaborador;
		while(control!=2){
			fflush(stdin);
			colaborador=fopen("colaborador.txt","r");
			printf("Digite o RE do funcionario:");
			gets(pesq);	
			while(fscanf(colaborador,"%s %s %s %s %s %s %s %s %s %s",nome,re,funcao,codigo,nomecurso,inicio,duracao,conclusao,validade,situacao)!=EOF){			
				if(strcmp(pesq, re)==0){
					printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",f,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,c);
					printf(" %c     FICHA COLABORADOR E SEUS CURSOS      %c\n",a,a);
					printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
					printf(" %c Nome:%s\n",a,nome);
					printf(" %c Registro do Empregado:%s\n",a,re);
					printf(" %c Funcao:%s\n",a,funcao);
					printf(" %c Codigo do Curso:%s\n",a,codigo);
					printf(" %c Nome do Curso:%s\n",a,nomecurso);
					printf(" %c Inicio:%s\n",a,inicio);
					printf(" %c Duracao:%s horas\n",a,duracao);
					printf(" %c Conclusao:%s\n",a,conclusao);
					printf(" %c Validade:%s\n",a,validade);
					printf(" %c Situacao:%s\n",a,situacao);
					printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,d);
				}
			}
			printf("Deseja Pesquisar Novamente(1) ou Voltar(2)?:\n");
			scanf("%d",&control);
			fclose(colaborador);
			system("cls");
		}
	menu();
}

//Função ver cursos no sistema OK
void vercurso(){
	system("cls");
	int c=0,control=0;
	char pesq[20];
	char funcao[50];
	char codigo[2];
	char nomecurso[50];
	char inicio[10];
	char duracao[2];
	char conclusao[10];
	char validade[10];
	char situacao[20]; 
	FILE *curso;
		while(control!=2){
			fflush(stdin);
			curso=fopen("cursovalido.txt","r");
			printf("Digite a situacao do curso:");
			gets(pesq);	
			while(fscanf(curso,"%s %s %s %s %s %s %s %s",funcao,codigo,nomecurso,inicio,duracao,conclusao,validade,situacao)!=EOF){			
				if(strcmp(pesq, situacao)==0){
					printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",f,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,c);
					printf(" %c         FICHA CURSO NO SISTEMA           %c\n",a,a);
					printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
					printf(" %c Funcao:%s\n",a,funcao);
					printf(" %c Codigo do Curso:%s\n",a,codigo);
					printf(" %c Nome do Curso:%s\n",a,nomecurso);
					printf(" %c Inicio:%s\n",a,inicio);
					printf(" %c Duracao:%s horas\n",a,duracao);
					printf(" %c Conclusao:%s\n",a,conclusao);
					printf(" %c Validade:%s\n",a,validade);
					printf(" %c Situacao:%s\n",a,situacao);
					printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,d);
				}
			}
			printf("Deseja Pesquisar Novamente(1) ou Voltar(2)?:\n");
			scanf("%d",&control);
			fclose(curso);
			system("cls");
		}
	menu();
}

//Função ver curso valido dos colaboradores OK
void vercursovalido(){
	system("cls");
	int c=0,control=0;
	char pesq[15];
	char nome[50];
	char re[6];
	char funcao[50];
	char codigo[2];
	char nomecurso[50];
	char inicio[10];
	char duracao[2];
	char conclusao[10];
	char validade[10];
	char situacao[20]; 
	FILE *colaborador;
		while(control!=2){
			fflush(stdin);
			colaborador=fopen("colaborador.txt","r");
			printf("Digite a situacao do curso:");
			gets(pesq);	
			while(fscanf(colaborador,"%s %s %s %s %s %s %s %s %s %s",nome,re,funcao,codigo,nomecurso,inicio,duracao,conclusao,validade,situacao)!=EOF){			
				if(strcmp(pesq, situacao)==0){
					printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",f,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,c);
					printf(" %c    FICHA CURSO VALIDO DO COLABORADOR     %c\n",a,a);
					printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
					printf(" %c Nome:%s\n",a,nome);
					printf(" %c Registro do Empregado:%s\n",a,re);
					printf(" %c Funcao:%s\n",a,funcao);
					printf(" %c Codigo do Curso:%s\n",a,codigo);
					printf(" %c Nome do Curso:%s\n",a,nomecurso);
					printf(" %c Inicio:%s\n",a,inicio);
					printf(" %c Duracao:%s horas\n",a,duracao);
					printf(" %c Conclusao:%s\n",a,conclusao);
					printf(" %c Validade:%s\n",a,validade);
					printf(" %c Situacao:%s\n",a,situacao);
					printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,d);
				}
			}
			printf("\nDeseja Pesquisar Novamente(1) ou Voltar(2)?\n");
			scanf("%d",&control);
			fclose(colaborador);
			system("cls");
		}
	menu();
}
//Função ver curso vencido dos colaboradores OK
void vercursovencido(){
	system("cls");
	int c=0,control=0;
	char pesq[15];
	char nome[50];
	char re[6];
	char funcao[50];
	char codigo[2];
	char nomecurso[50];
	char inicio[10];
	char duracao[2];
	char conclusao[10];
	char validade[10];
	char situacao[20]; 
	FILE *colaborador;
		while(control!=2){
			fflush(stdin);
			colaborador=fopen("colaborador.txt","r");
			printf("Digite a situacao do curso:");
			gets(pesq);	
			while(fscanf(colaborador,"%s %s %s %s %s %s %s %s %s %s",nome,re,funcao,codigo,nomecurso,inicio,duracao,conclusao,validade,situacao)!=EOF){			
				if(strcmp(pesq, situacao)==0){
					printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",f,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,c);
					printf(" %c    FICHA CURSO VENCIDO DO COLABORADOR    %c\n",a,a);
					printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
					printf(" %c Nome:%s\n",a,nome);
					printf(" %c Registro do Empregado:%s\n",a,re);
					printf(" %c Funcao:%s\n",a,funcao);
					printf(" %c Codigo do Curso:%s\n",a,codigo);
					printf(" %c Nome do Curso:%s\n",a,nomecurso);
					printf(" %c Inicio:%s\n",a,inicio);
					printf(" %c Duracao:%s horas\n",a,duracao);
					printf(" %c Conclusao:%s\n",a,conclusao);
					printf(" %c Validade:%s\n",a,validade);
					printf(" %c Situacao:%s\n",a,situacao);
					printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,d);
				}
			}
			printf("\nDeseja Pesquisar Novamente(1) ou Voltar(2)?\n");
			scanf("%d",&control);
			fclose(colaborador);
			system("cls");
		}
	menu();
}

//Função de Cadastro de colaboradores OK
void colaborador(){
	char nome[50];
	char re[6];
	char funcao[50];
	char codigo[2];
	char nomecurso[50];
	char inicio[10];
	char duracao[2];
	char conclusao[10];
	char validade[10];
	char datahoje[10];
	char situacao[20];
	FILE *colaborador;
	system("cls");
	int c=1;
	while(c==1){
		colaborador=fopen("colaborador.txt","a");
		fflush(stdin);
		//Cadastro do colaborador e seus cursos
		printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",f,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,c);
		printf(" %c   CADASTRO DE FUNCIONARIO E SEUS CURSOS  %c\n",a,a);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Primeiro nome do funcionario:            %c\n",a,a);
		printf(" %c",a);gets(nome);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Registro do Empregado:                   %c\n",a,a);
		printf(" %c",a);gets(re);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Funcao:                                  %c\n",a,a);
		printf(" %c",a);gets(funcao);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Codigo do Curso:                         %c\n",a,a);
		printf(" %c",a);gets(codigo);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Nome do Curso:                           %c\n",a,a);
		printf(" %c",a);gets(nomecurso);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Inicio:                                  %c\n",a,a);
		printf(" %c",a);gets(inicio);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Duracao:                                 %c\n",a,a);
		printf(" %c",a);gets(duracao);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Conclusao:                               %c\n",a,a);
		printf(" %c",a);gets(conclusao);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Validade:                                %c\n",a,a);
		printf(" %c",a);gets(validade);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Entre com a data de hoje:                %c\n",a,a);
		printf(" %c",a);gets(datahoje);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,d);
		if ( strcmp( validade , datahoje ) < 0)
		{
			printf("Curso vencido, digite vencido:\n");
			gets(situacao);
		}else{
			printf("Curso valido, digite valido:\n");
			gets(situacao);
		}
	//Gravando os dados no arquivo colaborador
		fprintf(colaborador,"%s ",nome);
		fprintf(colaborador,"%s ",re);
		fprintf(colaborador,"%s ",funcao);
		fprintf(colaborador,"%s ",codigo);
		fprintf(colaborador,"%s ",nomecurso);
		fprintf(colaborador,"%s ",inicio);
		fprintf(colaborador,"%s ",duracao);
		fprintf(colaborador,"%s ",conclusao);
		fprintf(colaborador,"%s ",validade);
		fprintf(colaborador,"%s ",situacao);
		
		printf("Deseja Cadastrar Novamente(1) ou Voltar(2)?:\n");
		scanf("%d",&c);
		sleep(1);
		fclose(colaborador);
		if(c==1){
			system("cls");
		}	
	}
	menu();
}

//Função de Cadastro de Curso no Sistema OK
void cursosistema(){
	system("cls");
	char funcao[50];
	char codigo[2];
	char nomecurso[50];
	char inicio[10];
	char duracao[2];
	char conclusao[10];
	char validade[10];
	char situacao[20];
	char datahoje[10];
	FILE *curso;
	system("cls");
	int c=1;
	while(c==1){
		curso=fopen("cursovalido.txt","a");
		fflush(stdin);
		//Cadastro de Cursos o Sistema
		printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",f,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,c);
		printf(" %c        CADASTRO DE CURSOS NO SISTEMA     %c\n",a,a);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Funcao Referente:                        %c\n",a,a);
		printf(" %c",a);gets(funcao);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Codigo do Curso:                         %c\n",a,a);
		printf(" %c",a);gets(codigo);		
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Nome do Curso:                           %c\n",a,a);
		printf(" %c",a);gets(nomecurso);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Inicio:                                  %c\n",a,a);
		printf(" %c",a);gets(inicio);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Duracao:                                 %c\n",a,a);
		printf(" %c",a);gets(duracao);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Conclusao:                               %c\n",a,a);
		printf(" %c",a);gets(conclusao);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Validade:                                %c\n",a,a);
		printf(" %c",a);gets(validade);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c Entre com a data de hoje:                %c\n",a,a);
		printf(" %c",a);gets(datahoje);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,d);
		//Coloca cada data numa string no formato  AAAA-MM-DD
		if ( strcmp( validade , datahoje ) < 0)
		{
			printf("Curso vencido, digite vencido:\n");
			gets(situacao);
		}else{
			printf("Curso valido, digite valido:\n");
			gets(situacao);
		}				
	//Gravando os dados no arquivo colaborador
		fprintf(curso,"%s ",funcao);
		fprintf(curso,"%s ",codigo);
		fprintf(curso,"%s ",nomecurso);
		fprintf(curso,"%s ",inicio);
		fprintf(curso,"%s ",duracao);
		fprintf(curso,"%s ",conclusao);
		fprintf(curso,"%s ",validade);
		fprintf(curso,"%s ",situacao);
		
		printf("Deseja Cadastrar Novamente(1) ou Voltar(2)?:\n");
		scanf("%d",&c);
		sleep(1);
		fclose(curso);
		if(c==1){
			system("cls");
		}
	}
	menu();
}

//Função do Menu Principal OK
menu(){
	system("cls");
	int opcao=6;
	while(opcao>=6){
	logo();
	printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",f,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,c);
	printf(" %c        CONTROLE DE TREINAMENTOS - AZUL    %c\n",a,a);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
	printf(" %c               MENU PRINCIPAL              %c\n",a,a);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
	printf(" %c 1 - CADASTRO DE COLABORADORES E CURSOS    %c\n",a,a);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
	printf(" %c 2 - VER COLABORADORES E CURSOS            %c\n",a,a);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
	printf(" %c 3 - CADASTRO DE CURSOS NO SISTEMA         %c\n",a,a);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
	printf(" %c 4 - VER CURSOS NO SISTEMA                 %c\n",a,a);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
	printf(" %c 5 - VER CURSOS VALIDOS DOS COLABORADORES  %c\n",a,a);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
	printf(" %c 6 - VER CURSOS VENCIDOS DOS COLABORADORES %c\n",a,a);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
	printf(" %c 7 - LOGOUT DO SISTEMA                     %c\n",a,a);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
	printf(" %c 8 - FECHAR O SISTEMA                      %c\n",a,a);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,d);
	printf(" ------>Digite a opcao desejada:             \n");
	printf("        ");scanf("%d",&opcao);
	switch(opcao){
		case 1:
		system("cls");
		sleep(1);
		//chama a função para cadastrar colaborador
		colaborador();	
		break;
		case 2:
		system("cls");
		sleep(1);
		//chama a função para ver o colaborador
		vercolaborador();
		break;
		case 3:
		system("cls");
		sleep(1);
		//chama a função para cadastrar cursos no sistema
		cursosistema();
		break;
		case 4:
		system("cls");
		sleep(1);
		//chama a função para visualizar cursos no sistema
		vercurso();
		break;
		case 5:
		system("cls");
		sleep(1);
		//chama a função para visualizar cursos validos dos colaboradores
		vercursovalido();
		break;
		case 6:
		system("cls");
		sleep(1);
		//chama a função para visualizar cursos vencidos dos colaboradores
		vercursovencido();
		break;
		case 7:
		system("cls");
		sleep(1);
		//Logout do programa
		sleep(1);
		main();
		case 8:
		system("cls");
		sleep(1);
		//Fecha do programa      
		printf("\nOBRIGADO POR USAR O CONTROLE DE TREINAMENTO AZUL!");
		sleep(1);
		exit(0);
		break;
		default:
		//trata erro de entrada
		system("cls");
		printf("\nEntrada Invalida!\n");
		break;	
		}
	}
}

//Função principal login OK
int main(){
	system("cls");
	textbackground(25);
	int i, j;
	system("cls");
	int ifor;
	char usuario[30];
	char senha[30];
	while(strcmp(usuario, "azul") || strcmp(senha, "azul")!=0){
		logo();
		printf("\n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",f,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,c);
		printf(" %c USUARIO                                  %c\n",a,a);
		printf(" %c ",a);scanf("%s",&usuario);
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,b);
		printf(" %c SENHA                                    %c\n",a,a);
		printf(" %c ",a);
		for(ifor=0 , i=getch(); i != '\r'; i=getch() , ifor++){
			putchar(MASCARA); /* imprime a mascara */
			if( ifor == 29 ) break;   /* se ultrapassar o buffer, sair */
				senha[ifor] = i;  /* coloca o caracter na senha */
		}	
		printf(" \n %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,d);	
		if(strcmp(usuario, "azul") || strcmp(senha, "azul")!=0){
			printf("  Usuario ou senha incorretos");
			printf("\n  Tente Novamente!");
		}
		sleep(1);
		system("cls");
	}
	    printf ("\n\n                                  LOADING: \n\n");          
        for (i = 1; i <= 99; i++){                
              printf ("\r  %d%%", i);      
              fflush (stdout);                         
        for (j = 25; j < i; j++){
            if (!j) // Da espaco na barra pra nao enconstar na borda da tela
               printf (" "); 
               printf ("%c", 219);
               Sleep(1);
           }                     
        } 
	menu();
	return 0;
}
