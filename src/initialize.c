#include "../inc/solong.h"

void init_prop(t_draw_prop *dr_p)
{
	dr_p->mlx = mlx_init();
	dr_p->mlx_win = mlx_new_window(dr_p->mlx, WIDTH, HEIGHT, "fract-ol");

	dr_p->img.img = mlx_new_image(dr_p->mlx, WIDTH, HEIGHT);
	dr_p->img.addr = mlx_get_data_addr(dr_p->img.img, &dr_p->img.bit_per_px,
									&dr_p->img.line_len, &dr_p->img.endian);
	dr_p->imag_max = 2;
	dr_p->real_max = 2;
	dr_p->imag_min = -2;
	dr_p->real_min = -2;
}
