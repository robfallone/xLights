#ifndef MARQUEEPANEL_H
#define MARQUEEPANEL_H

//(*Headers(MarqueePanel)
#include <wx/panel.h>
class wxBitmapButton;
class wxCheckBox;
class wxFlexGridSizer;
class wxGridBagSizer;
class wxNotebook;
class wxNotebookEvent;
class wxSlider;
class wxStaticLine;
class wxStaticText;
class wxTextCtrl;
//*)

#include "../BulkEditControls.h"

class MarqueePanel: public wxPanel
{
	public:

		MarqueePanel(wxWindow* parent);
		virtual ~MarqueePanel();

		//(*Declarations(MarqueePanel)
		BulkEditCheckBox* CheckBox_Marquee_PixelOffsets;
		BulkEditCheckBox* CheckBox_Marquee_Reverse;
		BulkEditCheckBox* CheckBox_Marquee_WrapX;
		BulkEditSlider* Slider_MarqueeXC;
		BulkEditSlider* Slider_MarqueeYC;
		BulkEditSlider* Slider_Marquee_Band_Size;
		BulkEditSlider* Slider_Marquee_ScaleX;
		BulkEditSlider* Slider_Marquee_ScaleY;
		BulkEditSlider* Slider_Marquee_Skip_Size;
		BulkEditSlider* Slider_Marquee_Speed;
		BulkEditSlider* Slider_Marquee_Stagger;
		BulkEditSlider* Slider_Marquee_Start;
		BulkEditSlider* Slider_Marquee_Thickness;
		wxBitmapButton* BitmapButton_Marquee_ScaleX;
		wxBitmapButton* BitmapButton_Marquee_ScaleY;
		wxBitmapButton* BitmapButton_Marquee_Skip_Size;
		wxBitmapButton* BitmapButton_Marquee_Speed;
		wxBitmapButton* BitmapButton_Marquee_Stagger;
		wxBitmapButton* BitmapButton_Marquee_Start;
		wxBitmapButton* BitmapButton_Marquee_Thickness;
		wxNotebook* Notebook_Marquee;
		wxPanel* Panel_Marquee_Position;
		wxPanel* Panel_Marquee_Settings;
		wxStaticLine* StaticLine1;
		wxStaticText* StaticText116;
		wxStaticText* StaticText194;
		wxStaticText* StaticText195;
		wxStaticText* StaticText196;
		wxStaticText* StaticText198;
		wxStaticText* StaticText199;
		wxStaticText* StaticText200;
		wxStaticText* StaticText201;
		wxStaticText* StaticText244;
		wxStaticText* StaticText62;
		//*)

	protected:

		//(*Identifiers(MarqueePanel)
		static const long ID_STATICTEXT_Marquee_Band_Size;
		static const long ID_SLIDER_Marquee_Band_Size;
		static const long IDD_TEXTCTRL_Marquee_Band_Size;
		static const long ID_BITMAPBUTTON_SLIDER_Marquee_Band_Size;
		static const long ID_STATICTEXT_Marquee_Skip_Size;
		static const long ID_SLIDER_Marquee_Skip_Size;
		static const long IDD_TEXTCTRL_Marquee_Skip_Size;
		static const long ID_BITMAPBUTTON_SLIDER_Marquee_Skip_Size;
		static const long ID_STATICTEXT_Marquee_Thickness;
		static const long ID_SLIDER_Marquee_Thickness;
		static const long IDD_TEXTCTRL_Marquee_Thickness;
		static const long ID_BITMAPBUTTON_SLIDER_Marquee_Thickness;
		static const long ID_STATICTEXT_Marquee_Stagger;
		static const long ID_SLIDER_Marquee_Stagger;
		static const long IDD_TEXTCTRL_Marquee_Stagger;
		static const long ID_BITMAPBUTTON_SLIDER_Marquee_Stagger;
		static const long ID_STATICTEXT_Marquee_Speed;
		static const long ID_SLIDER_Marquee_Speed;
		static const long IDD_TEXTCTRL_Marquee_Speed;
		static const long ID_BITMAPBUTTON_SLIDER_Marquee_Speed;
		static const long ID_STATICTEXT_Marquee_Start;
		static const long ID_SLIDER_Marquee_Start;
		static const long IDD_TEXTCTRL_Marquee_Start;
		static const long ID_BITMAPBUTTON_SLIDER_Marquee_Start;
		static const long ID_CHECKBOX_Marquee_Reverse;
		static const long ID_PANEL_Marquee_Settings;
		static const long ID_STATICTEXT_Marquee_ScaleX;
		static const long ID_SLIDER_Marquee_ScaleX;
		static const long IDD_TEXTCTRL_Marquee_ScaleX;
		static const long ID_BITMAPBUTTON_SLIDER_Marquee_ScaleX;
		static const long ID_STATICTEXT_Marquee_ScaleY;
		static const long ID_SLIDER_Marquee_ScaleY;
		static const long IDD_TEXTCTRL_Marquee_ScaleY;
		static const long ID_BITMAPBUTTON_SLIDER_Marquee_ScaleY;
		static const long ID_STATICLINE1;
		static const long ID_CHECKBOX_Marquee_PixelOffsets;
		static const long ID_STATICTEXT_MarqueeXC;
		static const long ID_SLIDER_MarqueeXC;
		static const long ID_CHECKBOX_Marquee_WrapX;
		static const long IDD_TEXTCTRL_MarqueeXC;
		static const long ID_STATICTEXT_MarqueeYC;
		static const long IDD_TEXTCTRL_MarqueeYC;
		static const long ID_SLIDER_MarqueeYC;
		static const long ID_PANEL_Marquee_Position;
		static const long ID_NOTEBOOK_Marquee;
		//*)

	public:

		//(*Handlers(MarqueePanel)
    void OnLockButtonClick(wxCommandEvent& event);
    void OnVCButtonClick(wxCommandEvent& event);
    void OnVCChanged(wxCommandEvent& event);
    //*)

		DECLARE_EVENT_TABLE()
};

#endif
