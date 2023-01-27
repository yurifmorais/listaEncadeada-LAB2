#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "funcoes.h"
////////////////////////// ---- FUNCOES DE INICIAR ---- //////////////////////////
void inicia_curso(curso *le){
	le->prox = NULL;
}
void inicia_disciplina(disciplina *le){
	le->prox = NULL;
}
void inicia_turma(turma *le){
	le->prox = NULL;
}
void inicia_professor(professor *le){
	le->prox = NULL;
}
void inicia_aluno(aluno *le){
	le->prox = NULL;
}
void inicia_avaliacao(avaliacoes *le){
	le->prox = NULL;
}
////////////////////////// ---- FUNCOES DE CRIAR ---- ///////////////////////////
curso *cria_curso(){
	curso *novo = (curso*)malloc(sizeof(curso));
	if(!novo){
		printf("\nSem memoria disponivel!");
		exit(1);
	}
  	return novo;
}
disciplina *cria_disciplina() 
{
	disciplina *novo = (disciplina*)malloc(sizeof(disciplina));
	if(!novo){
		printf("\nSem memoria disponivel!");
		exit(1);
	}
  	return novo;
}
turma *cria_turma() 
{
	turma *novo = (turma*)malloc(sizeof(turma));
	if(!novo){
		printf("\nSem memoria disponivel!");
		exit(1);
	}
  	return novo;
}
professor *cria_professor(){
	professor *novo = (professor*)malloc(sizeof(professor));
	if(!novo){
		printf("\nSem memoria disponivel!");
		exit(1);
	}
  	return novo;
}
aluno *cria_aluno(){ 
	aluno *novo = (aluno*)malloc(sizeof(aluno));
	if(!novo){
		printf("\nSem memoria disponivel!");
		exit(1);
	}
  	return novo;
}
avaliacoes *cria_avaliacao(){ 
	avaliacoes *novo = (avaliacoes*)malloc(sizeof(avaliacoes));
	if(!novo){
		printf("\nSem memoria disponivel!");
		exit(1);
	}
  	return novo;
}
////////////////////////// ---- FUNCOES DE QUANTIDADE ---- ///////////////////////////
int quantidade_cursos(curso *le){
    curso *tmp;
    tmp = le->prox;
    int qtde = 0;
    while(tmp != NULL){
        tmp = tmp->prox;
        qtde++;
    }
    return qtde; 
}
int quantidade_disciplina(disciplina *le){
    disciplina *tmp;
    tmp = le->prox;
    int qtde = 0;
    while(tmp != NULL){
        tmp = tmp->prox;
        qtde++;
    }
    return qtde; 
}
int quantidade_turmas(turma *le){
    turma *tmp;
    tmp = le->prox;
    int qtde = 0;
    while(tmp != NULL){
        tmp = tmp->prox;
        qtde++;
    }
    return qtde; 
}
int quantidade_professores(professor *le){
    professor *tmp;
    tmp = le->prox;
    int qtde = 0;
    while(tmp != NULL){
        tmp = tmp->prox;
        qtde++;
    }
    return qtde; 
}
int quantidade_alunos(aluno *le){
    aluno *tmp;
    tmp = le->prox;
    int qtde = 0;
    while(tmp != NULL){
        tmp = tmp->prox;
        qtde++;
    }
    return qtde; 
}
int quantidade_avaliacoes(avaliacoes *le){
    avaliacoes *tmp;
    tmp = le->prox;
    int qtde = 0;
    while(tmp != NULL){
        tmp = tmp->prox;
        qtde++;
    }
    return qtde; 
}
////////////////////////// ---- FUNCOES DE BUSCA ----- ////////////////////////////
bool busca_disciplina(disciplina *le, int codigo_buscado){ //retorna true se nao existe, e retorna false se ja existe
    if (le->prox == NULL) return true;
    else
    {   
        disciplina *tmp;
        tmp = le->prox;
        while (tmp != NULL)
        {          
            if (tmp->codigo == codigo_buscado) return false;
            tmp = tmp->prox;
        }
        return true;
    }
}
bool busca_professor(professor *le, int siape_buscado){ //retorna true se nao existe, e retorna false se ja existe
    if (le->prox == NULL) return true;
    else
    {   
        professor *tmp;
        tmp = le->prox;
        while (tmp != NULL)
        {          
            if (tmp->siape == siape_buscado) return false;
            tmp = tmp->prox;
        }
        return true;
    }
}
bool busca_aluno(aluno *le, int matricula_buscada){ //retorna true se nao existe, e retorna false se ja existe
    if (le->prox == NULL) return true;
    else
    {   
        aluno *tmp;
        tmp = le->prox;
        while (tmp != NULL)
        {   
            if (tmp->matricula == matricula_buscada) return false;
            tmp = tmp->prox;
        }
        return true;
    }
}
bool busca_turma(turma *le, int codigo_buscado){ //retorna true se nao existe, e retorna false se ja existe
    if (le->prox == NULL) return true;
    else
    {   
        turma *tmp;
        tmp = le->prox;
        while (tmp != NULL)
        {          
            if (tmp->codigo_turma == codigo_buscado) return false;
            tmp = tmp->prox;
        }
        return true;
    }
}
////////////////////////// ---- FUNCOES DE EXIBIR ---- ///////////////////////////
void exibe_dados_curso(curso *le){
    printf("--------------------------------------------------------------\n");
    if (le->prox == NULL) printf("Sem curso cadastrados!\n");
    else
    {
        curso *tmp;
        tmp = le->prox;
        int i = 1;
        printf("Cursos cadastradas:");
        while(tmp != NULL){
            printf("\n------------------");
            printf("\n(%d)", i);
            printf("\nNome: %s", tmp->nome_curso);
            tmp = tmp->prox;
            i++;
        }
    }
    printf("\n--------------------------------------------------------------\n");
}
void exibe_dados_disciplina(disciplina *le){
    printf("--------------------------------------------------------------\n");
    if (le->prox == NULL) printf("Sem disciplinas cadastrados!\n"); 
    else
    {
        disciplina *tmp;
        tmp = le->prox;
        int i = 1;
        printf("Disciplinas cadastradas:");
        while(tmp != NULL){
            printf("\n------------------");
            printf("\n(%d)", i);
            printf("\nCurso: %s", tmp->Cursos->nome_curso); 
            printf("\nNome disciplina: %s", tmp->nome);
            printf("\nCodigo: %d", tmp->codigo);
            printf("\nCarga Horaria: %.2f", tmp->carga_horaria);
            printf("\nPre-requisitos: %s", tmp->pre_requisitos);
            tmp = tmp->prox;
            i++;
        }
    }
    printf("\n--------------------------------------------------------------\n");
}
void exibe_dados_turma(turma *le){
    printf("--------------------------------------------------------------\n");
    if (le->prox == NULL) printf("Sem turmas cadastradas!\n"); 
    else{
        turma *tmp;
        tmp = le->prox;
        int i = 1;
        printf("Turmas cadastradas:");
        while(tmp != NULL){
            printf("\n------------------");
            printf("\n(%d)", i);
            printf("\nDisciplina: %s", tmp->disc->nome); 
            printf("\nCodigo turma: %d", tmp->codigo_turma); 
            if (tmp->cont_aluno > 0){
                printf("\nAlunos:");
                for (int i = 0; i < tmp->cont_aluno; i++) printf("\n\t(%d) %s", i+1, tmp->alunos[i]->nome);
            }
            if (tmp->cont_professor > 0){
                printf("\nProfessores:");
                for (int i = 0; i < tmp->cont_professor; i++) printf("\n\t(%d) %s", i+1, tmp->professores[i]->nome);
            }
            tmp = tmp->prox;
            i++;
        }
    }
    printf("\n--------------------------------------------------------------\n");
}
void exibe_dados_professores(professor *le){
    printf("--------------------------------------------------------------\n");
    if (le->prox == NULL) printf("Sem professores cadastrados!\n");
    else
    {
        professor *tmp;
        tmp = le->prox;
        int i = 1;
        printf("Professores cadastrados:");
        while(tmp != NULL){
            printf("\n------------------");
            printf("\n(%d)", i);
            printf("\nNome: %s", tmp->nome);
            printf("\nArea de atuacao: %s", tmp->area_atuacao);
            printf("\nTitulacao: %s", tmp->titulacao);
            printf("\nSiape: %d", tmp->siape);
            tmp = tmp->prox;
            i++;
        }
    }
    printf("\n--------------------------------------------------------------\n");
}
void exibe_dados_alunos(aluno *le){
    printf("--------------------------------------------------------------\n");
    if (le->prox == NULL) printf("Sem alunos cadastrados!\n"); 
    else
    {
        aluno *tmp;
        tmp = le->prox;
        int i = 1;
        printf("Alunos cadastrados:");
        while(tmp != NULL){
            printf("\n------------------");
            printf("\n(%d)", i);
            printf("\nNome: %s", tmp->nome);
            printf("\nCurso: %s", tmp->curso->nome_curso);
            printf("\nMatricula: %d", tmp->matricula);
            tmp = tmp->prox;
            i++;
        }
        printf("\n--------------------------------------------------------------");
    }
}
void exibe_dados_avaliacoes(avaliacoes *le){
    printf("--------------------------------------------------------------\n");
    if (le->prox == NULL) printf("Sem avaliacoes cadastradas!\n");
    else{
        avaliacoes *tmp;
        tmp = le->prox;
        int i = 1;
        printf("Avaliacoes cadastradas:");
        while(tmp != NULL){
            printf("\n------------------");
            printf("\n(%d)", i);
            printf("\nAluno: %s", tmp->aluno->nome); 
            printf("\nDisciplina: %s", tmp->turma->disc->nome); 
            printf("\nTurma: %d", tmp->turma->codigo_turma); 
            printf("\nNotas: %.2f", tmp->notas); 
            tmp = tmp->prox;
            i++;
        }
    }
    printf("\n--------------------------------------------------------------\n");
}
////////////////////////// ---- FUNCOES DE CADASTRO ---- ///////////////////////////
void cadastrar_curso(curso *le){
    printf("\n-> Novo cadastro de curso <-");
    curso *novo = cria_curso(); 
    
	printf("\nInforme o nome: "); 
    scanf (" %[^\n]", novo->nome_curso);  
    
    novo->prox = NULL;
    if (le->prox == NULL) le->prox = novo;
    else{
		curso *tmp = le->prox;

		while(tmp->prox != NULL){
			tmp = tmp->prox;
		}
		tmp->prox = novo;
	}
    printf("\nCurso %s cadastrado com sucesso!\n", novo->nome_curso);
}
void cadastrar_disciplina(disciplina *le, curso *lec){ 
    if (lec->prox == NULL) printf("\nSem cursos cadastrados! Primeiro cadastre um curso para entao cadastrar disciplinas.\n");
    else{
        printf("\n-> Novo cadastro de disciplina <-");
        disciplina *novo = cria_disciplina();
        curso *Curso; 
        Curso = lec->prox;
        int curso_escolhido, i = 1;
        int qtde_cursos = quantidade_cursos(lec);
        bool codigo_valido = false;
       
        printf("\nInforme o nome: ");
        scanf (" %[^\n]", novo->nome);
        printf("Carga horaria: ");
        scanf(" %f", &novo->carga_horaria);
        printf("Pre-requisitos: ");
        scanf (" %[^\n]", novo->pre_requisitos);
        do
        {       
            printf("Codigo da disciplina: ");
            scanf(" %d", &novo->codigo);
            codigo_valido = busca_disciplina(le, novo->codigo);
            if (codigo_valido == false) printf("Codigo ja existe. Tente novamente com outro codigo.\n");              
        } while (codigo_valido == false);
        
        exibe_dados_curso(lec);
        do
        {
            printf("Informe o numero do curso: ");
            scanf("%d", &curso_escolhido);
        } while (curso_escolhido <= 0 || curso_escolhido > qtde_cursos);
        
        for (int i = 1; i <= curso_escolhido; i++)
        {        
            if (i == curso_escolhido) novo->Cursos = Curso;
            Curso = Curso->prox;
        }

        novo->prox = NULL;
        if (le->prox == NULL) le->prox = novo;
        else{
            disciplina *tmp = le->prox;
            while(tmp->prox != NULL){
                tmp = tmp->prox;
            }
            tmp->prox = novo;
        }
    }
}
void cadastrar_turma(turma *le, aluno *lea, professor *lep, disciplina *led){

    if (lea->prox == NULL || lep->prox == NULL || led->prox == NULL) printf("\nSem alunos, professores ou disciplina cadastrados! Primeiro cadastre um aluno, professor e disciplina para entao cadastrar turma.\n");
    else{
        turma *novo = cria_turma();
        aluno *Aluno;
        professor *Professor;
        disciplina *Disciplina;
        Disciplina = led->prox;
        Aluno = lea->prox;

        printf("\n-> Novo cadastro de turma <-");
        bool codigo_valido = false;
        int aluno_escolhido, professor_escolhido, disciplina_escolhida;
        int qtde_alunos = quantidade_alunos(lea);
        int qtde_professor = quantidade_professores(lep);
        int qtde_disciplinas = quantidade_disciplina(led);

        do
        {       
            printf("\nInforme o codigo da nova turma: ");
            scanf(" %d", &novo->codigo_turma);
            codigo_valido = busca_turma(le, novo->codigo_turma);
            if (codigo_valido == false) printf("Codigo ja existe. Tente novamente com outro codigo.\n");              
        } while (codigo_valido == false);
        
        exibe_dados_alunos(lea);
        printf("\n");
        novo->cont_aluno = 0;
        do
        {   
            Aluno = lea->prox;
            printf("Informe o numero do aluno a ser matriculado (0 para sair): ");
            scanf("%d", &aluno_escolhido);
            if (aluno_escolhido > 0 && aluno_escolhido <= qtde_alunos)
            {
                for (int i = 1; i <= qtde_alunos; i++)
                {        
                    if (i == aluno_escolhido){
                        if (novo->cont_aluno > 50)  printf("\nLimite de 50 alunos atingido.\n");
                        else
                        {
                            novo->alunos[novo->cont_aluno] = Aluno; 
                            novo->cont_aluno++;
                        }
                    } 
                    Aluno = Aluno->prox;
                }
            }
            else if (aluno_escolhido < 0 || aluno_escolhido > qtde_alunos) printf("Informe um aluno valido.\n");            
        } while (aluno_escolhido != 0);
        
        exibe_dados_professores(lep);
        novo->cont_professor = 0;
        do
        {   
            Professor = lep->prox;
            printf("Informe o numero do professor a ser cadastrado na turma (0 para sair): ");
            scanf("%d", &professor_escolhido);
            if (professor_escolhido > 0 && professor_escolhido <= qtde_professor)
            {
                for (int i = 1; i <= qtde_professor; i++)
                {        
                    if (i == professor_escolhido){
                        novo->professores[novo->cont_professor] = Professor;                     
                        novo->cont_professor++;
                    } 
                    Professor = Professor->prox;
                }
            }
            else if (professor_escolhido < 0 || professor_escolhido > qtde_professor) printf("Informe um professor valido.\n");       
        } while (professor_escolhido != 0);

        exibe_dados_disciplina(led);
        do
        {
            printf("Informe a disciplina a ser ofertada na turma: ");
            scanf("%d", &disciplina_escolhida);
        } while (disciplina_escolhida <= 0 || disciplina_escolhida > qtde_disciplinas);
        
        for (int i = 1; i <= disciplina_escolhida; i++)
        {        
            if (i == disciplina_escolhida) novo->disc = Disciplina; 
            Disciplina = Disciplina->prox;
        }
        
        novo->prox = NULL;
        if (le->prox == NULL) le->prox = novo;
        else{
            turma *tmp = le->prox;
            while(tmp->prox != NULL){
                tmp = tmp->prox;
            }
            tmp->prox = novo;
        }
        printf("\n-> Turma cadastrada com sucesso!");
    }
}
void cadastrar_professor(professor *le){
    printf("\n-> Novo cadastro de professor <-");
    professor *novo = cria_professor();
    bool siape_valido = false;

	printf("\nInforme o nome: ");
    scanf (" %[^\n]", novo->nome);
    printf("Area de atuacao: ");
    scanf (" %[^\n]", novo->area_atuacao);
    printf("Titulacao: ");
    scanf (" %[^\n]", novo->titulacao);
    
    do
    {       
        printf("Siape: ");
        scanf(" %d", &novo->siape);
        siape_valido = busca_professor(le, novo->siape);
        if (siape_valido == false) printf("Siape ja existe. Tente novamente com outro siape.\n");              
    } while (siape_valido == false);
    
    novo->prox = NULL;
    if (le->prox == NULL) le->prox = novo;
    else{
		professor *tmp = le->prox;

		while(tmp->prox != NULL){
			tmp = tmp->prox;
		}
		tmp->prox = novo;
	}
}
void cadastrar_aluno(aluno *le, curso *lec){
    if (lec->prox == NULL) printf("\nSem cursos cadastradas! Primeiro cadastre um curso para entao cadastrar aluno.\n");
    else{
        aluno *novo = cria_aluno();
        curso *Curso;
        Curso = lec->prox;
        bool matricula_valida = false;

        printf("\n-> Novo cadastro de aluno <-");
        int curso_escolhido;
        int qtde_cursos = quantidade_cursos(lec);

        printf("\nInforme o nome: "); 
        scanf (" %[^\n]", novo->nome); 
        do
        {       
            printf("Informe a matricula: "); 
            scanf(" %d", &novo->matricula); 
            matricula_valida = busca_aluno(le, novo->matricula);
            if (matricula_valida == false) printf("Matricula ja existe. Tente novamente com outra matricula.\n");              
        } while (matricula_valida == false);
        
        exibe_dados_curso(lec);
        do
        {
            printf("Informe o numero do curso em que o aluno sera matriculado: ");
            scanf("%d", &curso_escolhido);
        } while (curso_escolhido <= 0 || curso_escolhido > qtde_cursos);
        
        for (int i = 1; i <= curso_escolhido; i++)
        {        
            if (i == curso_escolhido) novo->curso = Curso;  
            Curso = Curso->prox;
        }
        novo->prox = NULL;

        if (le->prox == NULL) le->prox = novo;
        else{
            aluno *tmp = le->prox;
            while(tmp->prox != NULL){
                tmp = tmp->prox;
            }
            tmp->prox = novo;
        }
    } 
}
void cadastrar_avaliacao(avaliacoes *le, turma *let, aluno *lea){
    if (let->prox == NULL) printf("\nSem turmas cadastradas! Primeiro cadastre uma turma com alunos para entao cadastrar avaliacoes.\n");
    else{
        turma *Turma;
        Turma = let->prox;
        aluno *Aluno;
        Aluno = lea->prox;

        int turma_escolhida, x;
        int qtde_turmas = quantidade_turmas(let);
        int qtde_alunos = quantidade_alunos(lea);
        float nota_aluno;
        printf("\n-> Novo lancamento de notas <-\n");
        exibe_dados_turma(let);
        do
        {
            printf("Informe a turma em que deseja lancar as notas: ");
            scanf("%d", &turma_escolhida);
        } while (turma_escolhida <= 0 || turma_escolhida > qtde_turmas);
        
        for (int i = 1; i <= turma_escolhida; i++)
        {        
            if (i == turma_escolhida)
            {
                x = 0;
                while (x != Turma->cont_aluno)
                {
                    if (Turma->alunos[x]->matricula == Aluno->matricula)
                    {
                        avaliacoes *novo = cria_avaliacao();
                        printf("Informe a nota do Aluno %s: ", Turma->alunos[x]->nome); 
                        scanf("%f", &nota_aluno);
                        novo->aluno = Aluno;
                        novo->notas = nota_aluno;
                        novo->turma = Turma;
                        novo->prox = NULL;
                        if (le->prox == NULL) le->prox = novo;
                        else{
                            avaliacoes *tmp = le->prox;
                            while(tmp->prox != NULL){
                                tmp = tmp->prox;
                            }
                            tmp->prox = novo;
                        }
                        x++;
                    }
                    if (Aluno->prox==NULL) Aluno = lea->prox;                 
                    else Aluno = Aluno->prox;            
                }
            }
            Turma = Turma->prox;
        }   
    } 
}
////////////////////////// ---- FUNCOES DE EDITAR ---- //////////////////////////
void altera_curso(curso *le){ 
    if (le->prox == NULL) printf("\nSem curso cadastrados!\n");
    else
    {
        curso *tmp;
        tmp = le->prox;
        int num_curso, i = 1;
        int total_cursos = quantidade_cursos(le);

        exibe_dados_curso(le);
        do
        {
            printf("\nInforme o numero do curso a ser editado: ");
            scanf(" %d", &num_curso);
        } while (num_curso <= 0 || num_curso > total_cursos);
        
        while (tmp != NULL)
        {      
            if (i == num_curso)
            {               
                printf("Informe o novo nome: ");
                scanf (" %[^\n]", tmp->nome_curso);                        
            }    
            i++;   
            tmp = tmp->prox;      
        }
    }
}
void altera_disciplina(disciplina *le, curso *lec){  
    if (le->prox == NULL) printf("\nSem disciplina cadastradas!\n");
    else
    {
        disciplina *tmp;
        tmp = le->prox;
        curso *Curso; 
        Curso = lec->prox;
        int num_disciplina, op, i = 1, curso_escolhido, codigo_temp;
        int qtde_disciplina = quantidade_disciplina(le);
        int qtde_cursos = quantidade_cursos(lec);
        bool codigo_valido = false;

        exibe_dados_disciplina(le);
        do
        {
            printf("\nInforme o numero da disciplina a ser editada: ");
            scanf("%d", &num_disciplina);
        } while (num_disciplina <= 0 || num_disciplina > qtde_disciplina);
        printf("\n\t-> Editar:\n");
        printf("\n\t---> 1. Nome");
        printf("\n\t---> 2. Codigo");
        printf("\n\t---> 3. Pre-requisitos");
        printf("\n\t---> 4. Carga horaria");
        printf("\n\t---> 5. Curso");
        printf("\n\t---> Opcao: ");
        scanf("%d", &op);
        
        while (tmp != NULL)
        {     
            if (i == num_disciplina)
            {    
                switch (op)
                {
                    case 1:    
                        printf("Informe o novo nome: ");
                        scanf (" %[^\n]", tmp->nome);
                        break;
                    case 2:
                        do
                        {       
                            printf("Informe o novo codigo da disciplina: ");
                            scanf(" %d", &codigo_temp);
                            codigo_valido = busca_disciplina(le, codigo_temp);
                            if (codigo_valido == false) printf("Codigo ja existe. Tente novamente com outro codigo.\n");              
                        } while (codigo_valido == false);  
                        tmp->codigo = codigo_temp;  
                        break;
                    case 3:   
                        printf("Informe os novos Pre-requisitos: ");
                        scanf (" %[^\n]", tmp->pre_requisitos);
                        break;
                    case 4:   
                        printf("Informe a nova carga horaria: ");
                        scanf(" %f", &tmp->carga_horaria);
                        break;
                    case 5:
                        exibe_dados_curso(lec);
                        do
                        {
                            printf("Informe o numero do novo curso: ");
                            scanf("%d", &curso_escolhido);
                        } while (curso_escolhido <= 0 || curso_escolhido > qtde_cursos);
                            
                        for (int i = 1; i <= curso_escolhido; i++)
                        {        
                            if (i == curso_escolhido) tmp->Cursos = Curso;
                            Curso = Curso->prox;
                        }
                        break;
                    default:
                        printf("\n\t---> Opcao invalida, tente novamente!");
                        break; 
                }
            }    
            i++;  
            tmp = tmp->prox;      
        }
    }
}
void altera_professor(professor *le){ 
    if (le->prox == NULL) printf("\nSem professores cadastrados!\n");
    else
    {
        professor *tmp;
        tmp = le->prox;
        bool siape_valido = false;
        int num_professor, op, i = 1, siape_temp;
        int total_professores = quantidade_professores(le);
        exibe_dados_professores(le);
        do
        {
            printf("Informe o numero do professor a ser editado: ");
            scanf("%d", &num_professor);
        } while (num_professor <= 0 || num_professor > total_professores);
        printf("\n\t-> Editar:\n");
        printf("\n\t---> 1. Nome");
        printf("\n\t---> 2. Area de atuacao");
        printf("\n\t---> 3. Titulacao");
        printf("\n\t---> 4. Siape");
        printf("\n\t---> Opcao: ");
        scanf("%d", &op);
        
        while (tmp != NULL)
        {     
            if (i == num_professor)
            {    
                switch (op)
                {
                    case 1:    
                        printf("Informe o novo nome: ");
                        scanf (" %[^\n]", tmp->nome);
                        break;
                    case 2:   
                        printf("Informe a nova area de atuacao: ");
                        scanf (" %[^\n]", tmp->area_atuacao);
                        break;
                    case 3:   
                        printf("Informe a nova titulacao: ");
                        scanf (" %[^\n]", tmp->titulacao);
                        break;
                    case 4:
                        do
                        {       
                            printf("Siape: ");
                            scanf(" %d", &siape_temp);
                            siape_valido = busca_professor(le, siape_temp);
                            if (siape_valido == false) printf("Siape ja existe. Tente novamente com outro siape.\n");              
                        } while (siape_valido == false); 
                        tmp->siape = siape_temp;
                        break;
                    default:
                        printf("Opcao invalida! Tente novamente");
                        break;
                }
            }    
            i++;  
            tmp = tmp->prox;      
        }
    }
}
void altera_aluno(aluno *le, curso *lec){ 
    if (le->prox == NULL) printf("\nSem alunos cadastrados!\n");
    else
    {
        aluno *tmp;
        tmp = le->prox;    
        curso *Curso; 
        Curso = lec->prox;
        bool matricula_valida = false;

        int num_aluno, op, i = 1, curso_escolhido, matricula_temp;
        int total_alunos = quantidade_alunos(le);
        int qtde_cursos = quantidade_cursos(lec);
        exibe_dados_alunos(le);
        do
        {
            printf("\nInforme o numero do aluno a ser editado: ");
            scanf("%d", &num_aluno);
        } while (num_aluno <= 0 || num_aluno > total_alunos);
        printf("\n\t-> Editar:\n");
        printf("\n\t---> 1. Nome");
        printf("\n\t---> 2. Matricula");
        printf("\n\t---> 3. Curso");
        printf("\n\t---> Opcao: ");
        scanf("%d", &op);
        
        while (tmp != NULL)
        {     
            if (i == num_aluno)
            {    
                switch (op)
                {
                    case 1:    
                        printf("Informe o novo nome: ");
                        scanf (" %[^\n]", tmp->nome);
                        break;
                    case 2:
                        do
                        {       
                            printf("Informe a nova matricula: "); 
                            scanf(" %d", &matricula_temp); 
                            matricula_valida = busca_aluno(le, matricula_temp);
                            if (matricula_valida == false) printf("Matricula ja existe. Tente novamente com outra matricula.\n");              
                        } while (matricula_valida == false);
                        tmp->matricula = matricula_temp;
                        break;
                    case 3:   
                        exibe_dados_curso(lec);
                        do
                        {
                            printf("Informe o numero do novo curso: ");
                            scanf("%d", &curso_escolhido);
                        } while (curso_escolhido <= 0 || curso_escolhido > qtde_cursos);
                            
                        for (int i = 1; i <= curso_escolhido; i++)
                        {        
                            if (i == curso_escolhido) tmp->curso = Curso;
                            Curso = Curso->prox;
                        }
                        break;
                    default:
                        printf("Opcao invalida! Tente novamente");
                        break;
                }
            }    
            i++;  
            tmp = tmp->prox;      
        }
    }
}
void altera_avaliacoes(avaliacoes *le){ 
    if (le->prox == NULL) printf("\nSem avaliacoes cadastradas!\n");
    else
    {
        avaliacoes *tmp;
        tmp = le->prox;  
        int num_avaliacao, i=1;
        int total_avaliacoes = quantidade_avaliacoes(le); 
        exibe_dados_avaliacoes(le);
        do
        {
            printf("Informe o numero da avaliacao a ser editada: ");
            scanf("%d", &num_avaliacao);
        } while (num_avaliacao <= 0 || num_avaliacao > total_avaliacoes);
        while (tmp != NULL)
        {     
            if (i == num_avaliacao)
            {   
                printf("Informe a nova nota: ");
                scanf (" %f", &tmp->notas);    
            }    
            i++;  
            tmp = tmp->prox;      
        }
    }
}
void altera_turma(turma *le, disciplina *led, aluno *lea){
    if (le->prox == NULL) printf("\nSem turmas cadastradas!\n");
    else
    {
        turma *tmp;
        tmp = le->prox;  
        disciplina *Disciplina;
        Disciplina = led->prox;     
        int total_turmas = quantidade_turmas(le);
        int qtde_disciplinas = quantidade_disciplina(led);
        int num_turma, op, i = 1, codigo_temp, disciplina_escolhida;
        bool codigo_valido = false;
        exibe_dados_turma(le);
        do
        {
            printf("Informe o numero da turma a ser editada: ");
            scanf(" %d", &num_turma);
        } while (num_turma <= 0 || num_turma > total_turmas);
        printf("\n\t-> Editar:\n");
        printf("\n\t---> 1. Codigo da turma");
        printf("\n\t---> 2. Disciplina");
        printf("\n\t---> Opcao: ");
        scanf("%d", &op);
        
        while (tmp != NULL)
        {     
            if (i == num_turma)
            {    
                switch (op)
                {
                    case 1:  
                        do
                        {       
                            printf("\nInforme o novo codigo da turma: ");
                            scanf(" %d", &codigo_temp);
                            codigo_valido = busca_turma(le, codigo_temp);
                            if (codigo_valido == false) printf("Codigo ja existe. Tente novamente com outro codigo.");              
                        } while (codigo_valido == false);  
                        tmp->codigo_turma = codigo_temp;
                        break;
                    case 2:   
                        exibe_dados_disciplina(led);
                        do
                        {
                            printf("Informe a nova disciplina a ser ofertada na turma: ");
                            scanf("%d", &disciplina_escolhida);
                        } while (disciplina_escolhida <= 0 || disciplina_escolhida > qtde_disciplinas);
                        
                        for (int i = 1; i <= disciplina_escolhida; i++)
                        {        
                            if (i == disciplina_escolhida) tmp->disc = Disciplina;
                            Disciplina = Disciplina->prox;
                        }
                        break;
                    default:
                        printf("Opcao invalida! Tente novamente");
                        break;
                }
            }    
            i++;  
            tmp = tmp->prox;      
        }
    }
}
void busca_disciplina_imprime(disciplina *le, int codigo_buscado){
    if (le->prox == NULL) printf("\nSem disciplina cadastradas!\n");
    else
    {   
        disciplina *tmp;
        tmp = le->prox;
        bool existe = false;
        while (tmp != NULL)
        {
            if (tmp->codigo == codigo_buscado)
            {
                printf("\n------------------");
                printf("\nDisciplina encontrada:\n");
                printf("\nNome: %s", tmp->nome);
                printf("\nCodigo: %d", tmp->codigo);
                printf("\nCurso:");
                printf("\nCarga Horaria: %.2f", tmp->carga_horaria);
                printf("\nPre-requisitos: %s", tmp->pre_requisitos);
                printf("\n------------------");
                existe = true;
                break;
            }
            tmp = tmp->prox;
        }
        if (!existe) printf("\nNao existe disciplina com esse codigo!");
    }
}
void busca_professor_imprime(professor *le, int siape){
    if (le->prox == NULL) printf("\nSem professores cadastrados!\n");
    else
    {   
        professor *tmp;
        tmp = le->prox;
        bool existe = false;        
        while (tmp != NULL)
        {
            if (tmp->siape == siape)
            {
                printf("\n------------------");
                printf("\nProfessor encontrado:");
                printf("\nNome: %s", tmp->nome);
                printf("\nArea de atuacao: %s", tmp->area_atuacao);
                printf("\nTitulacao: %s", tmp->titulacao);
                printf("\nSiape: %d", tmp->siape);
                printf("\n------------------");
                existe = true;
                break;
            }
            tmp = tmp->prox;
        }
        if (!existe) printf("\nNao existe professor com esse siape!");
    }
}
void busca_aluno_imprime(aluno *le, int matri){
    if (le->prox == NULL) printf("\nSem alunos cadastrados!\n");
    else
    {   
        aluno *tmp;
        tmp = le->prox;
        bool existe = false;
        while (tmp != NULL)
        {         
            if (tmp->matricula == matri)
            {
                printf("\n------------------");
                printf("\nAluno encontrado:");
                printf("\nNome: %s", tmp->nome);
                printf("\nCurso: %s", tmp->curso->nome_curso);
                printf("\nMatricula: %d", tmp->matricula);     
                printf("\n------------------");  
                existe = true;
                break;
            }
            tmp = tmp->prox;
        }
        if(!existe) printf("\nNao existe aluno com essa matricula!");
    }
}
void busca_turma_imprime(turma *le, int codigo){
    if (le->prox == NULL) printf("\nSem turma cadastradas!\n");
    else
    {   
        turma *tmp;
        tmp = le->prox;
        bool existe = false;
        while (tmp != NULL)
        {         
            if (tmp->codigo_turma == codigo)
            {
                printf("\n------------------");
                printf("\nDisciplina: %s", tmp->disc->nome); 
                printf("\nCodigo turma: %d", tmp->codigo_turma); 
                if (tmp->cont_aluno > 0){
                    printf("\nAlunos:");
                    for (int i = 0; i < tmp->cont_aluno; i++) printf("\n\t(%d) %s", i+1, tmp->alunos[i]->nome);
                }
                if (tmp->cont_professor > 0){
                    printf("\nProfessores:");
                    for (int i = 0; i < tmp->cont_professor; i++) printf("\n\t(%d) %s", i+1, tmp->professores[i]->nome);
                }
                printf("\n------------------");
                existe = true;
            }
            tmp = tmp->prox;
        }
        if(!existe) printf("\nNao existe turma com esse codigo!");
    }
}
void relatorio(avaliacoes *le, turma *let, aluno *lea){
    printf("--------------------------------------------------------------\n");
    if (le->prox == NULL) printf("Sem avaliacoes cadastradas!\n"); 
    else{
        avaliacoes *Avaliacoes;
        turma *Turma;
        Turma = let->prox;
        int matricula_aluno, codigo_da_turma, total_provas = 0;
        float soma_notas = 0;
  
        while(Turma != NULL){
            printf("\n-----------------------------");
            printf("\nDisciplina: %s", Turma->disc->nome);
            printf("\nTurma: %d", Turma->codigo_turma);
            for (int x = 0; x < Turma->cont_aluno; x++) 
            {   
                Avaliacoes = le->prox;
                printf("\nAluno %s obteve as notas:", Turma->alunos[x]->nome);
                while (Avaliacoes != NULL)
                {
                    if (Turma->alunos[x]->matricula == Avaliacoes->aluno->matricula && Avaliacoes->turma->codigo_turma == Turma->codigo_turma)
                    {
                        total_provas++;
                        soma_notas = soma_notas + Avaliacoes->notas;
                        printf("\n\t(%d) %.2f", total_provas, Avaliacoes->notas);
                    }
                    Avaliacoes = Avaliacoes->prox;  
                }
                printf("\n\tNota media: %.2f\n", soma_notas/total_provas);
                if ((soma_notas/total_provas) >= 7) printf("\tSituacao: Aprovado.\n");
                else printf("\tSituacao: Reprovado.\n");           
                soma_notas = 0;
                total_provas = 0;
            }
            Turma = Turma->prox; 
        }
    }
    printf("\n--------------------------------------------------------------\n");
}
//DELETA DISCIPLINA
void deleta_disciplina(disciplina *le, turma *let){
    if (le->prox == NULL) printf("\nSem disciplina cadastradas!\n");
    else{
        disciplina *tmp = le;
        disciplina *anterior;
        turma *Turma;
        Turma = let->prox;
        bool usada = false;
        int num_disciplina, i = 0;
        int qtde_disciplina = quantidade_disciplina(le);

        exibe_dados_disciplina(le);
        do
        {
            printf("\nInforme o numero do disciplina a ser deletado: ");
            scanf("%d", &num_disciplina);
        } while (num_disciplina <= 0 || num_disciplina > qtde_disciplina);

        while (tmp != NULL && i != num_disciplina)
        {
            i++;
            anterior = tmp;
            tmp = tmp->prox;
        }
        while(Turma != NULL){
            if (Turma->disc->codigo == tmp->codigo)
            {
                printf("\nA diciplina esta cadastrada na Turma %d. Para deleta-la, primeiro troque a disciplina da turma.", Turma->codigo_turma);
                usada = true;
            }   
            Turma = Turma->prox;
        }
        if (!usada)
        {
            if (anterior == NULL) tmp = tmp->prox;
            else anterior->prox = tmp->prox;
            free(tmp);
            printf("\nDisciplina deletada com sucesso.\n");
        }
    }
}

////////////////////////// ---- FUNCOES DE LIBERAR MEMORIA ---- //////////////////////////
void libera_curso(curso *le){
    if (le->prox != NULL)
    {
		curso *proxNo, *atual;
		atual = le->prox;
		while(atual != NULL){
			proxNo = atual->prox;
			free(atual);
			atual = proxNo;
		}
	}
}
void libera_disciplina(disciplina *le){
    if (le->prox != NULL)
    {
		disciplina *proxNo, *atual;
		atual = le->prox;
		while(atual != NULL){
			proxNo = atual->prox;
			free(atual);
			atual = proxNo;
		}
	}
}
void libera_professor(professor *le){
    if (le->prox != NULL)
    {
		professor *proxNo, *atual;
		atual = le->prox;
		while(atual != NULL){
			proxNo = atual->prox;
			free(atual);
			atual = proxNo;
		}
	}
}
void libera_aluno(aluno *le){
	if (le->prox != NULL)
    {
		aluno *proxNo, *atual;
		atual = le->prox;
		while(atual != NULL){
			proxNo = atual->prox;
			free(atual);
			atual = proxNo;
		}
	}
}
void libera_turma(turma *le){
	if (le->prox != NULL)
    {
		turma *proxNo, *atual;
		atual = le->prox;
		while(atual != NULL){
			proxNo = atual->prox;
			free(atual);
			atual = proxNo;
		}
	}
}
void libera_avaliacoes(avaliacoes *le){
	if (le->prox != NULL)
    {
		avaliacoes *proxNo, *atual;
		atual = le->prox;
		while(atual != NULL){
			proxNo = atual->prox;
			free(atual);
			atual = proxNo;
		}
	}
}
////////////////////////// ---- FUNCOES DO MENU ---- //////////////////////////
void menu_principal()
{
    int main_op, op, codigo;
    curso *lec = cria_curso();
	inicia_curso(lec);
    disciplina *led = cria_disciplina();
	inicia_disciplina(led);
    turma *let = cria_turma();
	inicia_turma(let);
    professor *lep = cria_professor();
	inicia_professor(lep);
    aluno *lea = cria_aluno();
	inicia_aluno(lea);
    avaliacoes *leav = cria_avaliacao();
	inicia_avaliacao(leav);

    do
    {
        printf("\n---- Programa de Controle Academico ----\n");
        printf("\n\t--> 1. CADASTRAR");
        printf("\n\t--> 2. ALTERAR");
        printf("\n\t--> 3. BUSCAR");
        printf("\n\t--> 4. GERAR RELATORIO");
        printf("\n\t--> 5. DELETAR");
        printf("\n\t--> 6. ENCERRAR PROGRAMA");
        printf("\n\t---> Opcao: ");
        scanf("%d", &main_op);

        switch (main_op)
        {
            case 1:
                printf("\n\t\t--> CADASTRAR:");
                printf("\n\t\t---> 0. Voltar ao menu principal");
                printf("\n\t\t---> 1. Cadastrar Curso");
                printf("\n\t\t---> 2. Cadastrar Disciplina");
                printf("\n\t\t---> 3. Cadastrar Professor");
                printf("\n\t\t---> 4. Cadastrar Aluno");
                printf("\n\t\t---> 5. Cadastrar Turma");
                printf("\n\t\t---> 6. Cadastrar Avaliacoes");
                printf("\n\t---> Opcao: ");
                scanf("%d", &op);
                break;
            case 2:
                printf("\n\t\t--> ALTERAR:");
                printf("\n\t\t---> 0. Voltar ao menu principal");
                printf("\n\t\t---> 7. Alterar Curso");
                printf("\n\t\t---> 8. Alterar Disciplina");
                printf("\n\t\t---> 9. Alterar Professor");
                printf("\n\t\t---> 10. Alterar Aluno");
                printf("\n\t\t---> 11. Alterar Turma");
                printf("\n\t\t---> 12. Alterar Avaliacoes");
                printf("\n\t---> Opcao: ");
                scanf("%d", &op);
                break;
            case 3:
                printf("\n\t\t--> BUSCAR:");
                printf("\n\t\t---> 0. Voltar ao menu principal");
                printf("\n\t\t---> 13. Buscar Disciplina");
                printf("\n\t\t---> 14. Buscar Professor");
                printf("\n\t\t---> 15. Buscar Aluno");
                printf("\n\t\t---> 16. Buscar Turma");
                printf("\n\t---> Opcao: ");
                scanf("%d", &op);
                break;
            case 4:
                printf("\n\t\t---> Gerando relatorio...\n");
                relatorio(leav, let, lea);
                op = 0;
                break;
            case 5:
                printf("\n\t\t---> 17. Deletar Disciplina");
                scanf("%d", &op);
                break;
            case 6:
                printf("\tFinalizando o programa...");
                libera_curso(lec);
                libera_disciplina(led);
                libera_professor(lep);
                libera_aluno(lea);
                libera_turma(let);
                libera_avaliacoes(leav);
                break;          
            default:
                printf("\n\t---> Opcao invalida, tente novamente!");
                op = 0;
                break;
        }
        if (main_op != 6)
        {    
            switch (op)
            {
                case 0:
                    continue;
                    break;
                case 1:
                    cadastrar_curso(lec);
                    break;
                case 2:
                    cadastrar_disciplina(led, lec);
                    break;
                case 3:
                    cadastrar_professor(lep);
                    break;
                case 4:
                    cadastrar_aluno(lea, lec);
                    break;
                case 5:
                    cadastrar_turma(let, lea, lep, led);
                    break;
                case 6:
                    cadastrar_avaliacao(leav, let, lea);
                    break;
                case 7:
                    altera_curso(lec);
                    break;   
                case 8:
                    altera_disciplina(led, lec);
                    break;     
                case 9:
                    altera_professor(lep);
                    break;  
                case 10:
                    altera_aluno(lea, lec);  
                    break;     
                case 11:
                    altera_turma(let, led, lea);
                    break;  
                case 12:
                    altera_avaliacoes(leav);
                    break;  
                case 13: 
                    printf("\nInforme o codigo da disciplina que deseja buscar: ");
                    scanf(" %d", &codigo);
                    busca_disciplina_imprime(led, codigo);
                    break; 
                case 14: 
                    printf("\nInforme o siape do professor que deseja buscar: ");
                    scanf(" %d", &codigo);
                    busca_professor_imprime(lep, codigo);
                    break; 
                case 15: 
                    printf("\nInforme a matricula do aluno que deseja buscar: ");
                    scanf(" %d", &codigo);
                    busca_aluno_imprime(lea, codigo);
                    break; 
                case 16: 
                    printf("\nInforme o codigo da turma que deseja buscar: ");
                    scanf(" %d", &codigo);
                    busca_turma_imprime(let, codigo);
                    break; 
                case 17: 
                    deleta_disciplina(led, let);
                    break; 
                default:
                    printf("\n\t---> Opcao invalida, tente novamente!");
                    break;
            }
        }
    } while (main_op != 6);
}   