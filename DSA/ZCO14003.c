#include <stdio.h>
#define ll long long

void merge(ll int a[], ll int l, ll int mid, ll int h)
{
    ll int i = l, j = mid + 1, k = l;
    ll int b[h + 1];

    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    for (; i <= mid; i++)
    {
        b[k++] = a[i];
    }
    for (; j <= h; j++)
    {
        b[k++] = a[j];
    }
    for (i = l; i <= h; i++)
    {
        a[i] = b[i];
    }
}
void mergeSort(ll int a[], ll int l, ll int h)
{
    ll int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}

int main()
{
    ll int t;
    scanf("%lld", &t);
    ll int a[t];
    for (ll int i = 0; i < t; i++)
    {
        scanf("%lld", &a[i]);
    }
    mergeSort(a, 0, t - 1);
    // for (int i = 0; i < t; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    ll int max = -1;
    for (ll int i = 0; i < t; i++)
    {
        if (max < (a[i] * (t - i)))
        {
            max = a[i] * (t - i);
        }
    }
    printf("%lld\n", max);
    return 0;
}