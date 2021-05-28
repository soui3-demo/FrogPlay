// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//  are changed infrequently
//

#pragma once

#include <souistd.h>
#include <core/SHostDialog.h>
#include <control/SMessageBox.h>
#include <control/souictrls.h>
#include <res.mgr/sobjdefattr.h>
#include <com-cfg.h>
#include "resource.h"
#define R_IN_CPP	//定义这个开关来
#include "res\resource.h"
#include <control/SRealWndHandler-i.h>
#include <shobjidl.h>
#include <shlobj.h>
#include "helper/SMenu.h"
#include "helper/SMenuEx.h"
#include<iostream>
#include <helper/STime.h>
#include "tipwnd.h"
using namespace SOUI;

#include "taskbarlist3-i.h"

#define MS_REALWND  WM_USER+100//父子窗口通信
#define MS_REALWND_URLPLAY  WM_USER+102//父子窗口通信 URL播放
#define MS_PLAYING_PATHNAME  WM_USER+101   //通知播放文件
#define MS_ADD_FILESED       WM_USER+103   //增加文件后的通知
#define WM_USER_PLAYING         WM_USER + 1     // 开始播放文件
#define WM_USER_POS_CHANGED     WM_USER + 2     // 文件播放位置改变
#define WM_USER_END_REACHED     WM_USER + 3     // 播放完毕