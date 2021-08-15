#include "../inc/fractol.h"
#include <stdio.h>

void px_put(t_mlx_img *img_prop, int x, int y, int color)
{
	char  *dst;

	dst = img_prop->addr + (y * img_prop->line_len + x * (img_prop->bit_per_px / 8));
	*(unsigned int*)dst = color;
}

int draw_fractal(t_draw_prop *dr_p)
{
	int		i;
	double	x_tmp;
	int		color;

	i = 0;
	while ((i < MAX_ITER) && ((dr_p->z_real * dr_p->z_real +
	dr_p->z_imag * dr_p->z_imag) <= (2 * 2)))
	{
		x_tmp = dr_p->z_real * dr_p->z_real - dr_p->z_imag * dr_p->z_imag +
																dr_p->c_real;
		dr_p->z_imag = 2 * dr_p->z_real * dr_p->z_imag + dr_p->c_imag;
		dr_p->z_real = x_tmp;
		i++;
	}
	if (i == MAX_ITER)
		color = 0x00000000;
	else
		color = 0x00FF0000;
	return (color);
}

int main(void)
{
	t_draw_prop	dr_p;
	int		x;
	int		y;
	int i;
	float x_tmp;

	x = 0;
	y = 0;

	init_prop(&dr_p);
	i = 0;
	printf("%s\n", "test");
	while (y < HEIGHT)
	{
		x = 1;
		while (x < WIDTH)
		{
			px_put(&dr_p.img, x, y, 0x00FF0000);
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(dr_p.mlx, dr_p.mlx_win, dr_p.img.img, 0, 0);
	mlx_loop(&dr_p.mlx);

	return 0;

}
