/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:42:30 by camurill          #+#    #+#             */
/*   Updated: 2025/08/16 13:45:10 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

# include <iostream>
# include <string>

class Form {
	private:
			const std::string	_name;
			bool				_signed;
			int					_grade_to_sign;
			int					_grade_to_exec;
	public:
			Form();
			Form(const std::string name, int grade);
			Form(const Form &copy);
			Form &operator=(const Form& copy);
			~Form();

	std::string getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();

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

std::ostream &operator<<(std::ostream &os, Form const &other);

#endif