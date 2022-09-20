int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v3; // edx
  unsigned int v5; // [rsp+1Ch] [rbp-224h]
  FILE *stream; // [rsp+20h] [rbp-220h]
  __int64 n; // [rsp+28h] [rbp-218h]
  void *ptr; // [rsp+30h] [rbp-210h]
  char dest[512]; // [rsp+38h] [rbp-208h] BYREF
  unsigned __int64 v10; // [rsp+238h] [rbp-8h]

  v10 = __readfsqword(0x28u);
  if ( argc != 2 )
    exit(1);
  if ( !strncpy(dest, argv[1], 0x200uLL) )
  {
    fwrite("Error copying argv to string!\n", 1uLL, 0x1EuLL, (FILE *)&dword_0);
    exit(1);
  }
  stream = fopen(dest, "rb");
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
  v3 = strlen((const char *)ptr);
  v5 = FNVHash(ptr, v3);
  if ( v5 == -298024492 )
    puts("You win!");
  else
    puts("You loose!");
  printf("Hash: 0x%x\n", v5);
  return 0;
}
