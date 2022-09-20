int __cdecl main(int argc, const char **argv, const char **envp)
{
  int i; // [rsp+14h] [rbp-Ch]
  int j; // [rsp+14h] [rbp-Ch]
  char *v6; // [rsp+18h] [rbp-8h]

  v6 = (char *)malloc(4LL * argc - 1);
  if ( !v6 )
  {
    puts("Error allocating the array.");
    exit(1);
  }
  for ( i = 1; i < argc; ++i )
    sscanf(argv[i], "%d", &v6[4 * i - 4]);
  bubblesort((__int64)v6, argc - 1);
  for ( j = 0; j < argc - 1; ++j )
    printf("%d ", *(unsigned int *)&v6[4 * j]);
  putchar(10);
  return 0;
}
