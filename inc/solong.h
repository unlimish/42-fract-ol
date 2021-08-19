#ifndef SOLONG_H
#define SOLONG_H
#ifndef solong_H
# define solong_H

# define WIDTH 600
# define HEIGHT 520
# define MAX_ITER 1000

#include "mlx.h"

typedef	struct	s_mlx_img
{
	void	*img;
	void	*addr;
	int		bit_per_px;
	int		line_len;
	int		endian;
}				t_mlx_img;

typedef	struct	s_draw_prop
{
	t_mlx_img	img;
	void		*mlx;
	void		*mlx_win;
	double		z_imag;
	double		z_real;
	double		c_imag;
	double		c_real;
	double		real_min;
	double		real_max;
	double		imag_min;
	double		imag_max;
	double		fact_imag;
	double		fact_real;
}				t_draw_prop;

void init_prop(t_draw_prop *dr_p);
void px_put(t_mlx_img *img_prop, int x, int y, int color);
int draw_fractal(t_draw_prop *dr_p);

#endif


#endif
