/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:42:30 by camurill          #+#    #+#             */
/*   Updated: 2025/08/18 16:53:16 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
			const std::string	_name;
			bool				_signed;
			const int			_grade_to_sign;
			const int			_grade_to_exec;
			virtual void		performAction() const = 0;
	public:
			AForm();
			AForm(const std::string name, const int sign, const int exec);
			AForm(const AForm &copy);
			AForm &operator=(const AForm& copy);
			virtual ~AForm();

	void		beSigned(const Bureaucrat &bure);
	std::string getNameF() const;
	bool		getIsSigned() const;
	int			getSignGrade() const;
	int			getExecuteGrade() const;
	void		setIsSigned(bool sign);
	void		execute(const Bureaucrat &exec) const;

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

	class IsNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};			
};

std::ostream &operator<<(std::ostream &os, AForm const &other);

#endif