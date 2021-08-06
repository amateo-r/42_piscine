int ft_tracking (int x, int y, char skyscrapper, char **box);

void    ft_check_hempty (int x, int y, char skyscrapper, char *clues, char **box)
{
    int x;
    int y;
    
    x = 0;
    y = 0;
    while (y < 4)
    {
        while (x < 0)
        {
            if (box[y][x] == '\0')
            {

            }
            x++;
        }
        y++;
    }
}

int ft_check_clue(int x, int y, char skyscrapper, char *clues)
{
    if (y == 0 && clues[x] == '3')
}