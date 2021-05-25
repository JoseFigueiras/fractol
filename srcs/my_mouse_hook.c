#include "fractol.h"

int	my_mouse_hook(int button, int x, int y, t_scene *scene)
{
	int	normal_x;
	int	normal_y;

	if (button == SCROLL_UP)
		scene->pos.pixel_distance /= 1.15;
	else if (button == SCROLL_DOWN)
		scene->pos.pixel_distance *= 1.15;
	normal_x = x - scene->res.x / 2;
	normal_y = y - scene->res.y / 2;
	scene->pos.x += scene->pos.pixel_distance * (float)normal_x / 10;
	scene->pos.y += scene->pos.pixel_distance * (float)normal_y / 10;
	return (1);
}
