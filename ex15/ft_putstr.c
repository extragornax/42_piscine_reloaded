void    ft_putchar(char c);

void	ft_putstr(char *str)
{
  int	len;

  len = 0;
  while (str[len])
    {
      ft_putchar(str[len]);
      ++len;
    }
}
