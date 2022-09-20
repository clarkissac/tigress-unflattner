int __cdecl main(int argc, const char **argv, const char **envp)
{
  char v5; // [rsp+27h] [rbp-249h] BYREF
  int v6; // [rsp+28h] [rbp-248h]
  int v7; // [rsp+2Ch] [rbp-244h]
  unsigned int v8; // [rsp+30h] [rbp-240h]
  int v9; // [rsp+34h] [rbp-23Ch]
  int v10; // [rsp+38h] [rbp-238h]
  int v11; // [rsp+3Ch] [rbp-234h]
  _DWORD *v12; // [rsp+40h] [rbp-230h]
  FILE *stream; // [rsp+48h] [rbp-228h]
  char *v14; // [rsp+50h] [rbp-220h]
  __int64 v15; // [rsp+58h] [rbp-218h]
  _DWORD *v16; // [rsp+60h] [rbp-210h]
  char dest[512]; // [rsp+68h] [rbp-208h] BYREF
  unsigned __int64 v18; // [rsp+268h] [rbp-8h]

  v18 = __readfsqword(0x28u);
  megaInit();
  global_argc = argc;
  global_argv = (__int64)argv;
  global_envp = (__int64)envp;
  v11 = 1;
  v15 = 13LL;
  while ( 1 )
  {
    switch ( v15 )
    {
      case 0LL:
        ++v8;
        v15 = 20LL;
        break;
      case 1LL:
        stream = fopen(dest, "rb");
        v15 = 34LL;
        break;
      case 2LL:
        fscanf(stream, "%d", &v12[++v6]);
        v15 = 8LL;
        break;
      case 4LL:
        fscanf(stream, "%c", &v5);
        v15 = 11LL;
        break;
      case 5LL:
        stream = fopen(dest, "r");
        v6 = 0;
        fscanf(stream, "%d", v12);
        v15 = 8LL;
        break;
      case 6LL:
        fwrite("Unable to read file\n", 1uLL, 0x14uLL, (FILE *)&dword_0);
        exit(1);
      case 7LL:
        v12[v7++] = 0;
        v15 = 23LL;
        break;
      case 8LL:
        v10 = feof(stream);
        v15 = 16LL;
        break;
      case 9LL:
        if ( v9 )
          v15 = 31LL;
        else
          v15 = 17LL;
        break;
      case 11LL:
        v9 = feof(stream);
        v15 = 9LL;
        break;
      case 12LL:
        return 0;
      case 13LL:
        v5 = 0;
        v8 = 0;
        v15 = 36LL;
        break;
      case 15LL:
        fclose(stream);
        bubblesort(v12, v8);
        v6 = 0;
        v15 = 29LL;
        break;
      case 16LL:
        if ( v10 )
          v15 = 15LL;
        else
          v15 = 2LL;
        break;
      case 17LL:
        if ( v5 == 32 )
          v15 = 18LL;
        else
          v15 = 33LL;
        break;
      case 18LL:
        ++v8;
        v15 = 20LL;
        break;
      case 19LL:
        fwrite("Error copying argv to string!\n", 1uLL, 0x1EuLL, (FILE *)&dword_0);
        exit(1);
      case 20LL:
        fscanf(stream, "%c", &v5);
        v15 = 11LL;
        break;
      case 21LL:
        printf("%d ", (unsigned int)v12[v6++]);
        v15 = 29LL;
        break;
      case 22LL:
        putchar(10);
        v15 = 12LL;
        break;
      case 23LL:
        if ( v7 >= (int)v8 )
          v15 = 5LL;
        else
          v15 = 7LL;
        break;
      case 27LL:
        if ( v14 )
          v15 = 1LL;
        else
          v15 = 19LL;
        break;
      case 28LL:
        exit(1);
      case 29LL:
        if ( v6 >= (int)v8 )
          v15 = 22LL;
        else
          v15 = 21LL;
        break;
      case 30LL:
        v14 = strncpy(dest, argv[1], 0x200uLL);
        v15 = 27LL;
        break;
      case 31LL:
        fclose(stream);
        v16 = malloc(4LL * v8);
        v12 = v16;
        v7 = 0;
        v15 = 23LL;
        break;
      case 33LL:
        if ( v5 == 10 )
          v15 = 0LL;
        else
          v15 = 20LL;
        break;
      case 34LL:
        if ( stream )
          v15 = 4LL;
        else
          v15 = 6LL;
        break;
      case 36LL:
        if ( argc == 2 )
          v15 = 30LL;
        else
          v15 = 28LL;
        break;
      default:
        continue;
    }
  }
}
