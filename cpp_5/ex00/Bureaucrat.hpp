/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 09:43:30 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/22 18:45:20 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat& operator=(Bureaucrat const & rhs);
        std::string getName() const;
        int        getGrade() const;
        void        increment_grade();
        void        decrement_grade();

        
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Bureaucrat::GradeTooLowException.");
                }
        };
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Bureaucrat::GradeTooHighException.");
                }
        };
        
    private:
        const std::string _name;
        int         _grade;
        Bureaucrat();
};
std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif