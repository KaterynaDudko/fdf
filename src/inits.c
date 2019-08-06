/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inits.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdudko <kdudko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:05:08 by kdudko            #+#    #+#             */
/*   Updated: 2019/08/06 15:05:10 by kdudko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"
#include "../inc/render.h"

void	init_transformation(t_change *params, t_data *fdf)
{
	int temp;
	int temp2;

	temp = W_WINDOW / fdf->width / 2;
	temp2 = H_WINDOW / fdf->height / 2;
	params->scale = (temp < temp2) ? temp : temp2;
	params->z_change = 20;
	params->projection = ISO;
	params->center_x = W_WINDOW / 2;
	params->center_y = H_WINDOW / 2;
	params->x_angle = 0.0;
	params->y_angle = 0.0;
	params->z_angle = 0.0;
}

void	init_data(t_data *fdf, char *name)
{
	fdf->name = ft_strdup(name);
	fdf->mlx = NULL;
	fdf->window = NULL;
	fdf->image = NULL;
	fdf->height = 0;
	fdf->width = 0;
	fdf->bpp = 0;
	fdf->size_line = 0;
	fdf->endian = 0;
}

void	init_line(t_draw *line, t_point p0, t_point p1)
{
	line->grad = 0.0;
	line->dx = 0.0;
	line->dy = 0.0;
	line->inter_x = 0.0;
	line->inter_y = 0.0;
	line->x = p0.x;
	line->y = p0.y;
	line->color_p0 = p0.color;
	line->color_p1 = p1.color;
	line->x0 = p0.x;
	line->y0 = p0.y;
	line->x1 = p1.x;
	line->y1 = p1.y;
}