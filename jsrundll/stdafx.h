// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���̃C���N���[�h �t�@�C���A�܂���
// �Q�Ɖ񐔂������A�����܂�ύX����Ȃ��A�v���W�F�N�g��p�̃C���N���[�h �t�@�C��
// ���L�q���܂��B
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Windows �w�b�_�[����g�p����Ă��Ȃ����������O���܂��B
// Windows �w�b�_�[ �t�@�C��:
#include <windows.h>

#define DLLEXPORT     extern "C" __declspec( dllexport )

#define __Script_Debug__				// speed��1/3�ɂȂ�

#pragma warning(disable: 4482 )
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // �ꕔ�� CString �R���X�g���N�^�[�͖����I�ł��B

#include <atlbase.h>
#include <atlstr.h>
#include <atlcom.h>
#include <atlenc.h>

#include <ActivScp.h>
#include <string>
#include <map>
#include <vector>
#include <wincrypt.h>
#include <memory>

#ifdef __Script_Debug__
#include <ActivDbg.h>
#endif

