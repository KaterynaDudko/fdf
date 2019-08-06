#ifndef DRAW_LINE_H
# define DRAW_LINE_H

# include "fdf.h"

typedef struct	s_draw
{
	double 		grad;
	double 		dx;
	double 		dy;
	double		inter_y;
	double		inter_x;
	int 		x;
	int 		y;
	int 		color_p0;
	int 		color_p1;
	int 		x0;
	int 		y0;
	int 		x1;
	int 		y1;

}				t_draw;

void	draw_lines(t_point p0, t_point p1, t_data *fdf);
void	draw_straight_line(t_data *fdf, t_draw *line, t_point p0, t_point p1);
void	fdf_put_pixel(t_data *fdf, int x, int y, int color);

#endif
