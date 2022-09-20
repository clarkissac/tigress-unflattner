__int64 __fastcall selectionSort(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // [rsp+1Ch] [rbp-14h]
  int v4; // [rsp+20h] [rbp-10h]
  int v5; // [rsp+24h] [rbp-Ch]
  __int64 v6; // [rsp+28h] [rbp-8h]

  v6 = 3LL;
  while ( 1 )
  {
    result = v6;
    switch ( v6 )
    {
      case 0LL:
        if ( *(_DWORD *)(4LL * v4 + a1) >= *(_DWORD *)(4LL * v5 + a1) )
          v6 = 7LL;
        else
          v6 = 1LL;
        break;
      case 1LL:
        v5 = v4;
        v6 = 7LL;
        break;
      case 2LL:
        if ( v3 >= a2 - 1 )
          v6 = 11LL;
        else
          v6 = 5LL;
        break;
      case 3LL:
        v3 = 0;
        v6 = 2LL;
        break;
      case 5LL:
        v5 = v3;
        v4 = v3 + 1;
        v6 = 6LL;
        break;
      case 6LL:
        if ( v4 >= a2 )
          v6 = 9LL;
        else
          v6 = 0LL;
        break;
      case 7LL:
        ++v4;
        v6 = 6LL;
        break;
      case 9LL:
        swap((int *)(4LL * v5 + a1), (int *)(a1 + 4LL * v3++));
        v6 = 2LL;
        break;
      case 11LL:
        return result;
      default:
        continue;
    }
  }
}
