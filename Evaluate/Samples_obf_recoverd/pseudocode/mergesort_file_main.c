int __cdecl main(int argc, const char **argv, const char **envp)
{
  char v5; // [rsp+27h] [rbp-249h] BYREF
  int j; // [rsp+28h] [rbp-248h]
  int v7; // [rsp+2Ch] [rbp-244h]
  int i; // [rsp+34h] [rbp-23Ch]
  int v11; // [rsp+3Ch] [rbp-234h]
  FILE *stream; // [rsp+40h] [rbp-230h]
  _DWORD *v13; // [rsp+48h] [rbp-228h]
  _DWORD *v15; // [rsp+60h] [rbp-210h]
  char filename[512]; // [rsp+68h] [rbp-208h] BYREF
  unsigned __int64 v17; // [rsp+268h] [rbp-8h]

  v17 = __readfsqword(0x28u);
  megaInit();
  global_argc = argc;
  global_argv = (__int64)argv;
  global_envp = (__int64)envp;
  v11 = 1;
  v7 = 0;
  v5 = 0;
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
  while ( 1 )
  {
    fscanf(stream, "%c", &v5);
    if ( feof(stream) )
      break;
    if ( v5 == 32 )
    {
      ++v7;
    }
    else if ( v5 == 10 )
    {
      ++v7;
    }
  }
  fclose(stream);
  v15 = malloc(4LL * (unsigned int)v7);
  v13 = v15;
  for ( i = 0; i < v7; ++i )
    v13[i] = 0;
  stream = fopen(filename, "r");
  j = 0;
  fscanf(stream, "%d", v13);
  while ( !feof(stream) )
    fscanf(stream, "%d", &v13[++j]);
  fclose(stream);
  mergeSort(v13, 0LL, (unsigned int)(v7 - 1));
  for ( j = 0; j < v7; ++j )
    printf("%d ", (unsigned int)v13[j]);
  putchar(10);
  return 0;
}
