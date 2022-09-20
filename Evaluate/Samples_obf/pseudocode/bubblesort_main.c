int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v5; // [rsp+20h] [rbp-20h]
  unsigned int *v6; // [rsp+28h] [rbp-18h]
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
      case 0LL:
        puts("Error allocating the array.");
        exit(1);
      case 1LL:
        printf("%d ", v6[v5++]);
        v7 = 2LL;
        break;
      case 2LL:
        if ( v5 >= argc - 1 )
          v7 = 14LL;
        else
          v7 = 1LL;
        break;
      case 3LL:
        if ( v5 >= argc )
          v7 = 11LL;
        else
          v7 = 12LL;
        break;
      case 5LL:
        v5 = 1;
        v7 = 3LL;
        break;
      case 6LL:
        return 0;
      case 7LL:
        if ( v6 )
          v7 = 5LL;
        else
          v7 = 0LL;
        break;
      case 8LL:
        v6 = (unsigned int *)malloc(4LL * (unsigned int)argc - 1);
        v7 = 7LL;
        break;
      case 11LL:
        bubblesort((__int64)v6, argc - 1);
        v5 = 0;
        v7 = 2LL;
        break;
      case 12LL:
        sscanf(argv[v5], "%d", &v6[v5 - 1]);
        ++v5;
        v7 = 3LL;
        break;
      case 14LL:
        putchar(10);
        v7 = 6LL;
        break;
      default:
        continue;
    }
  }
}
