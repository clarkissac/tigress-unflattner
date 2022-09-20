__int64 __fastcall AES_CBC_encrypt_buffer(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v7; // [rsp+28h] [rbp-18h]
  _QWORD *v8; // [rsp+30h] [rbp-10h]
  unsigned __int64 v9; // [rsp+38h] [rbp-8h]

  v7 = 6LL;
  while ( 1 )
  {
    result = v7;
    switch ( v7 )
    {
      case 0LL:
        if ( v9 >= a3 )
          v7 = 3LL;
        else
          v7 = 4LL;
        break;
      case 2LL:
        return result;
      case 3LL:
        v4 = v8[1];
        *(_QWORD *)(a1 + 176) = *v8;
        *(_QWORD *)(a1 + 184) = v4;
        v7 = 2LL;
        break;
      case 4LL:
        XorWithIv(a2, v8);
        Cipher(a2, a1);
        v8 = (_QWORD *)a2;
        a2 += 16LL;
        v9 += 16LL;
        v7 = 0LL;
        break;
      case 6LL:
        v8 = (_QWORD *)(a1 + 176);
        v9 = 0LL;
        v7 = 0LL;
        break;
      default:
        continue;
    }
  }
}
