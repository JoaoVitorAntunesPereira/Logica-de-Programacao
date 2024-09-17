typedef struct{
    int codigoFornecedor;
    char nome[10];
    char endereco[30];
}Fornecedor;

int c=0,codigo = 0, ultimoCodigo=0;

Fornecedor f;

char arqFornecedores[20] = "fornecedores.txt";

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
    if(arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
    fprintf(arquivo, "%d %s %s\n", f.codigoFornecedor, f.nome, f.endereco);
    fclose(arquivo);
    c++;
}


void inserirFornecedor(void) {
	printf("Código do Fornecedor: ");
    fflush(stdin);
    scanf("%d", &f.codigoFornecedor);

    printf("Nome do Fornecedor: ");
    fflush(stdin);
    fgets(f.nome, sizeof(f.nome), stdin);
    f.nome[strcspn(f.nome, "\n")] = 0;

    printf("Endereco do Fornecedor: ");
    fflush(stdin);
    fgets(f.endereco, sizeof(f.endereco), stdin);
    f.endereco[strcspn(f.endereco, "\n")] = 0; 

    gravarFornecedor(arqFornecedores, f);
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
            break;
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
    lerFornecedor("fornecedores.txt");
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


void alterarFornecedor(int id) {
    int esc;
    char idNovo[10], nomeNovo[30], enderecoNovo[30];
    FILE *arquivo_original = fopen(arqFornecedores, "r");

    if (arquivo_original == NULL) {
        perror("Falha ao abrir o arquivo original.");
        exit(EXIT_FAILURE);
    }

    FILE *arquivo_temp = fopen("temp.txt", "w");

    if (arquivo_temp == NULL) {
        perror("Falha ao abrir o arquivo temporário.");
        fclose(arquivo_original);
        exit(EXIT_FAILURE);
    }

    char linha[256];

    while (fgets(linha, sizeof(linha), arquivo_original)) {
        sscanf(linha, "%d %29s %29s", &f.codigoFornecedor, f.nome, f.endereco);

        if (id == f.codigoFornecedor) {
            printf("\nInforme o que deseja alterar: ");
            printf("\n1 - ID");
            printf("\n2 - Nome");
            printf("\n3 - Endereço\n");
            scanf("%d", &esc);
            getchar();
            
            switch (esc) {
                case 1:
                    printf("Informe o novo ID: ");
                    scanf("%s", idNovo);
                    getchar();
                    sprintf(linha, "%s %s %s\n", idNovo, f.nome, f.endereco);
                    break;
                case 2:
                    printf("Informe o novo nome: ");
                    scanf("%s", nomeNovo);
                    getchar();
                    sprintf(linha, "%d %s %s\n", f.codigoFornecedor, nomeNovo, f.endereco);
                    break;
                case 3:
                    printf("Informe o novo endereço: ");
                    scanf("%s", enderecoNovo);
                    getchar();
                    sprintf(linha, "%d %s %s\n", f.codigoFornecedor, f.nome, enderecoNovo);
                    break;
                default:
                    printf("Escolha inválida.\n");
                    break;
            }
        }
        fputs(linha, arquivo_temp);
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

    printf("Alteração realizada com sucesso.\n");
}

