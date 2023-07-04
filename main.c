/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawanis <skawanis@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 07:24:38 by skawanis          #+#    #+#             */
/*   Updated: 2023/07/05 07:24:38 by skawanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	printf("0%d\n", ft_isalpha('A' - 1));
	printf("1%d\n", ft_isalpha('A'));
	printf("1%d\n", ft_isalpha('Z'));
	printf("0%d\n", ft_isalpha('Z' + 1));
	printf("0%d\n", ft_isalpha('a' - 1));
	printf("1%d\n", ft_isalpha('a'));
	printf("1%d\n", ft_isalpha('z'));
	printf("0%d\n", ft_isalpha('z' + 1));
	return (0);
}
