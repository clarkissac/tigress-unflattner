__int64 __fastcall positionBoat(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  char v3; // [rsp+12h] [rbp-4Eh] BYREF
  char v4; // [rsp+13h] [rbp-4Dh] BYREF
  unsigned int v5; // [rsp+14h] [rbp-4Ch] BYREF
  __int64 v6; // [rsp+18h] [rbp-48h]
  int v7; // [rsp+20h] [rbp-40h]
  int v8; // [rsp+24h] [rbp-3Ch]
  int v9; // [rsp+28h] [rbp-38h]
  int v10; // [rsp+2Ch] [rbp-34h]
  int v11; // [rsp+30h] [rbp-30h]
  int v12; // [rsp+34h] [rbp-2Ch]
  int v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+3Ch] [rbp-24h]
  int v15; // [rsp+40h] [rbp-20h]
  int v16; // [rsp+44h] [rbp-1Ch]
  int v17; // [rsp+48h] [rbp-18h]
  int v18; // [rsp+4Ch] [rbp-14h]
  int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]
  int v21; // [rsp+58h] [rbp-8h]
  int v22; // [rsp+5Ch] [rbp-4h]

  v6 = 18LL;
  while ( 1 )
  {
    result = v6;
    switch ( v6 )
    {
      case 1LL:
        v8 = v5 - 1;
        v6 = 101LL;
        break;
      case 2LL:
        v21 = validEntryLineColumn(v5, (unsigned int)v4);
        v6 = 94LL;
        break;
      case 3LL:
        if ( v8 > 9 )
          v6 = 108LL;
        else
          v6 = 87LL;
        break;
      case 4LL:
        *(_DWORD *)(40LL * v22++ + a1 + 4LL * v17) = a2;
        v6 = 26LL;
        break;
      case 5LL:
        v18 = validatePosition(a1, a2, v5 - 1, (unsigned int)(v4 - 65), (unsigned int)v3);
        v6 = 84LL;
        break;
      case 6LL:
        if ( v15 > 9 )
          v6 = 57LL;
        else
          v6 = 40LL;
        break;
      case 7LL:
        return result;
      case 9LL:
        *(_DWORD *)(40LL * (int)v5 + a1 + 4LL * v22++) = a2;
        v6 = 117LL;
        break;
      case 11LL:
        *(_DWORD *)(a1 + 40LL * v14 + 4LL * v13) = -1;
        v6 = 82LL;
        break;
      case 12LL:
        if ( v9 >= (int)(v17 + a2 - 1) )
          v6 = 76LL;
        else
          v6 = 118LL;
        break;
      case 14LL:
        __isoc99_scanf("%d %c", &v5, &v4);
        v6 = 2LL;
        break;
      case 16LL:
        if ( v19 )
          v6 = 5LL;
        else
          v6 = 107LL;
        break;
      case 17LL:
        if ( v8 < 0 )
          v6 = 108LL;
        else
          v6 = 3LL;
        break;
      case 18LL:
        if ( a2 == 1 )
          v6 = 14LL;
        else
          v6 = 20LL;
        break;
      case 19LL:
        if ( v16 < 0 )
          v6 = 57LL;
        else
          v6 = 28LL;
        break;
      case 20LL:
        __isoc99_scanf("%d %c %c", &v5, &v4, &v3);
        v6 = 102LL;
        break;
      case 21LL:
        *(_DWORD *)(a1 + 40LL * v16 + 4LL * v15) = -1;
        v6 = 57LL;
        break;
      case 24LL:
        if ( v20 == 1 )
          v6 = 77LL;
        else
          v6 = 36LL;
        break;
      case 25LL:
        if ( v3 == 72 )
          v6 = 89LL;
        else
          v6 = 38LL;
        break;
      case 26LL:
        if ( v22 >= (int)(v5 + a2) )
          v6 = 104LL;
        else
          v6 = 4LL;
        break;
      case 27LL:
        if ( v9 < 0 )
          v6 = 109LL;
        else
          v6 = 100LL;
        break;
      case 28LL:
        if ( v16 > 9 )
          v6 = 57LL;
        else
          v6 = 93LL;
        break;
      case 29LL:
        if ( v13 > (int)(v17 + a2) )
          v6 = 98LL;
        else
          v6 = 62LL;
        break;
      case 31LL:
        v20 = validatePosition(a1, a2, v5 - 1, (unsigned int)(v4 - 65), 72LL);
        v6 = 24LL;
        break;
      case 32LL:
        if ( v15 > (int)(v17 + a2) )
          v6 = 56LL;
        else
          v6 = 19LL;
        break;
      case 36LL:
        puts("Position unavailable!");
        __isoc99_scanf("%d %c", &v5, &v4);
        v6 = 2LL;
        break;
      case 38LL:
        if ( v3 == 86 )
          v6 = 55LL;
        else
          v6 = 7LL;
        break;
      case 39LL:
        if ( v7 > 9 )
          v6 = 108LL;
        else
          v6 = 51LL;
        break;
      case 40LL:
        if ( a2 == *(_DWORD *)(a1 + 40LL * v16 + 4LL * v15) )
          v6 = 57LL;
        else
          v6 = 21LL;
        break;
      case 42LL:
        v13 = v17 - 1;
        v6 = 29LL;
        break;
      case 44LL:
        v7 = v17 - 1;
        v6 = 105LL;
        break;
      case 45LL:
        if ( v22 >= (int)(v17 + a2) )
          v6 = 92LL;
        else
          v6 = 90LL;
        break;
      case 46LL:
        v22 = v17;
        v6 = 117LL;
        break;
      case 47LL:
        ++v12;
        v6 = 64LL;
        break;
      case 48LL:
        *(_DWORD *)(a1 + 40LL * v10 + 4LL * v9) = -1;
        v6 = 109LL;
        break;
      case 50LL:
        if ( v11 < 0 )
          v6 = 106LL;
        else
          v6 = 59LL;
        break;
      case 51LL:
        if ( a2 == *(_DWORD *)(a1 + 40LL * v8 + 4LL * v7) )
          v6 = 108LL;
        else
          v6 = 67LL;
        break;
      case 52LL:
        v9 = v17 - 1;
        v6 = 12LL;
        break;
      case 53LL:
        if ( v12 < 0 )
          v6 = 106LL;
        else
          v6 = 68LL;
        break;
      case 55LL:
        v22 = v5;
        v6 = 26LL;
        break;
      case 56LL:
        ++v16;
        v6 = 110LL;
        break;
      case 57LL:
        ++v15;
        v6 = 32LL;
        break;
      case 59LL:
        if ( v11 > 9 )
          v6 = 106LL;
        else
          v6 = 88LL;
        break;
      case 60LL:
        if ( a2 == *(_DWORD *)(a1 + 40LL * v10 + 4LL * v9) )
          v6 = 109LL;
        else
          v6 = 48LL;
        break;
      case 61LL:
        v14 = v5 - 1;
        v6 = 73LL;
        break;
      case 62LL:
        if ( v14 < 0 )
          v6 = 82LL;
        else
          v6 = 85LL;
        break;
      case 64LL:
        if ( v12 >= (int)(v5 + a2) )
          v6 = 38LL;
        else
          v6 = 97LL;
        break;
      case 66LL:
        if ( v10 > (int)(v5 + a2) )
          v6 = 7LL;
        else
          v6 = 52LL;
        break;
      case 67LL:
        *(_DWORD *)(a1 + 40LL * v8 + 4LL * v7) = -1;
        v6 = 108LL;
        break;
      case 68LL:
        if ( v12 > 9 )
          v6 = 106LL;
        else
          v6 = 50LL;
        break;
      case 69LL:
        ++v8;
        v6 = 101LL;
        break;
      case 70LL:
        *(_DWORD *)(a1 + 40LL * v12 + 4LL * v11) = -1;
        v6 = 106LL;
        break;
      case 72LL:
        if ( v10 > 9 )
          v6 = 109LL;
        else
          v6 = 27LL;
        break;
      case 73LL:
        if ( v14 >= (int)(v5 + a2 - 1) )
          v6 = 38LL;
        else
          v6 = 42LL;
        break;
      case 74LL:
        if ( v11 > (int)(v17 + a2) )
          v6 = 47LL;
        else
          v6 = 53LL;
        break;
      case 76LL:
        ++v10;
        v6 = 66LL;
        break;
      case 77LL:
        v17 = v4 - 65;
        --v5;
        v6 = 116LL;
        break;
      case 79LL:
        v15 = v17 - 1;
        v6 = 32LL;
        break;
      case 81LL:
        if ( a2 == *(_DWORD *)(a1 + 40LL * v14 + 4LL * v13) )
          v6 = 82LL;
        else
          v6 = 11LL;
        break;
      case 82LL:
        ++v13;
        v6 = 29LL;
        break;
      case 83LL:
        v10 = v5 - 1;
        v6 = 66LL;
        break;
      case 84LL:
        if ( v18 )
          v6 = 77LL;
        else
          v6 = 107LL;
        break;
      case 85LL:
        if ( v14 > 9 )
          v6 = 82LL;
        else
          v6 = 111LL;
        break;
      case 87LL:
        if ( v7 < 0 )
          v6 = 108LL;
        else
          v6 = 39LL;
        break;
      case 88LL:
        if ( a2 == *(_DWORD *)(a1 + 40LL * v12 + 4LL * v11) )
          v6 = 106LL;
        else
          v6 = 70LL;
        break;
      case 89LL:
        v22 = v17;
        v6 = 45LL;
        break;
      case 90LL:
        *(_DWORD *)(40LL * (int)v5 + a1 + 4LL * v22++) = a2;
        v6 = 45LL;
        break;
      case 91LL:
        v16 = v5 - 1;
        v6 = 110LL;
        break;
      case 92LL:
        if ( a2 == 3 )
          v6 = 61LL;
        else
          v6 = 115LL;
        break;
      case 93LL:
        if ( v15 < 0 )
          v6 = 57LL;
        else
          v6 = 6LL;
        break;
      case 94LL:
        if ( v21 == 1 )
          v6 = 31LL;
        else
          v6 = 36LL;
        break;
      case 97LL:
        v11 = v17 - 1;
        v6 = 74LL;
        break;
      case 98LL:
        ++v14;
        v6 = 73LL;
        break;
      case 100LL:
        if ( v9 > 9 )
          v6 = 109LL;
        else
          v6 = 60LL;
        break;
      case 101LL:
        if ( v8 > (int)(v5 + a2) )
          v6 = 7LL;
        else
          v6 = 44LL;
        break;
      case 102LL:
        v19 = validEntryLineColumn(v5, (unsigned int)v4);
        v6 = 16LL;
        break;
      case 104LL:
        if ( a2 == 3 )
          v6 = 83LL;
        else
          v6 = 1LL;
        break;
      case 105LL:
        if ( v7 >= (int)(v17 + a2) )
          v6 = 69LL;
        else
          v6 = 17LL;
        break;
      case 106LL:
        ++v11;
        v6 = 74LL;
        break;
      case 107LL:
        puts("Position unavailable!");
        __isoc99_scanf("%d %c %c", &v5, &v4, &v3);
        v6 = 102LL;
        break;
      case 108LL:
        ++v7;
        v6 = 105LL;
        break;
      case 109LL:
        ++v9;
        v6 = 12LL;
        break;
      case 110LL:
        if ( v16 > (int)(v5 + a2) )
          v6 = 25LL;
        else
          v6 = 79LL;
        break;
      case 111LL:
        if ( v13 < 0 )
          v6 = 82LL;
        else
          v6 = 114LL;
        break;
      case 114LL:
        if ( v13 > 9 )
          v6 = 82LL;
        else
          v6 = 81LL;
        break;
      case 115LL:
        v12 = v5 - 1;
        v6 = 64LL;
        break;
      case 116LL:
        if ( a2 == 1 )
          v6 = 46LL;
        else
          v6 = 25LL;
        break;
      case 117LL:
        if ( v22 >= (int)(v17 + a2) )
          v6 = 91LL;
        else
          v6 = 9LL;
        break;
      case 118LL:
        if ( v10 < 0 )
          v6 = 109LL;
        else
          v6 = 72LL;
        break;
      default:
        continue;
    }
  }
}
