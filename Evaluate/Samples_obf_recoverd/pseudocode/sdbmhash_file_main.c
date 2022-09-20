int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v4; // edx
  unsigned int v6; // [rsp+28h] [rbp-248h]
  FILE *stream; // [rsp+30h] [rbp-240h]
  __int64 n; // [rsp+48h] [rbp-228h]
  void *ptr; // [rsp+58h] [rbp-218h]
  char filename[512]; // [rsp+68h] [rbp-208h] BYREF
  unsigned __int64 v11; // [rsp+268h] [rbp-8h]

  v11 = __readfsqword(0x28u);
  megaInit();
  global_argc = argc;
  global_argv = (__int64)argv;
  global_envp = (__int64)envp;
  if ( argc != 2 )
    exit(1);
  if ( !strncpy(filename, argv[1], 0x200uLL) )
  {
    fwrite("Error copying argv to string!\n", 1uLL, 0x1EuLL, (FILE *)&dword_0);
    exit(1);
  }
  stream = fopen(filename, "rb");
  if ( !stream )
  {
    fwrite("Unable to read file\n", 1uLL, 0x14uLL, (FILE *)&dword_0);
    exit(1);
  }
  fseek(stream, 0LL, 2);
  n = ftell(stream);
  fseek(stream, 0LL, 0);
  ptr = malloc(n + 1);
  fread(ptr, 1uLL, n, stream);
  fclose(stream);
  v4 = strlen((const char *)ptr);
  v6 = SDBMHash(ptr, v4);
  if ( v6 == -1982015890 )
    puts("You win!");
  else
    puts("You loose!");
  printf("Hash: 0x%x\n", v6);
  return 0;
}
