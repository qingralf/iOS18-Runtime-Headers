/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PREditingFontAndContentStylePickerViewController : UIViewController <PREditingContentStylePickerComponentViewControllerDelegate, PREditingFontPickerComponentViewControllerDelegate, PREditingTitleLayoutPickerComponentViewControllerDelegate, PREditorNumberingSystemPickerControllerDelegate, PREditorNumberingSystemViewControllerDelegate, UIPopoverPresentationControllerDelegate, UISheetPresentationControllerDelegate> {
    NSArray * _additionalFontConfigurations;
    id /* block */  _changeHandler;
    unsigned long long  _components;
    PREditorContentStylePickerConfiguration * _contentStylePickerConfiguration;
    PREditingContentStylePickerComponentViewController * _contentStylePickerController;
    double  _contentsLuminance;
    <PREditingFontAndContentStylePickerViewControllerDelegate> * _delegate;
    NSURL * _extensionBundleURL;
    PREditingFontPickerComponentViewController * _fontPickerController;
    bool  _hasLoadedComponentViewControllers;
    UIBarButtonItem * _numberSystemBarItem;
    PREditorNumberingSystemPickerController * _numberingSystemController;
    PREditorNumberingSystemViewController * _numberingSystemViewController;
    NSString * _role;
    UIStackView * _rootStackView;
    PRTitleAlignmentBarButtonItem * _titleAlignmentBarItem;
    PREditingTitleLayoutPickerComponentViewController * _titleLayoutPickerController;
    NSString * _titleString;
    PRPosterTitleStyleConfiguration * _titleStyleConfiguration;
}

@property (nonatomic, copy) NSArray *additionalFontConfigurations;
@property (nonatomic, copy) id /* block */ changeHandler;
@property (nonatomic, readonly) unsigned long long components;
@property (nonatomic, retain) PREditorContentStylePickerConfiguration *contentStylePickerConfiguration;
@property (nonatomic, retain) PREditingContentStylePickerComponentViewController *contentStylePickerController;
@property (nonatomic) double contentsLuminance;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PREditingFontAndContentStylePickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *extensionBundleURL;
@property (nonatomic, retain) PREditingFontPickerComponentViewController *fontPickerController;
@property (nonatomic) bool hasLoadedComponentViewControllers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *numberSystemBarItem;
@property (nonatomic, retain) PREditorNumberingSystemPickerController *numberingSystemController;
@property (nonatomic, retain) PREditorNumberingSystemViewController *numberingSystemViewController;
@property (nonatomic, readonly, copy) NSString *role;
@property (nonatomic, retain) UIStackView *rootStackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) PRTitleAlignmentBarButtonItem *titleAlignmentBarItem;
@property (nonatomic, retain) PREditingTitleLayoutPickerComponentViewController *titleLayoutPickerController;
@property (nonatomic, copy) NSString *titleString;
@property (nonatomic, retain) PRPosterTitleStyleConfiguration *titleStyleConfiguration;

+ (id)defaultFontIdentifiersForRole:(id)arg1;
+ (id)defaultFontIdentifiersForRole:(id)arg1 titleString:(id)arg2;

- (void).cxx_destruct;
- (void)_closeButtonTapped:(id)arg1;
- (bool)_shouldShowWeightSliderForSelectedFont;
- (void)_signalDelegateDidFinish;
- (id)additionalFontConfigurations;
- (id /* block */)changeHandler;
- (unsigned long long)components;
- (id)contentStylePickerComponentViewController:(id)arg1 coordinatorForStyle:(id)arg2 isSuggested:(bool)arg3;
- (void)contentStylePickerComponentViewController:(id)arg1 didSelectStyle:(id)arg2 isSuggestedStyle:(bool)arg3 userSelected:(bool)arg4;
- (void)contentStylePickerComponentViewControllerDidChangeHeight:(id)arg1;
- (id)contentStylePickerConfiguration;
- (id)contentStylePickerController;
- (double)contentsLuminance;
- (id)delegate;
- (double)desiredDetent;
- (void)didPressTitleAlignmentBarButtonItem:(id)arg1;
- (id)extensionBundleURL;
- (void)fontPickerComponentViewController:(id)arg1 didChangeFontWeight:(double)arg2;
- (void)fontPickerComponentViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)fontPickerComponentViewControllerDidChangeHeight:(id)arg1;
- (bool)fontPickerComponentViewControllerShouldShowWeightSliderForSelectedFont:(id)arg1;
- (id)fontPickerController;
- (bool)hasLoadedComponentViewControllers;
- (id)initWithComponents:(unsigned long long)arg1 role:(id)arg2 titleString:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadComponentViewControllersIfNeeded;
- (void)loadView;
- (id)localeWithNumberingSystem:(id)arg1;
- (id)numberSystemBarItem;
- (id)numberingSystemController;
- (void)numberingSystemPickerController:(id)arg1 didSelectNumberingSystem:(id)arg2;
- (id)numberingSystemViewController;
- (void)numberingSystemViewController:(id)arg1 didSelectNumberingSystem:(id)arg2;
- (void)numberingSystemWasChanged:(id)arg1 locale:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)role;
- (id)rootStackView;
- (void)setAdditionalFontConfigurations:(id)arg1;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)setContentStylePickerConfiguration:(id)arg1;
- (void)setContentStylePickerController:(id)arg1;
- (void)setContentsLuminance:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtensionBundleURL:(id)arg1;
- (void)setFontPickerController:(id)arg1;
- (void)setHasLoadedComponentViewControllers:(bool)arg1;
- (void)setNumberSystemBarItem:(id)arg1;
- (void)setNumberingSystemController:(id)arg1;
- (void)setNumberingSystemViewController:(id)arg1;
- (void)setRootStackView:(id)arg1;
- (void)setTitleAlignmentBarItem:(id)arg1;
- (void)setTitleLayoutPickerController:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)setTitleStyleConfiguration:(id)arg1;
- (id)titleAlignmentBarItem;
- (void)titleLayoutPickerComponentViewController:(id)arg1 didSelectTitleLayout:(unsigned long long)arg2 userSelected:(bool)arg3;
- (id)titleLayoutPickerController;
- (id)titleString;
- (id)titleStyleConfiguration;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
