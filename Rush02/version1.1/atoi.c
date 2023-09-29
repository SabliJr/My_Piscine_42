int  ft_atoi(char *str)
{
    int i;
    int sign;
    long long nb;

    i = 0;
    sign = 1;
    nb = 0;
    while (str[i] == ' ' ||( str[i] < 14 && str[i] > 8))
    i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] <= '9' && str[i] >= '0')
    {
        nb *= 10;
        nb += str[i] - '0';
        i++;
    }
    return (nb * sign);
}
