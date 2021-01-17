char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122) /*ascii table a to z -> 97 to 122*/
		{
			str[i] = str[i] - 32; /*ascii table diference from lowercase to uppercase (32 on all characters)*/
		}
		i++;
	}
	return (str);
}