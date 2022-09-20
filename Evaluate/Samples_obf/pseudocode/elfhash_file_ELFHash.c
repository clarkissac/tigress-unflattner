__int64 __fastcall ELFHash(char *a1, unsigned int a2)
{
  unsigned int v4; // [rsp+18h] [rbp-14h]
  unsigned int v5; // [rsp+1Ch] [rbp-10h]
  unsigned int v6; // [rsp+20h] [rbp-Ch]
  __int64 v7; // [rsp+24h] [rbp-8h]

  v7 = 2LL;
  while ( 1 )
  {
    switch ( v7 )
    {
      case 1LL:
        v4 ^= HIBYTE(v5);
        v7 = 4LL;
        break;
      case 2LL:
        v4 = 0;
        v5 = 0;
        v6 = 0;
        v7 = 6LL;
        break;
      case 3LL:
        v4 = 16 * v4 + *a1;
        v5 = v4 & 0xF0000000;
        v7 = 5LL;
        break;
      case 4LL:
        v4 &= ~v5;
        ++a1;
        ++v6;
        v7 = 6LL;
        break;
      case 5LL:
        if ( v5 )
          v7 = 1LL;
        else
          v7 = 4LL;
        break;
      case 6LL:
        if ( v6 >= a2 )
          v7 = 8LL;
        else
          v7 = 3LL;
        break;
      case 8LL:
        return v4;
      default:
        continue;
    }
  }
}
