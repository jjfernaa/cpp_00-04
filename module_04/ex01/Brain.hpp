/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 03:05:24 by juan-jof          #+#    #+#             */
/*   Updated: 2026/04/11 03:08:12 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include<iostream>
#include<string>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &rhs);
		~Brain();

		void	setIdea(int index, std::string idea);
		std::string	getIdea(int index) const;
};

#endif