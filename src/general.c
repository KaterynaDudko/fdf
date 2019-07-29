/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdudko <kdudko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 05:27:09 by kdudko            #+#    #+#             */
/*   Updated: 2019/07/28 05:27:12 by kdudko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

void	error_message(const char *str)
{
	ft_putendl(str);
	exit(EXIT_FAILURE);
}

void	free_all_structs(t_fdf *data)
{
	free(data->prog_name);
	free(data->map->points);
	free(data->map);
	free(data);
}