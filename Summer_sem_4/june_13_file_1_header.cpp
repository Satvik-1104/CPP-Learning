int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int gcd(int a, int b)
{
    if (a < b)
    {
        for (int i{2}; i < b; i++)
        {
            if (a%i == 0 && b%i == 0)
            {
                return i;
            }
        }
    }
    else
    {
        for (int i{2}; i < a; i++)
        {
            if (a%i == 0 && b%i == 0)
            {
                return i;
            }
        }
    }
    return 1;
}