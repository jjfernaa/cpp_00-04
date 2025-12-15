/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 03:12:30 by juan-jof          #+#    #+#             */
/*   Updated: 2025/12/15 04:20:42 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
	}
	int	i = 1;
	int	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}