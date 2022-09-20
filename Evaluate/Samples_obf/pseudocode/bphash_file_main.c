int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v4; // edx
  unsigned int v6; // [rsp+28h] [rbp-248h]
  FILE *stream; // [rsp+30h] [rbp-240h]
  char *v8; // [rsp+38h] [rbp-238h]
  __int64 v9; // [rsp+40h] [rbp-230h]
  __int64 n; // [rsp+48h] [rbp-228h]
  void *ptr; // [rsp+58h] [rbp-218h]
  char filename[512]; // [rsp+68h] [rbp-208h] BYREF
  unsigned __int64 v13; // [rsp+268h] [rbp-8h]

  v13 = __readfsqword(0x28u);
  megaInit();
  global_argc = argc;
  global_argv = (__int64)argv;
  global_envp = (__int64)envp;
  v9 = 1LL;
  while ( 1 )
  {
    switch ( v9 )
    {
      case 0LL:
        fwrite("Unable to read file\n", 1uLL, 0x14uLL, (FILE *)&dword_0);
        exit(1);
      case 1LL:
        v9 = 12LL;
        break;
      case 2LL:
        printf("Hash: 0x%x\n", v6);
        v9 = 13LL;
        break;
      case 3LL:
        exit(1);
      case 4LL:
        if ( v6 == 1543172857 )
          v9 = 8LL;
        else
          v9 = 6LL;
        break;
      case 5LL:
        stream = fopen(filename, "rb");
        v9 = 11LL;
        break;
      case 6LL:
        puts("You loose!");
        v9 = 2LL;
        break;
      case 7LL:
        v8 = strncpy(filename, argv[1], 0x200uLL);
        v9 = 9LL;
        break;
      case 8LL:
        puts("You win!");
        v9 = 2LL;
        break;
      case 9LL:
        if ( v8 )
          v9 = 5LL;
        else
          v9 = 14LL;
        break;
      case 10LL:
        fseek(stream, 0LL, 2);
        n = ftell(stream);
        fseek(stream, 0LL, 0);
        ptr = malloc(n + 1);
        fread(ptr, 1uLL, n, stream);
        fclose(stream);
        v4 = strlen((const char *)ptr);
        v6 = BPHash(ptr, v4);
        v9 = 4LL;
        break;
      case 11LL:
        if ( stream )
          v9 = 10LL;
        else
          v9 = 0LL;
        break;
      case 12LL:
        if ( argc == 2 )
          v9 = 7LL;
        else
          v9 = 3LL;
        break;
      case 13LL:
        return 0;
      case 14LL:
        fwrite("Error copying argv to string!\n", 1uLL, 0x1EuLL, (FILE *)&dword_0);
        exit(1);
      default:
        continue;
    }
  }
}
