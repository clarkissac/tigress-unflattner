int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v4; // edx
  unsigned int v6; // [rsp+2Ch] [rbp-24h]
  char *s; // [rsp+40h] [rbp-10h]

  megaInit();
  global_argc = argc;
  global_argv = (__int64)argv;
  global_envp = (__int64)envp;
  s = (char *)argv[1];
  v4 = strlen(s);
  v6 = PJWHash(s, v4);
  if ( v6 == 184139465 )
    puts("You win!");
  else
    puts("You loose!");
  printf("Hash: 0x%x\n", v6);
  return 0;
}
