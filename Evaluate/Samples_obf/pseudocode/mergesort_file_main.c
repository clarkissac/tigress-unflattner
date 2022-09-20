int __cdecl main(int argc, const char **argv, const char **envp)
{
  char v5; // [rsp+27h] [rbp-249h] BYREF
  int v6; // [rsp+28h] [rbp-248h]
  int v7; // [rsp+2Ch] [rbp-244h]
  int v8; // [rsp+30h] [rbp-240h]
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
  v15 = 27LL;
  while ( 1 )
  {
    switch ( v15 )
    {
      case 0LL:
        exit(1);
      case 1LL:
        stream = fopen(filename, "rb");
        v15 = 21LL;
        break;
      case 3LL:
        if ( argc == 2 )
          v15 = 5LL;
        else
          v15 = 0LL;
        break;
      case 4LL:
      case 25LL:
        fscanf(stream, "%c", &v5);
        v15 = 35LL;
        break;
      case 5LL:
        v14 = strncpy(filename, argv[1], 0x200uLL);
        v15 = 31LL;
        break;
      case 7LL:
        fclose(stream);
        mergeSort(v13, 0LL, (unsigned int)(v7 - 1));
        v6 = 0;
        v15 = 28LL;
        break;
      case 8LL:
        if ( v8 )
          v15 = 10LL;
        else
          v15 = 9LL;
        break;
      case 9LL:
        if ( v5 == 32 )
          v15 = 30LL;
        else
          v15 = 11LL;
        break;
      case 10LL:
        fclose(stream);
        v16 = malloc(4LL * (unsigned int)v7);
        v13 = v16;
        v9 = 0;
        v15 = 26LL;
        break;
      case 11LL:
        if ( v5 == 10 )
          v15 = 13LL;
        else
          v15 = 4LL;
        break;
      case 13LL:
        ++v7;
        v15 = 4LL;
        break;
      case 14LL:
        return 0;
      case 15LL:
        fscanf(stream, "%d", &v13[++v6]);
        v15 = 33LL;
        break;
      case 16LL:
        v13[v9++] = 0;
        v15 = 26LL;
        break;
      case 18LL:
        if ( v10 )
          v15 = 7LL;
        else
          v15 = 15LL;
        break;
      case 21LL:
        if ( stream )
          v15 = 25LL;
        else
          v15 = 36LL;
        break;
      case 23LL:
        stream = fopen(filename, "r");
        v6 = 0;
        fscanf(stream, "%d", v13);
        v15 = 33LL;
        break;
      case 24LL:
        putchar(10);
        v15 = 14LL;
        break;
      case 26LL:
        if ( v9 >= v7 )
          v15 = 23LL;
        else
          v15 = 16LL;
        break;
      case 27LL:
        v7 = 0;
        v5 = 0;
        v15 = 3LL;
        break;
      case 28LL:
        if ( v6 >= v7 )
          v15 = 24LL;
        else
          v15 = 32LL;
        break;
      case 29LL:
        fwrite("Error copying argv to string!\n", 1uLL, 0x1EuLL, (FILE *)&dword_0);
        exit(1);
      case 30LL:
        ++v7;
        v15 = 4LL;
        break;
      case 31LL:
        if ( v14 )
          v15 = 1LL;
        else
          v15 = 29LL;
        break;
      case 32LL:
        printf("%d ", (unsigned int)v13[v6++]);
        v15 = 28LL;
        break;
      case 33LL:
        v10 = feof(stream);
        v15 = 18LL;
        break;
      case 35LL:
        v8 = feof(stream);
        v15 = 8LL;
        break;
      case 36LL:
        fwrite("Unable to read file\n", 1uLL, 0x14uLL, (FILE *)&dword_0);
        exit(1);
      default:
        continue;
    }
  }
}
