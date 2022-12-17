#include <stdio.h>

#include "OcCryptoLib.h"

int arr[1000];

char hash[] = "hello world";

int main()
{
    fprintf(stderr, "%d", SigVerifyShaHashBySize(arr, 1000, hash, sizeof(hash)));
}
