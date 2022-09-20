__int64 __fastcall JSHash(char *a1, unsigned int a2)
{
  unsigned int v4; // [rsp+Ch] [rbp-10h]
  unsigned int v5; // [rsp+10h] [rbp-Ch]
  __int64 v6; // [rsp+14h] [rbp-8h]

  v6 = 2LL;
  while ( 1 )
  {
    while ( v6 == 5 )
    {
      v4 ^= *a1++ + 32 * v4 + (v4 >> 2);
      ++v5;
      v6 = 3LL;
    }
    if ( v6 == 4 )
      break;
    if ( v6 == 2 )
    {
      v4 = 1315423911;
      v5 = 0;
      v6 = 3LL;
    }
    else if ( v5 >= a2 )
    {
      v6 = 4LL;
    }
    else
    {
      v6 = 5LL;
    }
  }
  return v4;
}
