/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 01:07:34 by juan-jof          #+#    #+#             */
/*   Updated: 2026/02/03 04:09:09 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	
	private:
		int		_fixedPointValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed &operator=(Fixed const &rhs);
		~Fixed();
		
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif