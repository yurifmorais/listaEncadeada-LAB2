#ifndef _funcoes_H_
#define _funcoes_H_
#include <stdbool.h>

typedef struct Curso
{
    char nome_curso[50]; 
    struct Curso *prox; 
}curso; 

typedef struct Aluno
{
    int matricula; 
    char nome[50]; 
    struct Curso *curso; 
    struct Aluno *prox; 
}aluno; 

typedef struct Professor
{
    int siape; 
    char nome[50]; 
    char area_atuacao[50]; 
    char titulacao[50]; 
    struct Professor *prox; 
}professor; 

typedef struct Disciplina
{
    int codigo; 
    char nome[50]; 
    float carga_horaria; 
    char pre_requisitos[50]; 
    struct Curso *Cursos; 
    struct Disciplina *prox;
}disciplina;

typedef struct Avaliacoes
{
    float notas; 
    struct Aluno *aluno;
    struct Turma *turma;
    struct Avaliacoes *prox;
}avaliacoes; 

typedef struct Turma
{ 
    int codigo_turma; 
    int cont_aluno; 
    int cont_professor; 
    struct Disciplina *disc; 
    struct Aluno *alunos[50];
    struct Professor *professores[50];//3
    struct Turma *prox;
}turma;

void inicia_curso(curso *le);
void inicia_disciplina(disciplina *le);
void inicia_turma(turma *le);
void inicia_professor(professor *le);
void inicia_aluno(aluno *le);
void inicia_avaliacao(avaliacoes *le);
curso *cria_curso();
disciplina *cria_disciplina();
turma *cria_turma();
professor *cria_professor();
aluno *cria_aluno();
avaliacoes *cria_avaliacao();
int quantidade_cursos(curso *le);
int quantidade_disciplina(disciplina *le);
int quantidade_turmas(turma *le);
int quantidade_professores(professor *le);
int quantidade_alunos(aluno *le);
int quantidade_avaliacoes(avaliacoes *le);
void exibe_dados_curso(curso *le);
void exibe_dados_disciplina(disciplina *le);
void exibe_dados_turma(turma *le);
void exibe_dados_professores(professor *le);
void exibe_dados_alunos(aluno *le);
void exibe_dados_avaliacoes(avaliacoes *le);
void cadastrar_curso(curso *le);
void cadastrar_disciplina(disciplina *le, curso *lec);
void cadastrar_turma(turma *le, aluno *lea, professor *lep, disciplina *led);
void cadastrar_professor(professor *le);
void cadastrar_aluno(aluno *le, curso *lec);
void cadastrar_avaliacao(avaliacoes *le, turma *let, aluno *lea);
void altera_curso(curso *le);
void altera_disciplina(disciplina *le, curso *lec);
void altera_professor(professor *le);
void altera_aluno(aluno *le, curso *lec);
void altera_turma(turma *le, disciplina *led, aluno *lea);
void altera_avaliacoes(avaliacoes *le);//verificar
bool busca_disciplina(disciplina *le, int codigo_buscado); 
bool busca_professor(professor *le, int siape_buscado);
bool busca_aluno(aluno *le, int matricula_buscada);
bool busca_turma(turma *le, int codigo_buscado);
void busca_disciplina_imprime(disciplina *le, int codigo_buscado);
void busca_professor_imprime(professor *le, int siape);
void busca_aluno_imprime(aluno *le, int matri);
void busca_turma_imprime(turma *le, int codigo);
void deleta_disciplina(disciplina *le, turma *let);
void libera_curso(curso *le);
void libera_disciplina(disciplina *le);
void libera_professor(professor *le);
void libera_aluno(aluno *le);
void libera_turma(turma *le);
void libera_avaliacoes(avaliacoes *le);
void relatorio(avaliacoes *le, turma *let, aluno *lea);
void menu_principal();
#endif