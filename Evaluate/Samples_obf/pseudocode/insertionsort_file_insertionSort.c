__int64 __fastcall insertionSort(__int64 a1, int a2)
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
        *(_DWORD *)(4 * (v5 + 1LL) + a1) = *(_DWORD *)(4LL * v5 + a1);
        --v5;
        v6 = 3LL;
        break;
      case 2LL:
        *(_DWORD *)(a1 + 4 * (v5 + 1LL)) = v4;
        ++v3;
        v6 = 4LL;
        break;
      case 3LL:
        if ( v5 < 0 )
          v6 = 2LL;
        else
          v6 = 10LL;
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
      case 10LL:
        if ( v4 >= *(_DWORD *)(4LL * v5 + a1) )
          v6 = 2LL;
        else
          v6 = 1LL;
        break;
      case 11LL:
        v4 = *(_DWORD *)(4LL * v3 + a1);
        v5 = v3 - 1;
        v6 = 3LL;
        break;
      default:
        continue;
    }
  }
}
