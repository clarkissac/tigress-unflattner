unsigned __int64 __fastcall merge(__int64 a1, int a2, int a3, int a4)
{
  void *v4; // rsp
  void *v5; // rsp
  int v7; // [rsp+Ch] [rbp-64h] BYREF
  int v8; // [rsp+10h] [rbp-60h]
  int v9; // [rsp+14h] [rbp-5Ch]
  __int64 v10; // [rsp+18h] [rbp-58h]
  int i; // [rsp+24h] [rbp-4Ch]
  int j; // [rsp+28h] [rbp-48h]
  int v13; // [rsp+2Ch] [rbp-44h]
  int v14; // [rsp+30h] [rbp-40h]
  int v15; // [rsp+34h] [rbp-3Ch]
  int v16; // [rsp+38h] [rbp-38h]
  int v17; // [rsp+3Ch] [rbp-34h]
  unsigned __int64 v18; // [rsp+40h] [rbp-30h]
  unsigned __int64 v19; // [rsp+48h] [rbp-28h]
  unsigned __int64 v20; // [rsp+58h] [rbp-18h]
  unsigned __int64 v21; // [rsp+60h] [rbp-10h]
  unsigned __int64 v22; // [rsp+68h] [rbp-8h]

  v10 = a1;
  v9 = a2;
  v8 = a3;
  v7 = a4;
  v22 = __readfsqword(0x28u);
  v14 = a3 - a2 + 1;
  v15 = a4 - a3;
  v16 = v14;
  v4 = alloca(16 * ((4 * (unsigned __int64)(unsigned int)v14 + 23) / 0x10));
  v20 = 16 * (((unsigned __int64)&v7 + 3) >> 4);
  v18 = v20;
  v17 = a4 - a3;
  v5 = alloca(16 * ((4 * (unsigned __int64)(unsigned int)(a4 - a3) + 23) / 0x10));
  v21 = v20;
  v19 = v20;
  for ( i = 0; i < v14; ++i )
    *(_DWORD *)(4LL * i + v18) = *(_DWORD *)(4LL * (v9 + i) + v10);
  for ( j = 0; j < v15; ++j )
    *(_DWORD *)(4LL * j + v19) = *(_DWORD *)(4LL * (v8 + 1 + j) + v10);
  i = 0;
  j = 0;
  v13 = v9;
  while ( i < v14 && j < v15 )
  {
    if ( *(_DWORD *)(4LL * i + v18) <= *(_DWORD *)(4LL * j + v19) )
      *(_DWORD *)(4LL * v13 + v10) = *(_DWORD *)(4LL * i++ + v18);
    else
      *(_DWORD *)(4LL * v13 + v10) = *(_DWORD *)(4LL * j++ + v19);
    ++v13;
  }
  while ( i < v14 )
    *(_DWORD *)(4LL * v13++ + v10) = *(_DWORD *)(4LL * i++ + v18);
  while ( j < v15 )
    *(_DWORD *)(4LL * v13++ + v10) = *(_DWORD *)(4LL * j++ + v19);
  return v22 - __readfsqword(0x28u);
}
