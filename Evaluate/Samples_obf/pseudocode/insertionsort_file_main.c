int __cdecl main(int argc, const char **argv, const char **envp)
{
  char v5; // [rsp+27h] [rbp-249h] BYREF
  int v6; // [rsp+28h] [rbp-248h]
  int v7; // [rsp+2Ch] [rbp-244h]
  unsigned int v8; // [rsp+30h] [rbp-240h]
  int v9; // [rsp+34h] [rbp-23Ch]
  int v10; // [rsp+38h] [rbp-238h]
  int v11; // [rsp+3Ch] [rbp-234h]
  FILE *stream; // [rsp+40h] [rbp-230h]
  _DWORD *v13; // [rsp+48h] [rbp-228h]
  char *v14; // [rsp+50h] [rbp-220h]
  __int64 v15; // [rsp+58h] [rbp-218h]
  _DWORD *v16; // [rsp+60h] [rbp-210h]
  char filename[512]; // [rsp+68h] [rbp-208h] BYREF
  unsigned __int64 v18; // [rsp+268h] [rbp-8h]

  v18 = __readfsqword(0x28u);
  megaInit();
  global_argc = argc;
  global_argv = (__int64)argv;
  global_envp = (__int64)envp;
  v11 = 1;
  v15 = 31LL;
  while ( 1 )
  {
    switch ( v15 )
    {
      case 0LL:
        if ( v7 >= (int)v8 )
          v15 = 11LL;
        else
          v15 = 30LL;
        break;
      case 3LL:
        ++v8;
        v15 = 18LL;
        break;
      case 6LL:
        if ( v9 )
          v15 = 19LL;
        else
          v15 = 24LL;
        break;
      case 7LL:
        if ( v10 )
          v15 = 8LL;
        else
          v15 = 35LL;
        break;
      case 8LL:
        fclose(stream);
        insertionSort(v13, v8);
        v6 = 0;
        v15 = 25LL;
        break;
      case 9LL:
        if ( v5 == 10 )
          v15 = 3LL;
        else
          v15 = 18LL;
        break;
      case 10LL:
        exit(1);
      case 11LL:
        stream = fopen(filename, "r");
        v6 = 0;
        fscanf(stream, "%d", v13);
        v15 = 32LL;
        break;
      case 12LL:
        ++v8;
        v15 = 18LL;
        break;
      case 13LL:
        if ( v14 )
          v15 = 27LL;
        else
          v15 = 36LL;
        break;
      case 14LL:
        if ( argc == 2 )
          v15 = 17LL;
        else
          v15 = 10LL;
        break;
      case 15LL:
        printf("%d", (unsigned int)v13[v6++]);
        v15 = 25LL;
        break;
      case 17LL:
        v14 = strncpy(filename, argv[1], 0x200uLL);
        v15 = 13LL;
        break;
      case 18LL:
        fscanf(stream, "%c", &v5);
        v15 = 34LL;
        break;
      case 19LL:
        fclose(stream);
        v16 = malloc(4LL * v8);
        v13 = v16;
        v7 = 0;
        v15 = 0LL;
        break;
      case 20LL:
        fscanf(stream, "%c", &v5);
        v15 = 34LL;
        break;
      case 23LL:
        putchar(10);
        v15 = 28LL;
        break;
      case 24LL:
        if ( v5 == 32 )
          v15 = 12LL;
        else
          v15 = 9LL;
        break;
      case 25LL:
        if ( v6 >= (int)v8 )
          v15 = 23LL;
        else
          v15 = 15LL;
        break;
      case 26LL:
        fwrite("Unable to read file\n", 1uLL, 0x14uLL, (FILE *)&dword_0);
        exit(1);
      case 27LL:
        stream = fopen(filename, "rb");
        v15 = 29LL;
        break;
      case 28LL:
        return 0;
      case 29LL:
        if ( stream )
          v15 = 20LL;
        else
          v15 = 26LL;
        break;
      case 30LL:
        v13[v7++] = 0;
        v15 = 0LL;
        break;
      case 31LL:
        v8 = 0;
        v5 = 0;
        v15 = 14LL;
        break;
      case 32LL:
        v10 = feof(stream);
        v15 = 7LL;
        break;
      case 34LL:
        v9 = feof(stream);
        v15 = 6LL;
        break;
      case 35LL:
        fscanf(stream, "%d", &v13[++v6]);
        v15 = 32LL;
        break;
      case 36LL:
        fwrite("Error copying argv to string!\n", 1uLL, 0x1EuLL, (FILE *)&dword_0);
        exit(1);
      default:
        continue;
    }
  }
}
