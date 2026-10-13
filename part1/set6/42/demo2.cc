void demo2()
{
    int *arr = new int[5];
    delete[] arr;   // delete : destruct and de-allocate all ints in arr
}