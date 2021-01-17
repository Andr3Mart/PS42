/*declaração funcção para alterar chars para lowercase*/
char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*função pedida*/
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str); /*converte todos os caracteres para lowercase*/
	if (str[0] >= 97 && str[0] <= 122) /*verifica se primeiro caractere é lowercase*/
	{
		str[0] = str[0] - 32; /*caso seja lowercase, converte para uppercase*/
	}
	while (str[i])
	{
		/*verifica se existe um carcater especial*/
		if ((str[i] >= ' ' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@'))
		{
			/*verifica se na posição seguinte a letra é lowercase*/
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				/*em caos positivo passa-a para uppercase*/
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}