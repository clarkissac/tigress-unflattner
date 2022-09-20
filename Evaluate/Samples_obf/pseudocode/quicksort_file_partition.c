__int64 __fastcall partition(__int64 a1, int a2, int a3)
{
  int v5; // [rsp+1Ch] [rbp-14h]
  int v6; // [rsp+20h] [rbp-10h]
  int v7; // [rsp+24h] [rbp-Ch]
  __int64 v8; // [rsp+28h] [rbp-8h]

  v8 = 7LL;
  while ( 1 )
  {
    switch ( v8 )
    {
      case 0LL:
        swap(4 * (v7 + 1LL) + a1, a1 + 4LL * a3);
        v8 = 3LL;
        break;
      case 1LL:
        ++v6;
        v8 = 6LL;
        break;
      case 3LL:
        return (unsigned int)(v7 + 1);
      case 4LL:
        if ( v5 <= *(_DWORD *)(4LL * v6 + a1) )
          v8 = 1LL;
        else
          v8 = 8LL;
        break;
      case 6LL:
        if ( a3 <= v6 )
          v8 = 0LL;
        else
          v8 = 4LL;
        break;
      case 7LL:
        v5 = *(_DWORD *)(4LL * a3 + a1);
        v7 = a2 - 1;
        v6 = a2;
        v8 = 6LL;
        break;
      case 8LL:
        swap(4LL * ++v7 + a1, a1 + 4LL * v6);
        v8 = 1LL;
        break;
      default:
        continue;
    }
  }
}
