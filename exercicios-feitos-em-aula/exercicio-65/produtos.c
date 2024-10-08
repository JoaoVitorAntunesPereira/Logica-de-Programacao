
typedef struct{
  char nome[29];
  float preco;
  Fornecedor fornecedor;
}Produto;


Produto p;
int codigoProduto = 0;
char arquivoProdutos[20] = "produtos.txt";

void gravarProduto(char *nomeArquivo, Produto p) {
  FILE *arquivo = fopen(nomeArquivo,"a");

  if(arquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    exit(EXIT_FAILURE);
  }
  fprintf(arquivo, "%s %f %s \n", p.nome, p.preco, p.fornecedor.nome);
  fclose(arquivo);
}

void inserirProduto(void){
   int id;
   fflush(stdin);
   printf("Nome do produto :");
   fflush(stdin);
   scanf("%s",p.nome);
   printf("Preço do produto :");
   fflush(stdin);
   scanf("%f",&p.preco);
   printf("\n***** Selecione o Fornecedor*****\n");
   imprimirFornecedor();
   scanf("\n%d",&id);
   p.fornecedor=buscaFornecedor(id);
   if(buscaFornecedor(id).codigoFornecedor == -1){
		printf("Código inválido.");
		inserirProduto();
	}
   gravarProduto("produtos.txt", p);
}



void lerProduto(char *nomeArquivo) {
  FILE *arquivo = fopen(nomeArquivo, "r");

  if(arquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    exit(EXIT_FAILURE);
  }
  while(fscanf(arquivo, "%29s %f %29s", p.nome, &p.preco, p.fornecedor.nome) == 3) {
    printf("\nNome: %s - Preco: %.2f - Fornecedor: %s",p.nome, p.preco, p.fornecedor.nome);
  }
  fclose(arquivo);
}


void imprimirProduto(void){
  lerProduto("produtos.txt");
}

void excluirProduto(char *nome){
    FILE *arquivo = fopen(arquivoProdutos, "r");
    if(arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
    FILE *arquivoAUX = fopen("arquivoAUX.txt","w");
    if(arquivoAUX == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
	
	char linha[256];
	
    while(fgets(linha, sizeof(linha), arquivo)){
		sscanf(linha, "%s", p.nome);
        if(strcmp(nome, p.nome)){
            fputs(linha, arquivoAUX);
        }
    }	

	fclose(arquivo);
	fclose(arquivoAUX);
	
	if(remove(arquivoProdutos) != 0){
		perror("Erro ao remover o arquivo original.");
		exit(EXIT_FAILURE);
	}	
	
	if(rename("arquivoAUX.txt", arquivoProdutos) != 0){
		perror("Erro ao renomear o arquivo temporario.");
		exit(EXIT_FAILURE);
	}	
}

void alterarProduto(char *nome) {
    int esc, idFornecedor;
    char nomeNovo[30], precoNovo[10];
    FILE *arquivo_original = fopen(arquivoProdutos, "r");

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
        sscanf(linha, "%29s %f %29s", p.nome, &p.preco, p.fornecedor.nome);

        if (strcmp(nome, p.nome) == 0) {
            printf("\nInforme o que deseja alterar: ");
            printf("\n1 - Nome");
            printf("\n2 - Presso");
            printf("\n3 - Fornecedor\n");
            scanf("%d", &esc);
            getchar();
            
            switch (esc) {
                case 1:
                    printf("Informe o novo nome: ");
                    scanf("%s", nomeNovo);
                    getchar();
                    sprintf(linha, "%s %f %s\n", nomeNovo, p.preco, p.fornecedor.nome);
                    break;
                case 2:
                    printf("Informe o novo presso: ");
                    scanf("%s", precoNovo);
                    getchar();
                    sprintf(linha, "%s %s %s\n", p.nome, precoNovo, p.fornecedor.nome);
                    break;
                case 3:
                    printf("Informe o novo fornecedor: \n");
                    imprimirFornecedor();
                    scanf("%d", &idFornecedor);
                    p.fornecedor = buscaFornecedor(idFornecedor);
                    getchar();
                    sprintf(linha, "%s %f %s\n", p.nome, p.preco, p.fornecedor.nome);
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

    if (remove(arquivoProdutos) != 0) {
        perror("Erro ao remover o arquivo original");
        exit(EXIT_FAILURE);
    }

    if (rename("temp.txt", arquivoProdutos) != 0) {
        perror("Erro ao renomear o arquivo temporário");
        exit(EXIT_FAILURE);
    }

    printf("Alteração realizada com sucesso.\n");
}
