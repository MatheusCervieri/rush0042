#include <stdio.h>

void	makelinearray(int x, int linetype);
void	ft_putchar(char c);
void	printarray(char *printedarray);


void	rush(int x, int y)
{
	//escreve o eixo y
	int contadordelinhas = 1;
	while (contadordelinhas <= y)
	{
	if (contadordelinhas == 1)
	{
	makelinearray(x,0);
	}
	else if(contadordelinhas == y)
	{
	makelinearray(x,0);
	}
	else
	{
	makelinearray(x,1);	
	}
	
	contadordelinhas++;
	}
	
}

void	makelinearray(int x, int linetype)
{
	char linecaracters[x + 1];
	char posicaoinicial;
	char posicaomeio;
	char posicaofinal;
	int lineposition;
	lineposition = 1;
	if(linetype == 0)
	{
	posicaoinicial = 'A';
	posicaomeio = 'B';
	posicaofinal = 'C';
	while (lineposition <= x)
	{
		if(lineposition == 1)
		{
		linecaracters[lineposition] = posicaoinicial;	
		}
		else if (lineposition == x)
		{
		linecaracters[lineposition] = posicaofinal;	
		}
		else
		{
		linecaracters[lineposition] = posicaomeio;
		}
		lineposition++;
	}
	}
	else 
	{
	posicaoinicial = 'B';
	posicaomeio = ' ';
	posicaofinal = 'B';
	while (lineposition <= x)
	{
		if(lineposition == 1)
		{
		linecaracters[lineposition] = posicaoinicial;	
		}
		else if (lineposition == x)
		{
		linecaracters[lineposition] = posicaofinal;	
		}
		else
		{
		linecaracters[lineposition] = posicaomeio;
		}
		lineposition++;
	}
	}
	linecaracters[lineposition] = '\n';
	//adicionar os elementos no meu array final
	
	//descobrir a última posição da última linha escrita no array para poder adicionar um elemento nele. 
	//Se eu precisasse mudar cada elemento da posição depois. 
	//while (board != '\n')
	//
	printarray(linecaracters);
	
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