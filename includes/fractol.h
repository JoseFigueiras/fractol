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

# define MAX_ITER 800
# define MAX_COLOR 16777215

# define SCROLL_UP 4
# define SCROLL_DOWN 5
# define UP_ARROW 65362
# define DOWN_ARROW 65364
# define LEFT_ARROW 65361
# define RIGHT_ARROW 65363
# define ESC 65307

//do_everything
void		do_everything(t_scene *scene);
int			my_key_hook(int keycode, t_scene *scene);
int			my_mouse_hook(int button, int x, int y, t_scene *scene);
void		my_mlx_pixel_put(t_img *img, int x, int y, int color);

//get_pixel_color
int			get_pixel_color(int x, int y, t_scene *scene);

int			compute_mandelbrot(float x, float y);
int			compute_julia(float x, float y, t_complex c);

t_complex	init_complex(float r, float i);

#endif
