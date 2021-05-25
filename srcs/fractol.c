#include "fractol.h"

static t_scene	*get_scene_from_args(int argc, char **argv);

int	main(int argc, char **argv)
{
	t_scene	*scene;

	//if (!check_args(argc, argv))
	//{
	//	printf("Problem with args\n");
	//	print_available_args();
	//	exit(1);
	//}
	scene = get_scene_from_args(argc, argv);
	if (!scene)
		return (0);
	do_everything(scene);
	return (0);
}

static t_scene	*get_scene_from_args(int argc, char **argv)
{
	t_scene	*scene;

	if (argc <= 1)
		exit(1);
	scene = malloc(sizeof(t_scene));
	if (!scene)
		return (NULL);

	if (!ft_strcmp(argv[1], "m"))
		scene->fractal_type = MANDELBROT;
	else if (!ft_strcmp(argv[1], "j"))
		scene->fractal_type = JULIA;
	else
		return (NULL);
	
	if (argc <= 2)
	{
		scene->res.x = 1000;
		scene->res.y = 500;
		scene->pos.x = 0.0f;
		scene->pos.y = 0.0f;
		scene->pos.pixel_distance = 0.005f;
	}
	return (scene);
}
