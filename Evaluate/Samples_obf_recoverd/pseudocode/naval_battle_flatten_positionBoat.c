__int64 __fastcall positionBoat(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+12h] [rbp-4Eh] BYREF
  char v4; // [rsp+13h] [rbp-4Dh] BYREF
  unsigned int v5; // [rsp+14h] [rbp-4Ch] BYREF
  int mm; // [rsp+20h] [rbp-40h]
  int ll; // [rsp+24h] [rbp-3Ch]
  int kk; // [rsp+28h] [rbp-38h]
  int jj; // [rsp+2Ch] [rbp-34h]
  int ii; // [rsp+30h] [rbp-30h]
  int n; // [rsp+34h] [rbp-2Ch]
  int m; // [rsp+38h] [rbp-28h]
  int l; // [rsp+3Ch] [rbp-24h]
  int k; // [rsp+40h] [rbp-20h]
  int j; // [rsp+44h] [rbp-1Ch]
  int v16; // [rsp+48h] [rbp-18h]
  int v19; // [rsp+54h] [rbp-Ch]
  int v20; // [rsp+58h] [rbp-8h]
  int i; // [rsp+5Ch] [rbp-4h]

  if ( a2 == 1 )
  {
    __isoc99_scanf("%d %c", &v5, &v4);
    while ( 1 )
    {
      v20 = validEntryLineColumn(v5, (unsigned int)v4);
      if ( v20 == 1 )
      {
        v19 = validatePosition(a1, 1LL, v5 - 1, (unsigned int)(v4 - 65), 72LL);
        if ( v19 == 1 )
          break;
      }
      puts("Position unavailable!");
      __isoc99_scanf("%d %c", &v5, &v4);
    }
  }
  else
  {
    __isoc99_scanf("%d %c %c", &v5, &v4, &v3);
    while ( 1 )
    {
      if ( (unsigned int)validEntryLineColumn(v5, (unsigned int)v4) )
      {
        if ( (unsigned int)validatePosition(a1, a2, v5 - 1, (unsigned int)(v4 - 65), (unsigned int)(char)v3) )
          break;
      }
      puts("Position unavailable!");
      __isoc99_scanf("%d %c %c", &v5, &v4, &v3);
    }
  }
  v16 = v4 - 65;
  --v5;
  if ( a2 == 1 )
  {
    for ( i = v16; i < v16 + 1; ++i )
      *(_DWORD *)(40LL * (int)v5 + a1 + 4LL * i) = 1;
    for ( j = v5 - 1; j <= (int)(v5 + 1); ++j )
    {
      for ( k = v16 - 1; k <= v16 + 1; ++k )
      {
        if ( j >= 0 && j <= 9 && k >= 0 && k <= 9 && *(_DWORD *)(a1 + 40LL * j + 4LL * k) != 1 )
          *(_DWORD *)(a1 + 40LL * j + 4LL * k) = -1;
      }
    }
  }
  if ( v3 == 72 )
  {
    for ( i = v16; i < (int)(v16 + a2); ++i )
      *(_DWORD *)(40LL * (int)v5 + a1 + 4LL * i) = a2;
    if ( a2 == 3 )
    {
      for ( l = v5 - 1; l < (int)(v5 + 2); ++l )
      {
        for ( m = v16 - 1; m <= v16 + 3; ++m )
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
        for ( ii = v16 - 1; ii <= (int)(v16 + a2); ++ii )
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
      *(_DWORD *)(40LL * i + a1 + 4LL * v16) = a2;
    if ( a2 == 3 )
    {
      for ( jj = v5 - 1; ; ++jj )
      {
        result = v5 + 3;
        if ( jj > (int)result )
          break;
        for ( kk = v16 - 1; kk < v16 + 2; ++kk )
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
        for ( mm = v16 - 1; mm < (int)(v16 + a2); ++mm )
        {
          if ( ll >= 0 && ll <= 9 && mm >= 0 && mm <= 9 && a2 != *(_DWORD *)(a1 + 40LL * ll + 4LL * mm) )
            *(_DWORD *)(a1 + 40LL * ll + 4LL * mm) = -1;
        }
      }
    }
  }
  return result;
}
