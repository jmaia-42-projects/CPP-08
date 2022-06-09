/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:46:27 by jmaia             #+#    #+#             */
/*   Updated: 2022/06/09 15:50:00 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iterator>

class	Span
{
	private:
		std::vector<int>	vec;
		unsigned int		maxSize;
		Span(void);
	public:
		Span(unsigned int N);
		Span(Span const &obj);
		~Span(void);

		Span	&operator=(Span const &obj);

		void			addNumber(int nbr);

		template<typename Iterator>
		void			addNumbers(Iterator begin, Iterator end)
		{
			for(Iterator it = begin; it != end; it++)
				addNumber(*it);
		}
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
};

#endif
