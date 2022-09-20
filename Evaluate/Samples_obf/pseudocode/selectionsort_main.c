int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v5; // [rsp+20h] [rbp-20h]
  unsigned int *v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]

  megaInit();
  global_argc = argc;
  global_argv = (__int64)argv;
  global_envp = (__int64)envp;
  v7 = 5LL;
  while ( 1 )
  {
    switch ( v7 )
    {
      case 0LL:
        puts("Error Allocating the array");
        exit(1);
      case 1LL:
        putchar(10);
        v7 = 13LL;
        break;
      case 2LL:
        printf(" %d", v6[v5++]);
        v7 = 7LL;
        break;
      case 3LL:
        if ( v5 >= argc )
          v7 = 11LL;
        else
          v7 = 8LL;
        break;
      case 4LL:
        if ( v6 )
          v7 = 14LL;
        else
          v7 = 0LL;
        break;
      case 5LL:
        v6 = (unsigned int *)malloc(4LL * (unsigned int)argc - 1);
        v7 = 4LL;
        break;
      case 7LL:
        if ( v5 >= argc - 1 )
          v7 = 1LL;
        else
          v7 = 2LL;
        break;
      case 8LL:
        sscanf(argv[v5], "%d", &v6[v5 - 1]);
        ++v5;
        v7 = 3LL;
        break;
      case 11LL:
        selectionSort(v6, (unsigned int)(argc - 1));
        v5 = 0;
        v7 = 7LL;
        break;
      case 13LL:
        return 0;
      case 14LL:
        v5 = 1;
        v7 = 3LL;
        break;
      default:
        continue;
    }
  }
}
