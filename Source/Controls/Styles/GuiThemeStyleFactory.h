/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::Control Styles::Common Style Helpers

Interfaces:
***********************************************************************/

#ifndef VCZH_PRESENTATION_CONTROLS_GUITHEMESTYLEFACTORY
#define VCZH_PRESENTATION_CONTROLS_GUITHEMESTYLEFACTORY

#include "../GuiBasicControls.h"
#include "../GuiLabelControls.h"
#include "../GuiButtonControls.h"
#include "../GuiScrollControls.h"
#include "../GuiWindowControls.h"
#include "../GuiContainerControls.h"
#include "../GuiDateTimeControls.h"
#include "../GuiDialogs.h"

#include "../TextEditorPackage/GuiTextControls.h"
#include "../TextEditorPackage/GuiDocumentViewer.h"

#include "../ListControlPackage/GuiListControls.h"
#include "../ListControlPackage/GuiTextListControls.h"
#include "../ListControlPackage/GuiListViewControls.h"
#include "../ListControlPackage/GuiTreeViewControls.h"
#include "../ListControlPackage/GuiComboControls.h"
#include "../ListControlPackage/GuiDataGridControls.h"
#include "../ListControlPackage/GuiBindableListControls.h"
#include "../ListControlPackage/GuiBindableDataGrid.h"

#include "../ToolstripPackage/GuiMenuControls.h"
#include "../ToolstripPackage/GuiToolstripMenu.h"

namespace vl
{
	namespace presentation
	{
		namespace theme
		{
			/// <summary>Theme interface. A theme creates appropriate style controllers or style providers for default controls. Call [M:vl.presentation.theme.GetCurrentTheme] to access this interface.</summary>
			class ITheme : public virtual IDescriptable, public Description<ITheme>
			{
			public:
				/// <summary>Create a style for window.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiWindow::IStyleController*								CreateWindowStyle()=0;
				/// <summary>Create a style for a user customizable control.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiCustomControl::IStyleController*						CreateCustomControlStyle() = 0;
				/// <summary>Create a style for tooltip.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiTooltip::IStyleController*								CreateTooltipStyle()=0;
				/// <summary>Create a style for label.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiLabel::IStyleController*								CreateLabelStyle()=0;
				/// <summary>Create a style for label displaying Alt-combined shortcut key.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiLabel::IStyleController*								CreateShortcutKeyStyle()=0;
				/// <summary>Create a style for scrollable control containers.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiScrollContainer::IStyleProvider*						CreateScrollContainerStyle()=0;
				/// <summary>Create a style for group box.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiControl::IStyleController*								CreateGroupBoxStyle()=0;
				/// <summary>Create a style for tab.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiTab::IStyleController*									CreateTabStyle()=0;
				/// <summary>Create a style for combo box.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiComboBoxListControl::IStyleController*					CreateComboBoxStyle()=0;
				/// <summary>Create a style for multiline text box.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiScrollView::IStyleProvider*							CreateMultilineTextBoxStyle()=0;
				/// <summary>Create a style for singleline text box.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiSinglelineTextBox::IStyleProvider*						CreateTextBoxStyle()=0;
				/// <summary>Create a style for document viewer.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiDocumentViewer::IStyleProvider*						CreateDocumentViewerStyle()=0;
				/// <summary>Create a style for document label.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiDocumentLabel::IStyleController*						CreateDocumentLabelStyle()=0;
				/// <summary>Create a style for document text box.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiDocumentLabel::IStyleController*						CreateDocumentTextBoxStyle()=0;
				/// <summary>Create a style for list view.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiListView::IStyleProvider*								CreateListViewStyle()=0;
				/// <summary>Create a style for tree view.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiTreeView::IStyleProvider*								CreateTreeViewStyle()=0;
				/// <summary>Create a style for selectable list control item background.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiSelectableButton::IStyleController*					CreateListItemBackgroundStyle()=0;
				/// <summary>Create a style for tree list control item expander.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiSelectableButton::IStyleController*					CreateTreeItemExpanderStyle()=0;
				
				/// <summary>Create a style for menu.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiToolstripMenu::IStyleController*						CreateMenuStyle()=0;
				/// <summary>Create a style for menu bar.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiToolstripMenuBar::IStyleController*					CreateMenuBarStyle()=0;
				/// <summary>Create a style for menu splitter.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiControl::IStyleController*								CreateMenuSplitterStyle()=0;
				/// <summary>Create a style for menu bar button.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiToolstripButton::IStyleController*						CreateMenuBarButtonStyle()=0;
				/// <summary>Create a style for menu button.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiToolstripButton::IStyleController*						CreateMenuItemButtonStyle()=0;
				/// <summary>Create a style for toolbar.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiToolstripToolBar::IStyleController*					CreateToolBarStyle()=0;
				/// <summary>Create a style for toolbar button.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiToolstripButton::IStyleController*						CreateToolBarButtonStyle()=0;
				/// <summary>Create a style for toolbar dropdown button.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiToolstripButton::IStyleController*						CreateToolBarDropdownButtonStyle()=0;
				/// <summary>Create a style for toolbar split button.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiToolstripButton::IStyleController*						CreateToolBarSplitButtonStyle()=0;
				/// <summary>Create a style for toolbar.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiControl::IStyleController*								CreateToolBarSplitterStyle()=0;
				
				/// <summary>Create a style for button.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiButton::IStyleController*								CreateButtonStyle()=0;
				/// <summary>Create a style for check box.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiSelectableButton::IStyleController*					CreateCheckBoxStyle()=0;
				/// <summary>Create a style for radio button.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiSelectableButton::IStyleController*					CreateRadioButtonStyle()=0;
				/// <summary>Create a style for date picker.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiDatePicker::IStyleProvider*							CreateDatePickerStyle()=0;
				
				/// <summary>Create a style for horizontal scroll.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiScroll::IStyleController*								CreateHScrollStyle()=0;
				/// <summary>Create a style for vertical scroll.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiScroll::IStyleController*								CreateVScrollStyle()=0;
				/// <summary>Create a style for horizontal tracker.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiScroll::IStyleController*								CreateHTrackerStyle()=0;
				/// <summary>Create a style for vertical tracker.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiScroll::IStyleController*								CreateVTrackerStyle()=0;
				/// <summary>Create a style for progress bar.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiScroll::IStyleController*								CreateProgressBarStyle()=0;
				
				/// <summary>Create a style for text list.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiVirtualTextList::IStyleProvider*						CreateTextListStyle()=0;
				/// <summary>Create a style for check text list item.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiSelectableButton::IStyleController*					CreateCheckTextListItemStyle()=0;
				/// <summary>Create a style for radio text list item.</summary>
				/// <returns>The created style.</returns>
				virtual controls::GuiSelectableButton::IStyleController*					CreateRadioTextListItemStyle()=0;
			};

			class Theme;

			/// <summary>Partial control template collections. [F:vl.presentation.theme.GetCurrentTheme] will returns an object, which walks through multiple registered [T:vl.presentation.theme.ThemeTemplates] to create a correct template object for a control.</summary>
			class ThemeTemplates : public Object, public Description<ThemeTemplates>
			{
				friend class Theme;
			protected:
				ThemeTemplates*														previous = nullptr;
				ThemeTemplates*														next = nullptr;

			public:
				TemplateProperty<templates::GuiWindowTemplate>						window;
				TemplateProperty<templates::GuiControlTemplate>						customControl;
				TemplateProperty<templates::GuiWindowTemplate>						tooltip;
				TemplateProperty<templates::GuiLabelTemplate>						label;
				TemplateProperty<templates::GuiLabelTemplate>						shortcutKey;
				TemplateProperty<templates::GuiScrollViewTemplate>					scrollView;
				TemplateProperty<templates::GuiControlTemplate>						groupBox;
				TemplateProperty<templates::GuiTabTemplate>							tab;
				TemplateProperty<templates::GuiComboBoxTemplate>					comboBox;
				TemplateProperty<templates::GuiMultilineTextBoxTemplate>			multilineTextBox;
				TemplateProperty<templates::GuiSinglelineTextBoxTemplate>			singlelineTextBox;
				TemplateProperty<templates::GuiDocumentViewerTemplate>				documentViewer;
				TemplateProperty<templates::GuiDocumentLabelTemplate>				documentLabel;
				TemplateProperty<templates::GuiDocumentLabelTemplate>				documentTextBox;
				TemplateProperty<templates::GuiListViewTemplate>					listView;
				TemplateProperty<templates::GuiTreeViewTemplate>					treeView;
				TemplateProperty<templates::GuiTextListTemplate>					textList;
				TemplateProperty<templates::GuiSelectableButtonTemplate>			listItemBackground;
				TemplateProperty<templates::GuiSelectableButtonTemplate>			treeItemExpander;
				TemplateProperty<templates::GuiSelectableButtonTemplate>			checkTextListItem;
				TemplateProperty<templates::GuiSelectableButtonTemplate>			radioTextListItem;
				TemplateProperty<templates::GuiMenuTemplate>						menu;
				TemplateProperty<templates::GuiControlTemplate>						menuBar;
				TemplateProperty<templates::GuiControlTemplate>						menuSplitter;
				TemplateProperty<templates::GuiToolstripButtonTemplate>				menuBarButton;
				TemplateProperty<templates::GuiToolstripButtonTemplate>				menuItemButton;
				TemplateProperty<templates::GuiControlTemplate>						toolBar;
				TemplateProperty<templates::GuiToolstripButtonTemplate>				toolBarButton;
				TemplateProperty<templates::GuiToolstripButtonTemplate>				toolBarDropdownButton;
				TemplateProperty<templates::GuiToolstripButtonTemplate>				toolBarSplitButton;
				TemplateProperty<templates::GuiControlTemplate>						toolBarSplitter;
				TemplateProperty<templates::GuiButtonTemplate>						button;
				TemplateProperty<templates::GuiSelectableButtonTemplate>			checkBox;
				TemplateProperty<templates::GuiSelectableButtonTemplate>			radioButton;
				TemplateProperty<templates::GuiDatePickerTemplate>					datePicker;
				TemplateProperty<templates::GuiScrollTemplate>						hScroll;
				TemplateProperty<templates::GuiScrollTemplate>						vScroll;
				TemplateProperty<templates::GuiScrollTemplate>						hTracker;
				TemplateProperty<templates::GuiScrollTemplate>						vTracker;
				TemplateProperty<templates::GuiScrollTemplate>						progressBar;
			};

			/// <summary>Get the current theme style factory object. The default theme is [T:vl.presentation.win7.Win7Theme]. Call [M:vl.presentation.theme.SetCurrentTheme] to change the default theme.</summary>
			/// <returns>The current theme style factory object.</returns>
			extern ITheme*						GetCurrentTheme();
			extern void							InitializeTheme();
			extern void							FinalizeTheme();
			/// <summary>Register a control template collection object.</summary>
			/// <param name="name">The name of the theme.</param>
			/// <param name="theme">The control template collection object.</param>
			extern bool							RegisterTheme(const WString& name, Ptr<ThemeTemplates> theme);
			/// <summary>Unregister a control template collection object.</summary>
			/// <returns>The registered object. Returns null if it does not exist.</returns>
			/// <param name="name">The name of the theme.</param>
			extern Ptr<ThemeTemplates>			UnregisterTheme(const WString& name);

			namespace g
			{
				/// <summary>Create a window.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiWindow*						NewWindow();
				/// <summary>Create a user customizable control.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiCustomControl*				NewCustomControl();
				/// <summary>Create a label.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiLabel*						NewLabel();
				/// <summary>Create a scroll container.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiScrollContainer*			NewScrollContainer();
				/// <summary>Create a group box.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiControl*					NewGroupBox();
				/// <summary>Create a tab.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiTab*						NewTab();
				/// <summary>Create a tab page.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiTabPage*					NewTabPage();
				/// <summary>Create a combo box.</summary>
				/// <returns>The created control.</returns>
				/// <param name="containedListControl">A list control to put in the popup control to show all items.</param>
				extern controls::GuiComboBoxListControl*		NewComboBox(controls::GuiSelectableListControl* containedListControl);
				/// <summary>Create a multiline text box.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiMultilineTextBox*			NewMultilineTextBox();
				/// <summary>Create a singline text box.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiSinglelineTextBox*			NewTextBox();
				/// <summary>Create a document viewer.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiDocumentViewer*				NewDocumentViewer();
				/// <summary>Create a document label.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiDocumentLabel*				NewDocumentLabel();
				/// <summary>Create a document label.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiDocumentLabel*				NewDocumentTextBox();
				/// <summary>Create a list view.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiListView*					NewListView();
				/// <summary>Create a tree view.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiTreeView*					NewTreeView();

				/// <summary>Create a menu.</summary>
				/// <returns>The created control.</returns>
				/// <param name="owner">The owner menu item of the parent menu.</param>
				extern controls::GuiToolstripMenu*				NewMenu(controls::GuiControl* owner);
				/// <summary>Create a menu bar.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiToolstripMenuBar*			NewMenuBar();
				/// <summary>Create a menu splitter.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiControl*					NewMenuSplitter();
				/// <summary>Create a menu bar button.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiToolstripButton*			NewMenuBarButton();
				/// <summary>Create a menu item button.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiToolstripButton*			NewMenuItemButton();
				/// <summary>Create a toolbar.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiToolstripToolBar*			NewToolBar();
				/// <summary>Create a toolbar button.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiToolstripButton*			NewToolBarButton();
				/// <summary>Create a toolbar dropdown button.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiToolstripButton*			NewToolBarDropdownButton();
				/// <summary>Create a toolbar split button.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiToolstripButton*			NewToolBarSplitButton();
				/// <summary>Create a toolbar splitter.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiControl*					NewToolBarSplitter();

				/// <summary>Create a button.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiButton*						NewButton();
				/// <summary>Create a check box.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiSelectableButton*			NewCheckBox();
				/// <summary>Create a radio box.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiSelectableButton*			NewRadioButton();
				/// <summary>Create a date picker.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiDatePicker*					NewDatePicker();
				/// <summary>Create a date combo box.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiDateComboBox*				NewDateComboBox();

				/// <summary>Create a horizontal scroll.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiScroll*						NewHScroll();
				/// <summary>Create a vertical scroll.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiScroll*						NewVScroll();
				/// <summary>Create a horizontal tracker (slide bar).</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiScroll*						NewHTracker();
				/// <summary>Create a vertical tracker (slide bar).</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiScroll*						NewVTracker();
				/// <summary>Create a progress bar.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiScroll*						NewProgressBar();

				/// <summary>Create a text list.</summary>
				/// <returns>The created control.</returns>
				extern controls::GuiTextList*					NewTextList();
			}
		}
	}
}

#endif