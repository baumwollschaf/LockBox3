﻿// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'LockBox3FMXDD.dpk' rev: 30.00 (Windows)

#ifndef Lockbox3fmxddHPP
#define Lockbox3fmxddHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// (rtl)
#include <SysInit.hpp>
#include <FMX.uTPLb_InfoUtils.hpp>
#include <FMX.uTPLb_ComponentEditors.hpp>
#include <FMX.uTPLb_ComponentAbout.hpp>
#include <FMX.uTPLb_ComponentRegistration.hpp>
#include <Winapi.Windows.hpp>	// (rtl)
#include <System.Character.hpp>	// (rtl)
#include <System.Internal.ExcUtils.hpp>	// (rtl)
#include <System.SysUtils.hpp>	// (rtl)
#include <System.VarUtils.hpp>	// (rtl)
#include <System.Variants.hpp>	// (rtl)
#include <System.AnsiStrings.hpp>	// (rtl)
#include <System.Math.hpp>	// (rtl)
#include <System.Generics.Defaults.hpp>	// (rtl)
#include <System.Rtti.hpp>	// (rtl)
#include <System.TypInfo.hpp>	// (rtl)
#include <System.Classes.hpp>	// (rtl)
#include <System.TimeSpan.hpp>	// (rtl)
#include <System.DateUtils.hpp>	// (rtl)
#include <System.IOUtils.hpp>	// (rtl)
#include <System.Win.Registry.hpp>	// (rtl)
#include <Vcl.Graphics.hpp>	// (vcl)
#include <System.Actions.hpp>	// (rtl)
#include <Vcl.ActnList.hpp>	// (vcl)
#include <System.HelpIntfs.hpp>	// (rtl)
#include <System.SyncObjs.hpp>	// (rtl)
#include <Winapi.UxTheme.hpp>	// (rtl)
#include <Vcl.GraphUtil.hpp>	// (vcl)
#include <Vcl.StdCtrls.hpp>	// (vcl)
#include <Winapi.ShellAPI.hpp>	// (rtl)
#include <Vcl.Printers.hpp>	// (vcl)
#include <Vcl.Clipbrd.hpp>	// (vcl)
#include <Vcl.ComCtrls.hpp>	// (vcl)
#include <Vcl.Dialogs.hpp>	// (vcl)
#include <Vcl.ExtCtrls.hpp>	// (vcl)
#include <Vcl.Themes.hpp>	// (vcl)
#include <System.Win.ComObj.hpp>	// (rtl)
#include <Winapi.FlatSB.hpp>	// (rtl)
#include <Vcl.Forms.hpp>	// (vcl)
#include <Vcl.Menus.hpp>	// (vcl)
#include <Winapi.MsCTF.hpp>	// (rtl)
#include <Vcl.Controls.hpp>	// (vcl)
#include <IDEMessages.hpp>	// (designide)
#include <Vcl.CaptionedDockTree.hpp>	// (vcl)
#include <Vcl.DockTabSet.hpp>	// (vcl)
#include <PercentageDockTree.hpp>	// (designide)
#include <BrandingAPI.hpp>	// (designide)
#include <Vcl.Buttons.hpp>	// (vcl)
#include <Vcl.ExtDlgs.hpp>	// (vcl)
#include <Winapi.Mapi.hpp>	// (rtl)
#include <Vcl.ExtActns.hpp>	// (vcl)
#include <Vcl.ActnMenus.hpp>	// (vclactnband)
#include <Vcl.ActnMan.hpp>	// (vclactnband)
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>	// (vclactnband)
#include <BaseDock.hpp>	// (designide)
#include <DeskUtil.hpp>	// (designide)
#include <DeskForm.hpp>	// (designide)
#include <DockForm.hpp>	// (designide)
#include <Xml.Win.msxmldom.hpp>	// (xmlrtl)
#include <Xml.xmldom.hpp>	// (xmlrtl)
#include <ToolsAPI.hpp>	// (designide)
#include <Proxies.hpp>	// (designide)
#include <DesignEditors.hpp>	// (designide)
#include <uTPLb_Random.hpp>	// (LockBox3DR)
#include <uTPLb_StreamUtils.hpp>	// (LockBox3DR)
#include <uTPLb_AES.hpp>	// (LockBox3DR)
#include <uTPLb_HugeCardinal.hpp>	// (LockBox3DR)
#include <uTPLb_RSA_Primitives.hpp>	// (LockBox3DR)
#include <uTPLb_HugeCardinalUtils.hpp>	// (LockBox3DR)
#include <uTPLb_TwoFish.hpp>	// (LockBox3DR)
#include <Data.SqlTimSt.hpp>	// (dbrtl)
#include <Data.FmtBcd.hpp>	// (dbrtl)
#include <Data.DB.hpp>	// (dbrtl)
#include <System.Messaging.hpp>	// (rtl)
#include <System.Devices.hpp>	// (rtl)
#include <FMX.TextLayout.hpp>	// (fmx)
#include <FMX.Utils.hpp>	// (fmx)
#include <FMX.Graphics.hpp>	// (fmx)
#include <FMX.BehaviorManager.hpp>	// (fmx)
#include <FMX.Styles.hpp>	// (fmx)
#include <FMX.Types3D.hpp>	// (fmx)
#include <FMX.Filter.hpp>	// (fmx)
#include <FMX.Filter.Custom.hpp>	// (fmx)
#include <FMX.Effects.hpp>	// (fmx)
#include <FMX.MultiResBitmap.hpp>	// (fmx)
#include <FMX.Ani.hpp>	// (fmx)
#include <FMX.Objects.hpp>	// (fmx)
#include <FMX.Dialogs.hpp>	// (fmx)
#include <FMX.ImgList.hpp>	// (fmx)
#include <FMX.Menus.hpp>	// (fmx)
#include <FMX.Helpers.Win.hpp>	// (fmx)
#include <Winapi.GDIPOBJ.hpp>	// (rtl)
#include <FMX.Canvas.GDIP.hpp>	// (fmx)
#include <FMX.Printer.hpp>	// (fmx)
#include <FMX.Presentation.Factory.hpp>	// (fmx)
#include <FMX.Controls.Win.hpp>	// (fmx)
#include <FMX.Presentation.Win.hpp>	// (fmx)
#include <FMX.Presentation.Win.Style.hpp>	// (fmx)
#include <FMX.Controls.Presentation.hpp>	// (fmx)
#include <FMX.Styles.Objects.hpp>	// (fmx)
#include <FMX.Styles.Switch.hpp>	// (fmx)
#include <FMX.Switch.Style.hpp>	// (fmx)
#include <FMX.Switch.Win.hpp>	// (fmx)
#include <FMX.StdCtrls.hpp>	// (fmx)
#include <FMX.InertialMovement.hpp>	// (fmx)
#include <FMX.Layouts.hpp>	// (fmx)
#include <FMX.MagnifierGlass.hpp>	// (fmx)
#include <FMX.Edit.Style.hpp>	// (fmx)
#include <FMX.Edit.Win.hpp>	// (fmx)
#include <FMX.Edit.hpp>	// (fmx)
#include <FMX.Dialogs.Win.hpp>	// (fmx)
#include <Winapi.D2D1.hpp>	// (rtl)
#include <FMX.Canvas.D2D.hpp>	// (fmx)
#include <FMX.Canvas.GPU.Helpers.hpp>	// (fmx)
#include <FMX.FontGlyphs.hpp>	// (fmx)
#include <FMX.TextLayout.GPU.hpp>	// (fmx)
#include <FMX.Canvas.GPU.hpp>	// (fmx)
#include <FMX.Context.DX9.hpp>	// (fmx)
#include <FMX.Context.DX11.hpp>	// (fmx)
#include <FMX.ListBox.hpp>	// (fmx)
#include <FMX.DateTimeCtrls.Types.hpp>	// (fmx)
#include <FMX.DateTimeCtrls.hpp>	// (fmx)
#include <FMX.Calendar.Style.hpp>	// (fmx)
#include <FMX.Calendar.hpp>	// (fmx)
#include <FMX.Pickers.hpp>	// (fmx)
#include <FMX.ExtCtrls.hpp>	// (fmx)
#include <System.Win.InternetExplorer.hpp>	// (rtl)
#include <FMX.WebBrowser.hpp>	// (fmx)
#include <FMX.Platform.Win.hpp>	// (fmx)
#include <FMX.Gestures.Win.hpp>	// (fmx)
#include <FMX.Gestures.hpp>	// (fmx)
#include <FMX.Controls.hpp>	// (fmx)
#include <FMX.Header.hpp>	// (fmx)
#include <FMX.Forms.hpp>	// (fmx)
#include <FMX.Platform.hpp>	// (fmx)
#include <FMX.Types.hpp>	// (fmx)
#include <FMX.Grid.hpp>	// (fmx)
#include <FMX.TreeView.hpp>	// (fmx)
#include <FMX.ScrollBox.Style.hpp>	// (fmx)
#include <FMX.ScrollBox.Win.hpp>	// (fmx)
#include <FMX.ScrollBox.hpp>	// (fmx)
#include <FMX.Memo.Style.hpp>	// (fmx)
#include <FMX.Memo.Win.hpp>	// (fmx)
#include <FMX.Memo.hpp>	// (fmx)
#include <FMX.TabControl.hpp>	// (fmx)
#include <System.Bindings.Search.hpp>	// (bindengine)
#include <System.Bindings.Evaluator.hpp>	// (bindengine)
#include <System.Bindings.EvalSys.hpp>	// (bindengine)
#include <System.Bindings.Graph.hpp>	// (bindengine)
#include <System.Bindings.Factories.hpp>	// (bindengine)
#include <System.Bindings.Outputs.hpp>	// (bindengine)
#include <System.Bindings.Methods.hpp>	// (bindengine)
#include <Data.Bind.Grid.hpp>	// (bindcomp)
#include <Data.Bind.Components.hpp>	// (bindcomp)
#include <Fmx.Bind.DBEngExt.hpp>	// (Bindcompfmx)
#include <FMX.ListView.Types.hpp>	// (fmx)
#include <FMX.ListView.Appearances.hpp>	// (fmx)
#include <FMX.SearchBox.Style.hpp>	// (fmx)
#include <FMX.SearchBox.hpp>	// (fmx)
#include <FMX.ListView.hpp>	// (fmx)
#include <Data.Bind.ObjectScope.hpp>	// (bindcomp)
#include <FMX.ComboEdit.Style.hpp>	// (fmx)
#include <FMX.ComboEdit.hpp>	// (fmx)
#include <FMX.CalendarEdit.Style.hpp>	// (fmx)
#include <FMX.CalendarEdit.hpp>	// (fmx)
#include <FMX.Colors.hpp>	// (fmx)
#include <FMX.EditBox.Style.hpp>	// (fmx)
#include <FMX.SpinBox.Style.hpp>	// (fmx)
#include <FMX.SpinBox.hpp>	// (fmx)
#include <FMX.NumberBox.Style.hpp>	// (fmx)
#include <FMX.NumberBox.hpp>	// (fmx)
#include <Fmx.Bind.Editors.hpp>	// (Bindcompfmx)
#include <Data.Bind.DBScope.hpp>	// (bindcomp)
#include <Data.Bind.DBLinks.hpp>	// (bindcomp)
#include <Fmx.Bind.DBLinks.hpp>	// (Bindcompfmx)
#include <Fmx.Bind.Navigator.hpp>	// (Bindcompfmx)
#include <Data.Bind.EngExt.hpp>	// (bindcomp)
#include <Datasnap.DSIntf.hpp>	// (dsnap)
#include <Fmx.Bind.Grid.hpp>	// (Bindcompfmx)

//-- user supplied -----------------------------------------------------------

namespace Lockbox3fmxdd
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
}	/* namespace Lockbox3fmxdd */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_LOCKBOX3FMXDD)
using namespace Lockbox3fmxdd;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Lockbox3fmxddHPP
