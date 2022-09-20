int __cdecl main(int argc, const char **argv, const char **envp)
{
  char v4; // [rsp+1Bh] [rbp-225h] BYREF
  int j; // [rsp+1Ch] [rbp-224h]
  int v6; // [rsp+20h] [rbp-220h]
  int i; // [rsp+24h] [rbp-21Ch]
  FILE *stream; // [rsp+28h] [rbp-218h]
  _DWORD *v9; // [rsp+30h] [rbp-210h]
  char dest[512]; // [rsp+38h] [rbp-208h] BYREF
  unsigned __int64 v11; // [rsp+238h] [rbp-8h]

  v11 = __readfsqword(0x28u);
  v6 = 0;
  v4 = 0;
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
  while ( 1 )
  {
    fscanf(stream, "%c", &v4);
    if ( feof(stream) )
      break;
    if ( v4 == 32 || v4 == 10 )
      ++v6;
  }
  fclose(stream);
  v9 = malloc(4LL * v6);
  for ( i = 0; i < v6; ++i )
    v9[i] = 0;
  stream = fopen(dest, "r");
  j = 0;
  fscanf(stream, "%d", v9);
  while ( !feof(stream) )
    fscanf(stream, "%d", &v9[++j]);
  fclose(stream);
  mergeSort(v9, 0LL, (unsigned int)(v6 - 1));
  for ( j = 0; j < v6; ++j )
    printf("%d ", (unsigned int)v9[j]);
  putchar(10);
  return 0;
}
