__int64 __fastcall positionBoat(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+1Ah] [rbp-36h] BYREF
  char v4; // [rsp+1Bh] [rbp-35h] BYREF
  unsigned int v5; // [rsp+1Ch] [rbp-34h] BYREF
  int v6; // [rsp+20h] [rbp-30h]
  int mm; // [rsp+24h] [rbp-2Ch]
  int ll; // [rsp+28h] [rbp-28h]
  int kk; // [rsp+2Ch] [rbp-24h]
  int jj; // [rsp+30h] [rbp-20h]
  int ii; // [rsp+34h] [rbp-1Ch]
  int n; // [rsp+38h] [rbp-18h]
  int m; // [rsp+3Ch] [rbp-14h]
  int l; // [rsp+40h] [rbp-10h]
  int k; // [rsp+44h] [rbp-Ch]
  int j; // [rsp+48h] [rbp-8h]
  int i; // [rsp+4Ch] [rbp-4h]

  if ( a2 == 1 )
  {
    __isoc99_scanf("%d %c", &v5, &v4);
    while ( (unsigned int)validEntryLineColumn(v5, (unsigned int)v4) != 1
         || (unsigned int)validatePosition(a1, 1LL, v5 - 1, (unsigned int)(v4 - 65), 72LL) != 1 )
    {
      puts("Position unavailable!");
      __isoc99_scanf("%d %c", &v5, &v4);
    }
  }
  else
  {
    __isoc99_scanf("%d %c %c", &v5, &v4, &v3);
    while ( !(unsigned int)validEntryLineColumn(v5, (unsigned int)v4)
         || !(unsigned int)validatePosition(a1, a2, v5 - 1, (unsigned int)(v4 - 65), (unsigned int)(char)v3) )
    {
      puts("Position unavailable!");
      __isoc99_scanf("%d %c %c", &v5, &v4, &v3);
    }
  }
  v6 = v4 - 65;
  --v5;
  if ( a2 == 1 )
  {
    for ( i = v6; i < v6 + 1; ++i )
      *(_DWORD *)(40LL * (int)v5 + a1 + 4LL * i) = 1;
    for ( j = v5 - 1; j <= (int)(v5 + 1); ++j )
    {
      for ( k = v6 - 1; k <= v6 + 1; ++k )
      {
        if ( j >= 0 && j <= 9 && k >= 0 && k <= 9 && *(_DWORD *)(a1 + 40LL * j + 4LL * k) != 1 )
          *(_DWORD *)(a1 + 40LL * j + 4LL * k) = -1;
      }
    }
  }
  if ( v3 == 72 )
  {
    for ( i = v6; i < (int)(v6 + a2); ++i )
      *(_DWORD *)(40LL * (int)v5 + a1 + 4LL * i) = a2;
    if ( a2 == 3 )
    {
      for ( l = v5 - 1; l < (int)(v5 + 2); ++l )
      {
        for ( m = v6 - 1; m <= v6 + 3; ++m )
        {
          if ( l >= 0 && l <= 9 && m >= 0 && m <= 9 && *(_DWORD *)(a1 + 40LL * l + 4LL * m) != 3 )
            *(_DWORD *)(a1 + 40LL * l + 4LL * m) = -1;
        }
      }
    }
    else
    {
      for ( n = v5 - 1; n < (int)(v5 + a2); ++n )
      {
        for ( ii = v6 - 1; ii <= (int)(v6 + a2); ++ii )
        {
          if ( n >= 0 && n <= 9 && ii >= 0 && ii <= 9 && a2 != *(_DWORD *)(a1 + 40LL * n + 4LL * ii) )
            *(_DWORD *)(a1 + 40LL * n + 4LL * ii) = -1;
        }
      }
    }
  }
  result = v3;
  if ( v3 == 86 )
  {
    for ( i = v5; i < (int)(v5 + a2); ++i )
      *(_DWORD *)(40LL * i + a1 + 4LL * v6) = a2;
    if ( a2 == 3 )
    {
      for ( jj = v5 - 1; ; ++jj )
      {
        result = v5 + 3;
        if ( jj > (int)result )
          break;
        for ( kk = v6 - 1; kk < v6 + 2; ++kk )
        {
          if ( jj >= 0 && jj <= 9 && kk >= 0 && kk <= 9 && *(_DWORD *)(a1 + 40LL * jj + 4LL * kk) != 3 )
            *(_DWORD *)(a1 + 40LL * jj + 4LL * kk) = -1;
        }
      }
    }
    else
    {
      for ( ll = v5 - 1; ; ++ll )
      {
        result = v5 + a2;
        if ( ll > (int)result )
          break;
        for ( mm = v6 - 1; mm < (int)(v6 + a2); ++mm )
        {
          if ( ll >= 0 && ll <= 9 && mm >= 0 && mm <= 9 && a2 != *(_DWORD *)(a1 + 40LL * ll + 4LL * mm) )
            *(_DWORD *)(a1 + 40LL * ll + 4LL * mm) = -1;
        }
      }
    }
  }
  return result;
}