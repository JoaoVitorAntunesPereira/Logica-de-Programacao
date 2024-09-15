typedef struct{
    int codigoFornecedor;
    char nome[10];
    char endereco[30];
}Fornecedor;

int c=0,codigo = 0, ultimoCodigo=0;

Fornecedor f;


int ultimoCodigoFornecedor(void){
	FILE *arquivo = fopen("fornecedores.txt", "r");
    if(arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
    while(fscanf(arquivo, "%d %9s %29s", &f.codigoFornecedor, f.nome, f.endereco) == 3) {
		ultimoCodigo = f.codigoFornecedor+1;
    }
    return ultimoCodigo;
    fclose(arquivo);
}	


void gravarFornecedor(char *nomeArquivo, Fornecedor f) {
    FILE *arquivo = fopen(nomeArquivo, "a");
	f.codigoFornecedor = ultimoCodigoFornecedor();
    if(arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
    fprintf(arquivo, "%d %s %s\n", f.codigoFornecedor, f.nome, f.endereco);
    fclose(arquivo);
    c++;
}


void inserirFornecedor(void) {
	f.codigoFornecedor = ultimoCodigoFornecedor() + 1;

    printf("Nome do Fornecedor: ");
    fflush(stdin);
    fgets(f.nome, sizeof(f.nome), stdin);
    f.nome[strcspn(f.nome, "\n")] = 0;  // Remove o caractere de nova linha

    printf("Endereco do Fornecedor: ");
    fflush(stdin);
    fgets(f.endereco, sizeof(f.endereco), stdin);
    f.endereco[strcspn(f.endereco, "\n")] = 0;  // Remove o caractere de nova linha

    gravarFornecedor("fornecedores.txt", f);
}

Fornecedor buscaFornecedor(int id){
    FILE *arquivo = fopen("fornecedores.txt", "r");
    Fornecedor fNull = {-1, "", ""};
    if(arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
    while(fscanf(arquivo, "%d %9s %29s", &f.codigoFornecedor, f.nome, f.endereco) == 3) {
        if(f.codigoFornecedor == id){
            return f;
        }	
    }
    return fNull;
    fclose(arquivo);
}

void lerFornecedor(char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");

    if(arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    while(fscanf(arquivo, "%d %10s %30s", &codigo, f.nome, f.endereco) == 3) {
        printf("ID: %d - Nome: %s - Endereco: %s\n", codigo, f.nome, f.endereco);
    }
    fclose(arquivo);
}

void imprimirFornecedor(void){
    /*for(int i=0;i<c;i++){
        printf("Código...... : %d\n",i);
        printf("Nome.........: %s",vetor[i].nome);
        printf("Endereço.....: %s\n\n",vetor[i].endereco);
    }*/
    lerFornecedor("fornecedores.txt");

}

/*bool excluir(int id){

}*/
