#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft.h"
# include "mlx.h"
# include "structs.h"

# define MANDELBROT 0
# define JULIA 1

# define MAX_ITER 80
# define MAX_COLOR 16777215

//do_everything
void	do_everything(t_scene *scene);
int		my_key_hook(int keycode, t_scene *scene);
void	my_mlx_pixel_put(t_img *img, int x, int y, int color);

//get_pixel_color
int		get_pixel_color(int x, int y, t_scene *scene);



#endif
