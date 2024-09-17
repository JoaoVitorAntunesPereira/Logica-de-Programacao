typedef struct{
  char nome[10];
  float preco;
  Fornecedor fornecedor;
}Produto;
Produto p;
const char *arqProdutos = "produtos.txt";

void inserirProduto(void){
   FILE *arquivo=abreArquivo(arqProdutos,"a");
   int id;
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
   //fprintf(arquivo, "%s %f %s\n",p.nome,p.preco,p.fornecedor.nome);
  fclose(arquivo);
}
void imprimirProduto(void){
   printf("Produro  Registrado\n");
   printf("Nome........:%s\n",p.nome);
   printf("Preço.......:%.2f\n",p.preco);
   printf("Fornecedor..:%s\n",p.fornecedor.nome);

}
