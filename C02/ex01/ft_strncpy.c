/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:31:31 by marinjim          #+#    #+#             */
/*   Updated: 2022/08/20 19:24:48 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

	// int main()
	// {
	// 	char cadena1[] = "hola";
	// 	char cadena2[10];
	// 	char cadena3[] = "hola";
	// 	char cadena4[10];
	// 	ft_strncpy(cadena2, cadena1, 3);
	// 	strncpy(cadena4, cadena3, 3);	
	// 	printf("Mi segunda cadena es: %s", cadena2);
	// 	printf("Mi cuarta cadena es: %s", cadena4);
	// 	return 0;
	// }