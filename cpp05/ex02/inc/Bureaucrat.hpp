/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:55:23 by camurill          #+#    #+#             */
/*   Updated: 2025/08/18 14:51:06 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <AForm.hpp>

class Bureaucrat {
	private:
			const std::string	_name;
			int					_grade;
	public:
			Bureaucrat();
			Bureaucrat(const std::string name, int grade);
			Bureaucrat(const Bureaucrat &copy);
			Bureaucrat &operator=(const Bureaucrat& copy);
			~Bureaucrat();

	std::string getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();
	void		signForm(AForm &form);
	void		executeForm(AForm &form);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};		
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other);

#endif