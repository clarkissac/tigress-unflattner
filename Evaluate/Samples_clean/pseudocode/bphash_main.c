int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v3; // edx
  unsigned int v5; // [rsp+14h] [rbp-Ch]
  char *s; // [rsp+18h] [rbp-8h]

  s = (char *)argv[1];
  v3 = strlen(s);
  v5 = BPHash(s, v3);
  if ( v5 == 1543172857 )
    puts("You win!");
  else
    puts("You loose!");
  printf("Hash: 0x%x\n", v5);
  return 0;
}
