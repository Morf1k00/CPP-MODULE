/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:20:09 by rkrechun          #+#    #+#             */
/*   Updated: 2024/11/26 15:31:01 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main(int arc, char **arv)
{
	int i;
	int j;

	i = 1;
	if (arc > 1)
	{
		while (arv[i])
		{
			j = 0;
			while(arv[i][j] != '\0')
			{
				std:: cout << (char)toupper(arv[i][j]);
				j++;
			}
			if (i < arc - 1)
				std :: cout << ' ';
			i++;
		}
		std ::cout << std:: endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}