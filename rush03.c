#include <stdio.h>

//ABBBBBC
//A     C
//ABBBBBC

void	makelinearray(int x, int linetype); //Cria a linha com o tamanho horizontal x e tem dois tipos de linhas que nós definimos: 'linha do meio' 'linha inicial/final'
void	ft_putchar(char c);
void	printarray(char *printedarray);


void	rush(int x, int y)
{
	//escreve o eixo y
	int contadordelinhas = 1;
	while (contadordelinhas <= y) //while repete até não poder mais. 
	{
	if (contadordelinhas == 1) //se for a primeira linha
	{
	makelinearray(x,0); 
	}
	else if(contadordelinhas == y) // se for a última linha
	{
	makelinearray(x,0);
	}
	else //se for qualquer outra linha
	{
	makelinearray(x,1);	
	}
	
	contadordelinhas++;
	}
	
}

void	makelinearray(int x, int linetype)
{
	char linecaracters[x + 1]; //array que vai ter o tamanho da linha.  ABBBC
	char posicaoinicial;
	char posicaomeio;
	char posicaofinal;
	int lineposition;
	lineposition = 1; // A line position é a posição da linha que eu estou escrevendo no array.
	if(linetype == 0) //se for uma linha do tipo 0 - ou seja, for primeira ou última linha. 
	{
	posicaoinicial = 'A'; 
	posicaomeio = 'B';
	posicaofinal = 'C';
	while (lineposition <= x) //enquanto a posição da linha for menor ou igual que o tamanho da linha (o valor de x). 
	{
		if(lineposition == 1) //se for a primeira posição da linha. 
		{
		ft_putchar(posicaoinicial); //escrever o caracter da posicao inicial.
		}
		else if (lineposition == x) // se for última  posicao da linha 
		{
		ft_putchar(posicaofinal); //escrever o caracter da posicaofinal
		}
		else // se for as linhas do meio 
		{
		ft_putchar(posicaomeio); //escre o caracter da posicao do meio. 
		}
		lineposition++; //é só o que faz o while funcionar. 
	}
	}
	else 
	{
	posicaoinicial = 'B';
	posicaomeio = ' ';
	posicaofinal = 'B';

	//todo esse while é para escrever a linha. 
	while (lineposition <= x) //enquanto a posição da linha for menor ou igual que o tamanho da linha (o valor de x). 
	{
		if(lineposition == 1) //se for a primeira posição da linha. 
		{
		ft_putchar(posicaoinicial); //escrever o caracter da posicao inicial.
		}
		else if (lineposition == x) // se for última  posicao da linha 
		{
		ft_putchar(posicaofinal); //escrever o caracter da posicaofinal
		}
		else // se for as linhas do meio 
		{
		ft_putchar(posicaomeio); //escre o caracter da posicao do meio. 
		}
		lineposition++; //é só o que faz o while funcionar. 
	}
	}
	ft_putchar('\n');
	//adicionar os elementos no meu array final
	
	//descobrir a última posição da última linha escrita no array para poder adicionar um elemento nele. 
	//Se eu precisasse mudar cada elemento da posição depois. 
	//while (board != '\n')
	//
	
	
}


void	printarray(char *printedarray)
{
	while(*printedarray != '\n')
	{
	ft_putchar(*printedarray);
	printedarray++;
	}
	ft_putchar('\n');
}