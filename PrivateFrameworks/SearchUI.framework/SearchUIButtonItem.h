/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIButtonItem : SFCommandButtonItem {
    <SearchUIButtonItemDelegate> * _delegate;
    bool  _isOverflowButton;
    SFButtonItem * _sfButtonItem;
    bool  _showsMenuAsPrimaryAction;
    unsigned long long  _status;
    bool  _useDefaultSymbolFillStyle;
}

@property (nonatomic) <SearchUIButtonItemDelegate> *delegate;
@property bool isOverflowButton;
@property (nonatomic, retain) SFButtonItem *sfButtonItem;
@property bool showsMenuAsPrimaryAction;
@property (nonatomic) unsigned long long status;
@property bool useDefaultSymbolFillStyle;

- (void).cxx_destruct;
- (bool)allowsContextMenu;
- (id)buttonAppearance;
- (void)buttonPressed;
- (id)command;
- (id)commandForStatus:(unsigned long long)arg1;
- (id)defaultSymbolNameForCommand;
- (id)delegate;
- (id)fallbackImage;
- (unsigned long long)hash;
- (id)image;
- (id)initWithSFButtonItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isOverflowButton;
- (id)offStateCommand;
- (id)offStateImage;
- (id)offStateSymbolName;
- (id)offStateTitle;
- (id)onStateCommand;
- (id)onStateImage;
- (id)onStateSymbolName;
- (id)onStateTitle;
- (id)previewMenu;
- (Class)searchUI_viewControllerClass;
- (void)setDelegate:(id)arg1;
- (void)setIsOverflowButton:(bool)arg1;
- (void)setSfButtonItem:(id)arg1;
- (void)setShowsMenuAsPrimaryAction:(bool)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setUseDefaultSymbolFillStyle:(bool)arg1;
- (id)sfButtonItem;
- (bool)showsMenuAsPrimaryAction;
- (unsigned long long)status;
- (id)title;
- (bool)useDefaultSymbolFillStyle;

@end
