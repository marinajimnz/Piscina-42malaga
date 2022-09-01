/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:45:50 by marinjim          #+#    #+#             */
/*   Updated: 2022/08/21 11:13:38 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char cadena1[] = "hola";
// 	char cadena2[] = "xd";

// 	ft_strcpy(cadena2, cadena1);

// 	printf("Mi primera cadena es: %s", cadena1);
// 	printf("Mi segunda cadena es: %s", cadena2);

// 	return 0;
// }