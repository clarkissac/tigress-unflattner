unsigned __int64 __fastcall merge(__int64 a1, int a2, int a3, int a4)
{
  void *v4; // rsp
  void *v5; // rsp
  _BYTE v7[13]; // [rsp+3h] [rbp-7Dh] BYREF
  int v8; // [rsp+10h] [rbp-70h]
  int v9; // [rsp+14h] [rbp-6Ch]
  __int64 v10; // [rsp+18h] [rbp-68h]
  int i; // [rsp+24h] [rbp-5Ch]
  int j; // [rsp+28h] [rbp-58h]
  int v13; // [rsp+2Ch] [rbp-54h]
  int v14; // [rsp+30h] [rbp-50h]
  int v15; // [rsp+34h] [rbp-4Ch]
  __int64 v16; // [rsp+38h] [rbp-48h]
  unsigned __int64 v17; // [rsp+40h] [rbp-40h]
  __int64 v18; // [rsp+48h] [rbp-38h]
  unsigned __int64 v19; // [rsp+50h] [rbp-30h]
  unsigned __int64 v20; // [rsp+58h] [rbp-28h]

  v10 = a1;
  v9 = a2;
  v8 = a3;
  *(_DWORD *)&v7[9] = a4;
  v20 = __readfsqword(0x28u);
  v14 = a3 - a2 + 1;
  v15 = a4 - a3;
  v16 = v14 - 1LL;
  v4 = alloca(16 * ((4LL * v14 + 15) / 0x10uLL));
  v17 = 4 * ((unsigned __int64)v7 >> 2);
  v18 = a4 - a3 - 1LL;
  v5 = alloca(16 * ((4LL * (a4 - a3) + 15) / 0x10uLL));
  v19 = v17;
  for ( i = 0; i < v14; ++i )
    *(_DWORD *)(v17 + 4LL * i) = *(_DWORD *)(4LL * (v9 + i) + v10);
  for ( j = 0; j < v15; ++j )
    *(_DWORD *)(v19 + 4LL * j) = *(_DWORD *)(4LL * (v8 + 1 + j) + v10);
  i = 0;
  j = 0;
  v13 = v9;
  while ( i < v14 && j < v15 )
  {
    if ( *(_DWORD *)(v17 + 4LL * i) > *(_DWORD *)(v19 + 4LL * j) )
      *(_DWORD *)(4LL * v13 + v10) = *(_DWORD *)(v19 + 4LL * j++);
    else
      *(_DWORD *)(4LL * v13 + v10) = *(_DWORD *)(v17 + 4LL * i++);
    ++v13;
  }
  while ( i < v14 )
    *(_DWORD *)(4LL * v13++ + v10) = *(_DWORD *)(v17 + 4LL * i++);
  while ( j < v15 )
    *(_DWORD *)(4LL * v13++ + v10) = *(_DWORD *)(v19 + 4LL * j++);
  return v20 - __readfsqword(0x28u);
}
