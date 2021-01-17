char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; /* Declare the counter the same type as 'n' - "unsigned int" */

	i = 0; 
	/* While the cell of the first line is not equal to '\ 0' 
	and until the counter i reaches 'n', the copy cycle works */
	while ((src[i] != '\0') && (i < n)) 
	{
		dest[i] = src[i]; /* Copy src cell to dest */
		i++; /* Go to next cell */
	}
	/* While the cell of the second line is not equal to '\ 0' and until the counter i reaches
	 'n', the filling cycle works the rest of the second line with a null terminator '\0' */
	while ((dest[i] != '\0') && (i < n))  
	{
		dest[i] = '\0'; /* Store in the cell with a terminating zero character '\ 0' */
		i++;
	}
	return (dest); /* End the function and return the address of the string */
}
