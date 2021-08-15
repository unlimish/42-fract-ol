#include "../inc/fractol.h"
#include <stdio.h>

void px_put(t_mlx_img *img_prop, int x, int y, int color)
{
	char  *dst;

	dst = img_prop->addr + (y * img_prop->line_len + x * (img_prop->bit_per_px / 8));
	*(unsigned int*)dst = color;
}

int main(void)
{
	void *mlx;
	void *mlx_win;
	t_mlx_img img_prop;
	float	r;
	float	x;
	float	y;
	float	x_scale;
	float	y_scale;
	int i;
	float x_tmp;

	x = 0.0;
	y = 0.0;
	x_scale = 1.0;
	y_scale = 1.0;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, RES, RES, "Hi");

	img_prop.img = mlx_new_image(mlx, RES, RES);
	img_prop.addr = mlx_get_data_addr(img_prop.img, &img_prop.bit_per_px, &img_prop.line_len, &img_prop.endian);
	px_put(&img_prop, (int)x*5, (int)y*5, 0x00FF0000);
	i = 0;
	while ((i < MAX_ITER) && ((x*x + y*y) <= 2*2))
	{
		x_tmp = x*x - y*y + x_scale;
	}
	mlx_put_image_to_window(mlx, mlx_win, img_prop.img, 0, 0);
//	px_put(&img_prop, 20, 20, 0x00FF0000);
	mlx_loop(mlx);

	return 0;

}
