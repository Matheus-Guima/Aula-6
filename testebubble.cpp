// Aula 06 - Exerc�cio01
#include <iostream>
using namespace std ;
//definir o registro
struct cliente{
 char nome[30] ;
 int cpf ;
};
// fun��o para cadastrar cliente
cliente cadastrar()
{
 cliente c ;
 cout << "Digite o nome: " ;
 cin >> c.nome ;
 cout << "Digite o CPF: " ;
 cin >> c.cpf ;

 return c ;
}
// fun��o para exibir cliente
void exibir(cliente c)
{
 cout << "Nome: " << c.nome ;
 cout << " / CPF: " << c.cpf << endl ;
 return ;
}
// bubblesort() recursivo
void bubblesort (cliente arr[], int n)
{ if (n == 1) // Caso base
 return;
 // Um passo do bubble sort onde o menor
 // elemento flutua ("bubble") para in�cio.
 cliente aux ;
 for (int i = 0; i < n-1; i++)
 if (arr[i + 1].nome < arr[i].nome) // troca o elemento
 { aux = arr[i];
 arr[i] = arr[i + 1] ;
 arr[i + 1] = aux ; }
 // Menor elemento est� fixado e
 // a recurs�o continua no array
 bubblesort (arr, n-1);
} 
// programa principal
int main()
{
 // vari�veis
 cliente vetor[50] ;
 int quant = 3 ;
 cout << "Aula06 - Exercicio01" << endl ;
 cout << "Cadastrar clientes" << endl ;

 //entrada de dados
 for (int i=0; i<quant ; i++)
 vetor[i] = cadastrar() ;

 //processamento
 bubblesort(vetor,quant) ;

 //sa�da de dados
 for (int i=0; i<quant ; i++)
 exibir(vetor[i]) ;
 return 0 ;
} // fim main() 
