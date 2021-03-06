/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:53:31 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/12 16:40:12 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal
{
	public:

		Dog();
		Dog(Dog const & src);
		virtual ~Dog();
		Dog	& operator=( Dog const & rhs );

		virtual void makeSound() const;
};

#endif