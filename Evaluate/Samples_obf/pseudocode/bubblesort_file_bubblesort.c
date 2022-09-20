__int64 __fastcall bubblesort(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // [rsp+18h] [rbp-14h]
  int v4; // [rsp+1Ch] [rbp-10h]
  int v5; // [rsp+20h] [rbp-Ch]
  __int64 v6; // [rsp+24h] [rbp-8h]

  v6 = 5LL;
  while ( 1 )
  {
    result = v6;
    switch ( v6 )
    {
      case 0LL:
        return result;
      case 1LL:
        ++v4;
        v6 = 3LL;
        break;
      case 2LL:
        ++v3;
        v6 = 4LL;
        break;
      case 3LL:
        if ( v4 >= a2 - 1 )
          v6 = 2LL;
        else
          v6 = 7LL;
        break;
      case 4LL:
        if ( v3 >= a2 )
          v6 = 0LL;
        else
          v6 = 11LL;
        break;
      case 5LL:
        v3 = 1;
        v6 = 4LL;
        break;
      case 7LL:
        if ( *(_DWORD *)(4LL * v4 + a1) <= *(_DWORD *)(4 * (v4 + 1LL) + a1) )
          v6 = 1LL;
        else
          v6 = 12LL;
        break;
      case 11LL:
        v4 = 0;
        v6 = 3LL;
        break;
      case 12LL:
        v5 = *(_DWORD *)(4LL * v4 + a1);
        *(_DWORD *)(4LL * v4 + a1) = *(_DWORD *)(4 * (v4 + 1LL) + a1);
        *(_DWORD *)(a1 + 4 * (v4 + 1LL)) = v5;
        v6 = 1LL;
        break;
      default:
        continue;
    }
  }
}
