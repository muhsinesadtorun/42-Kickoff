/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 02:01:46 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/02 02:14:15 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	put_str(char *str, int i)
{
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
}

int	nflags(char **execute, int j, int i)
{
	if (execute[j][i - 1] == '-')
		return (0);
	i++;
	while (execute[j][i] == 'n')
		i++;
	if (execute[j][i] == 0)
		return (1);
	return (0);
}

int	ft_echo_flag_check(char **execute)
{
	int		i;
	int		is_nflag;
	int		j;

	i = 0;
	j = 1;
	is_nflag = 0;
	while (execute[j])
	{
		if (execute[j][i] == '-' && is_nflag != -1 && \
			execute[j][i + 1] == 'n' && nflags(execute, j, i))
			is_nflag = 1;
		else
		{
			if (is_nflag == 0)
				is_nflag = -1;
			put_str(execute[j], 0);
			if (execute[j + 1] != 0)
				write(1, " ", 1);
		}
		j++;
	}
	if (is_nflag == -1)
		return (0);
	return (1);
}

void	builtin_echo(char **execute)
{
	int		i;

	if (!execute[1])
	{
		write(1, "\n", 1);
	}
	i = ft_echo_flag_check(execute);
	if (!i)
		write(1, "\n", 1);
	if (!is_parent())
		exit(EXIT_SUCCESS);
}
