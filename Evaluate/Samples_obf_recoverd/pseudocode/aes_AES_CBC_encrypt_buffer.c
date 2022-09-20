__int64 __fastcall AES_CBC_encrypt_buffer(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 *v7; // [rsp+30h] [rbp-10h]
  unsigned __int64 i; // [rsp+38h] [rbp-8h]

  v7 = (__int64 *)(a1 + 176);
  for ( i = 0LL; i < a3; i += 16LL )
  {
    XorWithIv(a2, v7);
    Cipher(a2, a1);
    v7 = (__int64 *)a2;
    a2 += 16LL;
  }
  v3 = v7[1];
  result = *v7;
  *(_QWORD *)(a1 + 176) = *v7;
  *(_QWORD *)(a1 + 184) = v3;
  return result;
}
