#ifndef FRACTOL_H
# define FRACTOL_H

# define RESOLUTION 600;

typedef struct	s_comp_num
{
	double	imaginary;
	double	real;
}				t_comp_num;

typedef	struct	s_mlx_img
{
	void	*img;
	void	*addr;
	int		bit_per_px;
	int		line_len;
	int		endian;
}				t_mlx_img;

#endif
