int main(void)
{
    int a,b,c;
    
    a = 2;
    b = 0;
    
    c = a/b;

    return 0;
}

int division_overflow(void)
{
    int a,b,c;
    
    a = -2147483648;
    b = -1;
    
    c = a/b;

    return c;
}
