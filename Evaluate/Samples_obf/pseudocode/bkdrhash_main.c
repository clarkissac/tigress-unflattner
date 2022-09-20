int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v4; // edx
  unsigned int v6; // [rsp+2Ch] [rbp-24h]
  __int64 v7; // [rsp+38h] [rbp-18h]
  char *s; // [rsp+40h] [rbp-10h]

  megaInit();
  global_argc = argc;
  global_argv = (__int64)argv;
  global_envp = (__int64)envp;
  v7 = 2LL;
  while ( 1 )
  {
    switch ( v7 )
    {
      case 0LL:
        puts("You win!");
        v7 = 1LL;
        break;
      case 1LL:
        printf("Hash: 0x%x\n", v6);
        v7 = 5LL;
        break;
      case 2LL:
        s = (char *)argv[1];
        v4 = strlen(s);
        v6 = BKDRHash(s, v4);
        v7 = 4LL;
        break;
      case 3LL:
        puts("You loose!");
        v7 = 1LL;
        break;
      case 4LL:
        if ( v6 == -1114471758 )
          v7 = 0LL;
        else
          v7 = 3LL;
        break;
      case 5LL:
        return 0;
      default:
        continue;
    }
  }
}
