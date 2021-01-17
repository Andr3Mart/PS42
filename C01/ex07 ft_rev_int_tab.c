void	ft_rev_int_tab(int *tab, int size)
{
	int		i; /*calcular posição na array */
	char	temp; /*guarda temporariamente os valores */

	i = -1; /*começar do zero com i++ */
	while (++i < --size) /*verifica em cada iteração se ambas a posição inicial e a final ja chegaram ao meio da array -> ciclo acaba*/
	{
		temp = tab[i]; /*armazena o nr. na variavel temporaria */
		tab[i] = tab[size]; /*insere na posição inicial, o valor da ultima posição*/
		tab[size] = temp; /*insere na ultima posição, o valor da posição inicial*/
		/*repete o ciclo até chegar ao meio da array, com a ordem invertida ja*/
	}
}