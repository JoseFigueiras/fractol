#include "fractol.h"

static int		compute_mandelbrot(float x, float y);

int		get_pixel_color(int x, int y, t_scene *scene)
{
	int		color;
	float	relative_x;
	float	relative_y;
	float	coord_x;
	float	coord_y;

	relative_x = (float)x - ((float)scene->res.x / 2);
	relative_y = (float)y - ((float)scene->res.y / 2);
	coord_x = scene->pos.x + (relative_x * scene->pos.pixel_distance);
	coord_y = scene->pos.y + (relative_y * scene->pos.pixel_distance);
	if (scene->fractal_type == MANDELBROT)
		color = compute_mandelbrot(coord_x, coord_y);
//	else if (scene->fractal_type == JULIA)
//		color = compute_julia(coord_x, coord_y);
	return (color);
}

static int		compute_mandelbrot(float x, float y)
{
	float	c;
	float	z;
	int		iter;
	int		color;

	c = sqrt(x * x + y * y);
	z = 0;
	iter = 0;
	while (fabs(z) <= 2 && iter < MAX_ITER)
	{
		z = z * z + c;
		iter++;
	}
	if (iter == MAX_ITER)
		return (0);
	color = MAX_COLOR * iter / MAX_ITER;
	return (color);
}
