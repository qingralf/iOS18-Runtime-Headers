/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PREditorNumberingSystemPickerController : NSObject {
    <PREditorNumberingSystemPickerControllerDelegate> * _delegate;
    UIFont * _font;
    NSString * _selectedNumberingSystem;
}

@property (nonatomic) <PREditorNumberingSystemPickerControllerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSLocale *displayLocale;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly, copy) NSString *selectedNumberingSystem;

- (void).cxx_destruct;
- (id)delegate;
- (void)didSelectNumberingSystem:(id)arg1;
- (id)displayLocale;
- (id)font;
- (id)initWithSelectedNumberingSystem:(id)arg1 selectedFont:(id)arg2;
- (id)menu;
- (id)selectedNumberingSystem;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;

@end
