
typedef struct{
    int id;
    char nome[10];
    char endereco[30];
}Fornecedor;
int c=0;
Fornecedor vetor[3];
 const char *arqFornecedores = "fornecedores.txt";
 FILE* abreArquivo(const char *nomeArquivo, char *p){
    FILE *arquivo = fopen(nomeArquivo, p);
    if (arquivo == NULL) {
       perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
    else
        return arquivo;
 }
void inserirFornecedor(void){
    FILE *arquivo=abreArquivo(arqFornecedores,"a");
    char nome[10];
    char endereco[30];
    Fornecedor f;
        printf("Id do Fornecedor : ");
        fflush(stdin);
        scanf("%d",&f.id);
        printf("Nome do Fornecedor : ");
        fflush(stdin);
        fgets(f.nome,10,stdin);
        printf("Endereco do Fornecedor : ");
         fflush(stdin);
        fgets(f.endereco,10,stdin);
        f.nome[strcspn(f.nome, "\n")] = 0;
        f.endereco[strcspn(f.endereco, "\n")] = 0;
        fprintf(arquivo, "%d %s %s\n",f.id,f.nome,f.endereco);
        fclose(arquivo);
}
Fornecedor buscaFornecedor(int id){
 FILE *arquivo = abreArquivo(arqFornecedores,"r");
    Fornecedor f;
    while (fscanf(arquivo, "%d %s %s", &f.id, f.nome,f.endereco) == 3) {
              if(f.id==id){
                return f;
                break;
              }

    }
    fclose(arquivo);
}
void imprimirFornecedor(void){
    FILE *arquivo = abreArquivo(arqFornecedores,"r");
    Fornecedor f;
    printf("Conteúdo do arquivo:\n");
    while (fscanf(arquivo, "%d %s %s", &f.id, f.nome,f.endereco) == 3) {
        printf("Código...... : %d\n",f.id);
        printf("Nome.........: %s\n",f.nome);
        printf("Endereço.....: %s\n\n",f.endereco);
    }
    fclose(arquivo);
}
void excluirFornecedor(int id){
     FILE *arquivo_original = fopen(arqFornecedores, "r");
    if (arquivo_original == NULL) {
        perror("Erro ao abrir o arquivo original");
        exit(EXIT_FAILURE);
    }

    FILE *arquivo_temp = fopen("temp.txt", "w");
    if (arquivo_temp == NULL) {
        perror("Erro ao criar o arquivo temporário");
        fclose(arquivo_original);
        exit(EXIT_FAILURE);
    }

    char linha[256];
    while (fgets(linha, sizeof(linha), arquivo_original)) {
        int id_lido;
         sscanf(linha, "%d", &id_lido);
        if (id_lido != id) {
                //aqui
            fputs(linha, arquivo_temp);
        }
    }
    fclose(arquivo_original);
    fclose(arquivo_temp);
    if (remove(arqFornecedores) != 0) {
        perror("Erro ao remover o arquivo original");
        exit(EXIT_FAILURE);
    }

    if (rename("temp.txt", arqFornecedores) != 0) {
        perror("Erro ao renomear o arquivo temporário");
        exit(EXIT_FAILURE);
    }
}
