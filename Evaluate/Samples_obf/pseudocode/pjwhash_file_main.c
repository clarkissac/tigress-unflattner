int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v3; // edx
  unsigned int v6; // [rsp+28h] [rbp-248h]
  FILE *stream; // [rsp+30h] [rbp-240h]
  char *v8; // [rsp+38h] [rbp-238h]
  __int64 v9; // [rsp+40h] [rbp-230h]
  __int64 n; // [rsp+48h] [rbp-228h]
  void *ptr; // [rsp+58h] [rbp-218h]
  char dest[512]; // [rsp+68h] [rbp-208h] BYREF
  unsigned __int64 v13; // [rsp+268h] [rbp-8h]

  v13 = __readfsqword(0x28u);
  megaInit();
  global_argc = argc;
  global_argv = (__int64)argv;
  global_envp = (__int64)envp;
  v9 = 14LL;
  while ( 1 )
  {
    switch ( v9 )
    {
      case 0LL:
        fseek(stream, 0LL, 2);
        n = ftell(stream);
        fseek(stream, 0LL, 0);
        ptr = malloc(n + 1);
        fread(ptr, 1uLL, n, stream);
        fclose(stream);
        v3 = strlen((const char *)ptr);
        v6 = PJWHash(ptr, v3);
        v9 = 5LL;
        break;
      case 1LL:
        if ( v8 )
          v9 = 12LL;
        else
          v9 = 9LL;
        break;
      case 2LL:
        exit(1);
      case 3LL:
        puts("You win!");
        v9 = 10LL;
        break;
      case 4LL:
        v8 = strncpy(dest, argv[1], 0x200uLL);
        v9 = 1LL;
        break;
      case 5LL:
        if ( v6 == 184139465 )
          v9 = 3LL;
        else
          v9 = 11LL;
        break;
      case 6LL:
        fwrite("Unable to read file\n", 1uLL, 0x14uLL, (FILE *)&dword_0);
        exit(1);
      case 7LL:
        return 0;
      case 8LL:
        if ( stream )
          v9 = 0LL;
        else
          v9 = 6LL;
        break;
      case 9LL:
        fwrite("Error copying argv to string!\n", 1uLL, 0x1EuLL, (FILE *)&dword_0);
        exit(1);
      case 10LL:
        printf("Hash: 0x%x\n", v6);
        v9 = 7LL;
        break;
      case 11LL:
        puts("You loose!");
        v9 = 10LL;
        break;
      case 12LL:
        stream = fopen(dest, "rb");
        v9 = 8LL;
        break;
      case 13LL:
        if ( argc == 2 )
          v9 = 4LL;
        else
          v9 = 2LL;
        break;
      case 14LL:
        v9 = 13LL;
        break;
      default:
        continue;
    }
  }
}
