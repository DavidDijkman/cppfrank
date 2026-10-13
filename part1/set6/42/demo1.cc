void demo1()
{
    int *ptr = new int(42); // new      : allocate memory for int
    delete ptr;             // delete   : destruct and de-allocate int
}