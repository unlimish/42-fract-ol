#ifndef FRACTOL_H
# define FRACTOL_H

# define WIDTH 600
# define HEIGHT 520
# define MAX_ITER 1000

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
#endif
