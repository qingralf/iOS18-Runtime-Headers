/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PREditingFontAndContentStylePickerSelectionChange : NSObject {
    <PRPosterContentStyle> * _contentStyle;
    UIFont * _customFont;
    NSNumber * _fontWeight;
    NSString * _numberingSystem;
    NSNumber * _preferredTitleAlignment;
    NSNumber * _preferredTitleLayout;
    NSNumber * _suggestedContentStyle;
    NSNumber * _systemItem;
    NSString * _timeFontIdentifier;
}

@property (nonatomic, retain) <PRPosterContentStyle> *contentStyle;
@property (nonatomic, retain) UIFont *customFont;
@property (nonatomic, retain) NSNumber *fontWeight;
@property (nonatomic, retain) NSString *numberingSystem;
@property (nonatomic, retain) NSNumber *preferredTitleAlignment;
@property (nonatomic, retain) NSNumber *preferredTitleLayout;
@property (getter=isSuggestedContentStyle, nonatomic, retain) NSNumber *suggestedContentStyle;
@property (getter=isSystemItem, nonatomic, retain) NSNumber *systemItem;
@property (nonatomic, retain) NSString *timeFontIdentifier;

- (void).cxx_destruct;
- (id)contentStyle;
- (id)customFont;
- (id)fontWeight;
- (id)isSuggestedContentStyle;
- (id)isSystemItem;
- (id)numberingSystem;
- (id)preferredTitleAlignment;
- (id)preferredTitleLayout;
- (void)setContentStyle:(id)arg1;
- (void)setCustomFont:(id)arg1;
- (void)setFontWeight:(id)arg1;
- (void)setNumberingSystem:(id)arg1;
- (void)setPreferredTitleAlignment:(id)arg1;
- (void)setPreferredTitleLayout:(id)arg1;
- (void)setSuggestedContentStyle:(id)arg1;
- (void)setSystemItem:(id)arg1;
- (void)setTimeFontIdentifier:(id)arg1;
- (id)timeFontIdentifier;

@end