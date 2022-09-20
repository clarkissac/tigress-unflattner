int *__fastcall swap(int *a1, int *a2)
{
  int *result; // rax
  int v3; // [rsp+1Ch] [rbp-4h]

  v3 = *a1;
  *a1 = *a2;
  result = a2;
  *a2 = v3;
  return result;
}
