unsigned __int64 __fastcall merge(__int64 a1, int a2, int a3, int a4)
{
  void *v4; // rsp
  void *v5; // rsp
  int v7; // [rsp+Ch] [rbp-64h] BYREF
  int v8; // [rsp+10h] [rbp-60h]
  int v9; // [rsp+14h] [rbp-5Ch]
  __int64 v10; // [rsp+18h] [rbp-58h]
  int v11; // [rsp+24h] [rbp-4Ch]
  int v12; // [rsp+28h] [rbp-48h]
  int v13; // [rsp+2Ch] [rbp-44h]
  int v14; // [rsp+30h] [rbp-40h]
  int v15; // [rsp+34h] [rbp-3Ch]
  int v16; // [rsp+38h] [rbp-38h]
  int v17; // [rsp+3Ch] [rbp-34h]
  unsigned __int64 v18; // [rsp+40h] [rbp-30h]
  unsigned __int64 v19; // [rsp+48h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp-20h]
  unsigned __int64 v21; // [rsp+58h] [rbp-18h]
  unsigned __int64 v22; // [rsp+60h] [rbp-10h]
  unsigned __int64 v23; // [rsp+68h] [rbp-8h]

  v10 = a1;
  v9 = a2;
  v8 = a3;
  v7 = a4;
  v23 = __readfsqword(0x28u);
  v20 = 19LL;
  while ( 1 )
  {
    switch ( v20 )
    {
      case 1LL:
        if ( v11 >= v14 )
          v20 = 13LL;
        else
          v20 = 6LL;
        break;
      case 3LL:
        if ( v12 >= v15 )
          v20 = 18LL;
        else
          v20 = 10LL;
        break;
      case 6LL:
        *(_DWORD *)(4LL * v11 + v18) = *(_DWORD *)(4LL * (v9 + v11) + v10);
        ++v11;
        v20 = 1LL;
        break;
      case 8LL:
        *(_DWORD *)(4LL * v13 + v10) = *(_DWORD *)(4LL * v11++ + v18);
        v20 = 25LL;
        break;
      case 10LL:
        if ( *(_DWORD *)(4LL * v11 + v18) > *(_DWORD *)(4LL * v12 + v19) )
          v20 = 15LL;
        else
          v20 = 8LL;
        break;
      case 12LL:
        if ( v12 >= v15 )
          v20 = 24LL;
        else
          v20 = 22LL;
        break;
      case 13LL:
        v12 = 0;
        v20 = 12LL;
        break;
      case 15LL:
        *(_DWORD *)(4LL * v13 + v10) = *(_DWORD *)(4LL * v12++ + v19);
        v20 = 25LL;
        break;
      case 16LL:
        *(_DWORD *)(4LL * v13++ + v10) = *(_DWORD *)(4LL * v12++ + v19);
        v20 = 23LL;
        break;
      case 17LL:
        *(_DWORD *)(4LL * v13++ + v10) = *(_DWORD *)(4LL * v11++ + v18);
        v20 = 18LL;
        break;
      case 18LL:
        if ( v11 >= v14 )
          v20 = 23LL;
        else
          v20 = 17LL;
        break;
      case 19LL:
        v14 = v8 - v9 + 1;
        v15 = v7 - v8;
        v16 = v14;
        v4 = alloca(16 * ((4 * (unsigned __int64)(unsigned int)v14 + 23) / 0x10));
        v21 = 16 * (((unsigned __int64)&v7 + 3) >> 4);
        v18 = v21;
        v17 = v7 - v8;
        v5 = alloca(16 * ((4 * (unsigned __int64)(unsigned int)(v7 - v8) + 23) / 0x10));
        v22 = v21;
        v19 = v21;
        v11 = 0;
        v20 = 1LL;
        break;
      case 20LL:
        return v23 - __readfsqword(0x28u);
      case 22LL:
        *(_DWORD *)(4LL * v12 + v19) = *(_DWORD *)(4LL * (v8 + 1 + v12) + v10);
        ++v12;
        v20 = 12LL;
        break;
      case 23LL:
        if ( v12 >= v15 )
          v20 = 20LL;
        else
          v20 = 16LL;
        break;
      case 24LL:
        v11 = 0;
        v12 = 0;
        v13 = v9;
        v20 = 26LL;
        break;
      case 25LL:
        ++v13;
        v20 = 26LL;
        break;
      case 26LL:
        if ( v11 >= v14 )
          v20 = 18LL;
        else
          v20 = 3LL;
        break;
      default:
        continue;
    }
  }
}
