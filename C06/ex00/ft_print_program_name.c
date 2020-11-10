int		main(int argc, char *argv[])
{
	char *ptr;

	if (argc > 0)
	{
		ptr = argv[0];
		while (*ptr)
		{
			write(1, ptr++, 1);
		}
	}
	write(1, "\n", 1);
}