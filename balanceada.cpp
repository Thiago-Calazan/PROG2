int balanceada(int n, int *v);
{
    int soma;
    int i, j;

    soma = v[0] + v[n-1];

    i = 1; j = n-2;
    while(i < j)
    {
        if((v[i] + vetor[j]) != soma)
            return 0;

        i++;
        j--;

    }
    return 1;
}
