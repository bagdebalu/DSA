int maxOnes(int a[], int n)
{
    // Your code goes here

    == == == == == == == == == == == == == == == Optimize == == == == == == == == == == == ==

        int one = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
        }
        else
        {
            one++;
            a[i] *= -1;
        }
    }
    if (one == n)

        return n;

    int maxsum = INT_MIN, currsum = 0;

    for (int i = 0; i < n; i++)
    {
        currsum += a[i];
        maxsum = max(maxsum, currsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }

    return maxsum + one;
}