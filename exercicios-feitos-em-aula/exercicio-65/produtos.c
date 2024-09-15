
typedef struct{
  char nome[10];
  float preco;
  Fornecedor fornecedor;
}Produto;


Produto p;
int codigoProduto = 0;

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
  while(fscanf(arquivo, "%9s %f %29s", p.nome, &p.preco, p.fornecedor.nome) == 3) {
    printf("\nNome: %s - Preco: %.2f - Fornecedor: %s",p.nome, p.preco, p.fornecedor.nome);
  }
  fclose(arquivo);
}


void imprimirProduto(void){
  lerProduto("produtos.txt");
}
