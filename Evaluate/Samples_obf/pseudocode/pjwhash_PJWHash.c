__int64 __fastcall PJWHash(char *a1, unsigned int a2)
{
  char v4; // [rsp+18h] [rbp-24h]
  char v5; // [rsp+1Ch] [rbp-20h]
  int v6; // [rsp+20h] [rbp-1Ch]
  unsigned int v7; // [rsp+24h] [rbp-18h]
  unsigned int v8; // [rsp+28h] [rbp-14h]
  unsigned int v9; // [rsp+2Ch] [rbp-10h]
  __int64 v10; // [rsp+34h] [rbp-8h]

  v10 = 2LL;
  while ( 1 )
  {
    switch ( v10 )
    {
      case 1LL:
        v7 = ~v6 & (v7 ^ (v8 >> v4));
        v10 = 4LL;
        break;
      case 2LL:
        v4 = 24;
        v5 = 4;
        v6 = -268435456;
        v7 = 0;
        v8 = 0;
        v9 = 0;
        v10 = 6LL;
        break;
      case 3LL:
        v7 = (v7 << v5) + *a1;
        v8 = v6 & v7;
        v10 = 5LL;
        break;
      case 4LL:
        ++a1;
        ++v9;
        v10 = 6LL;
        break;
      case 5LL:
        if ( v8 )
          v10 = 1LL;
        else
          v10 = 4LL;
        break;
      case 6LL:
        if ( v9 >= a2 )
          v10 = 8LL;
        else
          v10 = 3LL;
        break;
      case 8LL:
        return v7;
      default:
        continue;
    }
  }
}
