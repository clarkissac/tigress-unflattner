int __cdecl main(int argc, const char **argv, const char **envp)
{
  int i; // [rsp+20h] [rbp-20h]
  int j; // [rsp+20h] [rbp-20h]
  char *v7; // [rsp+28h] [rbp-18h]

  megaInit();
  global_argc = argc;
  global_argv = (__int64)argv;
  global_envp = (__int64)envp;
  v7 = (char *)malloc(4LL * (unsigned int)argc - 1);
  if ( !v7 )
  {
    puts("Error Allocating the array");
    exit(1);
  }
  for ( i = 1; i < argc; ++i )
    sscanf(argv[i], "%d", &v7[4 * i - 4]);
  insertionSort((__int64)v7, argc - 1);
  for ( j = 0; j < argc - 1; ++j )
    printf("%d ", *(unsigned int *)&v7[4 * j]);
  putchar(10);
  return 0;
}
