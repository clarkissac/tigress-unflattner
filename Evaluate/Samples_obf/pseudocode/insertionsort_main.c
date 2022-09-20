int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v5; // [rsp+20h] [rbp-20h]
  char *v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]

  megaInit();
  global_argc = argc;
  global_argv = (__int64)argv;
  global_envp = (__int64)envp;
  v7 = 8LL;
  while ( 1 )
  {
    switch ( v7 )
    {
      case 1LL:
        return 0;
      case 3LL:
        putchar(10);
        v7 = 1LL;
        break;
      case 4LL:
        sscanf(argv[v5], "%d", &v6[4 * v5 - 4]);
        ++v5;
        v7 = 6LL;
        break;
      case 5LL:
        if ( v6 )
          v7 = 7LL;
        else
          v7 = 11LL;
        break;
      case 6LL:
        if ( v5 >= argc )
          v7 = 10LL;
        else
          v7 = 4LL;
        break;
      case 7LL:
        v5 = 1;
        v7 = 6LL;
        break;
      case 8LL:
        v6 = (char *)malloc(4LL * (unsigned int)argc - 1);
        v7 = 5LL;
        break;
      case 10LL:
        insertionSort((__int64)v6, argc - 1);
        v5 = 0;
        v7 = 14LL;
        break;
      case 11LL:
        puts("Error Allocating the array");
        exit(1);
      case 12LL:
        printf("%d ", *(unsigned int *)&v6[4 * v5++]);
        v7 = 14LL;
        break;
      case 14LL:
        if ( v5 >= argc - 1 )
          v7 = 3LL;
        else
          v7 = 12LL;
        break;
      default:
        continue;
    }
  }
}
