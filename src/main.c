#include "../minilibx_opengl/mlx.h"
#include "../inc/fractol.h"
#include <stdio.h>

void px_put(t_mlx_img *img_prop, int x, int y, int color)
{
	char  *dst;

	dst = img_prop->addr + (y * img_prop->line_len + x * (img_prop->bit_per_px / 8));
	*(unsigned int*)dst = color;
}
