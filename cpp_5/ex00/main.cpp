/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:19:14 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/06 09:24:35 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("youssef", 150);
        std::cout << b << std::endl;
        b.increment_grade();
        std::cout << b << std::endl;
        b.decrement_grade();
        std::cout << b << std::endl;
        // b.decrement_grade();
        // std::cout << b << std::endl;
        Bureaucrat c("youssef", 1);
        std::cout << c << std::endl;
        // c.increment_grade();
        // std::cout << c << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
        // exit(EXIT_FAILURE);
    }
}